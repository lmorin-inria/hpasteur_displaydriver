
import os
Import("env")

def vverbose():
    print("************* SETUP ***************")
    # access to global construction environment
    print(env)
    # Dump construction environment (for debug purpose)
    print(env.Dump())

    # access to project construction environment
    print(projenv)
    # Dump construction environments (for debug purpose)
    print(projenv.Dump())

def configSetup():
    try:
        import configparser
    except ImportError:
        import ConfigParser as configparser
    config = configparser.ConfigParser()
    config.read("platformio.ini")
    return config

def telnet_callback(*args, **kwargs):
    print("Telnet the AVR board")
    global host, port,device
    env.Execute("avrdude -c arduino -p "+device+" -P net:"+host+":"+port+" -t")

def upload_callback(*args, **kwargs):
    print("Telnet the AVR board")
    global host, port,device
    env.Execute("/usr/bin/avrdude -c arduino -p "+device+" -P net:"+host+":"+port+" -U flash:w:.pio/build/ATmega328P/firmware.hex")

def sclean_callback(*args, **kwargs):
    print("Cleean temporary files")
    env.Execute("rm main.ii main.o main.s main.res cc*trans*.s")

def assembly_callback(*args, **kwargs):
    sclean_callback(args, kwargs)
    print("Compile for assembly files")
    piohome = "/home/lmorin/.platformio/packages"
    binEnv="{0}/framework-arduino-avr-minicore".format(piohome)

    basicOptions="-fno-exceptions -fno-threadsafe-statics -fpermissive -std=gnu++11 -O3 -ggdb -Os -Wall -ffunction-sections -fdata-sections -flto -mmcu=atmega328p"
    cppOptions=" -DPLATFORMIO=40002 -DARDUINO_AVR_ATmega328P -DNO_DEBUG=1 -DF_CPU=16000000L -DARDUINO_ARCH_AVR -DARDUINO=10808"
    envOptions="-Iinclude -Isrc -I.pio/libdeps/ATmega328P/HardWire_ID1437/src -I{0}/cores/MiniCore -I{0}/variants/standard".format(binEnv)

    gcc="{0}/toolchain-atmelavr/bin/avr-g++".format(piohome)
    env.Execute("{3} -save-temps {0} {1} {2} src/main.cpp".format(basicOptions, cppOptions, envOptions, gcc))

#vverbose()
config = configSetup()
host = config.get("env:ATmega328P", "avrdump_host")
port = config.get("env:ATmega328P", "avrdump_port")
device = config.get("env:ATmega328P", "avrdump_device")
env.AlwaysBuild(env.Alias("telnet", None, telnet_callback))
env.AlwaysBuild(env.Alias("wupload", None, upload_callback))
env.AlwaysBuild(env.Alias("sclean", None, sclean_callback))
env.AlwaysBuild(env.Alias("assembly", None, assembly_callback))

# To get assembly files, remove '-c' and add '-save-temps'
