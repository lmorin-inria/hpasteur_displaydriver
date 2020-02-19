#include <stdlib.h>
#include <avr/pgmspace.h>
typedef unsigned char uint8_t;

namespace hpasteur {
  class Font
  {
  public:
    static const size_t size_A = 28;
    static const size_t size_B = 32;
    static const size_t size_C = 25;
    static const size_t size_D = 30;
    static const size_t size_E = 24;
    static const size_t size_F = 19;
    static const size_t size_G = 34;
    static const size_t size_H = 25;
    static const size_t size_I = 23;
    static const size_t size_J = 20;
    static const size_t size_K = 26;
    static const size_t size_L = 17;
    static const size_t size_M = 37;
    static const size_t size_N = 37;
    static const size_t size_O = 40;
    static const size_t size_P = 23;
    static const size_t size_Q = 41;
    static const size_t size_R = 29;
    static const size_t size_S = 27;
    static const size_t size_T = 17;
    static const size_t size_U = 24;
    static const size_t size_V = 21;
    static const size_t size_W = 33;
    static const size_t size_X = 29;
    static const size_t size_Y = 20;
    static const size_t size_Z = 29;
    static const size_t size_0 = 39;
    static const size_t size_1 = 18;
    static const size_t size_2 = 28;
    static const size_t size_3 = 32;
    static const size_t size_4 = 18;
    static const size_t size_5 = 27;
    static const size_t size_6 = 30;
    static const size_t size_7 = 27;
    static const size_t size_8 = 40;
    static const size_t size_9 = 34;


    static const uint8_t font_A[28];
    static const uint8_t font_B[32];
    static const uint8_t font_C[25];
    static const uint8_t font_D[30];
    static const uint8_t font_E[24];
    static const uint8_t font_F[19];
    static const uint8_t font_G[34];
    static const uint8_t font_H[25];
    static const uint8_t font_I[23];
    static const uint8_t font_J[20];
    static const uint8_t font_K[26];
    static const uint8_t font_L[17];
    static const uint8_t font_M[37];
    static const uint8_t font_N[37];
    static const uint8_t font_O[40];
    static const uint8_t font_P[23];
    static const uint8_t font_Q[41];
    static const uint8_t font_R[29];
    static const uint8_t font_S[27];
    static const uint8_t font_T[17];
    static const uint8_t font_U[24];
    static const uint8_t font_V[21];
    static const uint8_t font_W[33];
    static const uint8_t font_X[29];
    static const uint8_t font_Y[20];
    static const uint8_t font_Z[29];
    static const uint8_t font_0 [39];
    static const uint8_t font_1 [18];
    static const uint8_t font_2 [28];
    static const uint8_t font_3 [32];
    static const uint8_t font_4 [18];
    static const uint8_t font_5 [27];
    static const uint8_t font_6 [30];
    static const uint8_t font_7 [27];
    static const uint8_t font_8 [40];
    static const uint8_t font_9 [34];

    // static const uint8_t * const numerics[10];
    // static const size_t    numerics_size[10];
    // static const uint8_t * const letters[26];
    // static const size_t    letters_size[26];

    static const uint8_t * const characters[36];
    static const size_t    characters_size[36];

    static const uint8_t ascii2index[256];
    uint8_t maxIndex = 0;
    
  public:
    Font(/* args */) {
      maxIndex = 'Z' - 'A' + 1;

      // for (size_t index=0;index<256; index++) {
      //   ascii2index[index] = 255;
      // }
      // maxIndex = 0;
      // ascii2index['A'] = maxIndex++;
      // ascii2index['B'] = maxIndex++;
      // ascii2index['C'] = maxIndex++;
      // ascii2index['D'] = maxIndex++;
      // ascii2index['E'] = maxIndex++;
      // ascii2index['F'] = maxIndex++;
      // ascii2index['G'] = maxIndex++;
      // ascii2index['H'] = maxIndex++;
      // ascii2index['I'] = maxIndex++;
      // ascii2index['J'] = maxIndex++;
      // ascii2index['K'] = maxIndex++;
      // ascii2index['L'] = maxIndex++;
      // ascii2index['M'] = maxIndex++;
      // ascii2index['N'] = maxIndex++;
      // ascii2index['O'] = maxIndex++;
      // ascii2index['P'] = maxIndex++;
      // ascii2index['Q'] = maxIndex++;
      // ascii2index['R'] = maxIndex++;
      // ascii2index['S'] = maxIndex++;
      // ascii2index['T'] = maxIndex++;
      // ascii2index['U'] = maxIndex++;
      // ascii2index['V'] = maxIndex++;
      // ascii2index['W'] = maxIndex++;
      // ascii2index['X'] = maxIndex++;
      // ascii2index['Y'] = maxIndex++;
      // ascii2index['Z'] = maxIndex++;
      // maxIndex = 0;
      // ascii2index['a'] = maxIndex++;
      // ascii2index['b'] = maxIndex++;
      // ascii2index['c'] = maxIndex++;
      // ascii2index['d'] = maxIndex++;
      // ascii2index['e'] = maxIndex++;
      // ascii2index['f'] = maxIndex++;
      // ascii2index['g'] = maxIndex++;
      // ascii2index['h'] = maxIndex++;
      // ascii2index['i'] = maxIndex++;
      // ascii2index['j'] = maxIndex++;
      // ascii2index['k'] = maxIndex++;
      // ascii2index['l'] = maxIndex++;
      // ascii2index['m'] = maxIndex++;
      // ascii2index['n'] = maxIndex++;
      // ascii2index['o'] = maxIndex++;
      // ascii2index['p'] = maxIndex++;
      // ascii2index['q'] = maxIndex++;
      // ascii2index['r'] = maxIndex++;
      // ascii2index['s'] = maxIndex++;
      // ascii2index['t'] = maxIndex++;
      // ascii2index['u'] = maxIndex++;
      // ascii2index['v'] = maxIndex++;
      // ascii2index['w'] = maxIndex++;
      // ascii2index['x'] = maxIndex++;
      // ascii2index['y'] = maxIndex++;
      // ascii2index['z'] = maxIndex++;
      // ascii2index['0'] = maxIndex++;
      // ascii2index['1'] = maxIndex++;
      // ascii2index['2'] = maxIndex++;
      // ascii2index['3'] = maxIndex++;
      // ascii2index['4'] = maxIndex++;
      // ascii2index['5'] = maxIndex++;
      // ascii2index['6'] = maxIndex++;
      // ascii2index['7'] = maxIndex++;
      // ascii2index['8'] = maxIndex++;
      // ascii2index['9'] = maxIndex++;
    }
    ~Font() {}
    bool getCharacterByIndex(size_t index, const uint8_t * &char_ptr, size_t & char_size) {
      if (index > maxIndex) return false;
      char_ptr = characters[index];
      char_size = characters_size[index];
      return true;
    }

    bool getCharacterByChar(char chr, const uint8_t * &char_ptr, size_t & char_size) {
      // uint8_t index = ascii2index[(uint8_t) chr];
      // if (index == 255) return false;
      if (chr >= 'A' && chr <= 'Z')  {
        getCharacterByIndex(chr - 'A', char_ptr, char_size);
      }
      else if (chr >= '0' && chr <= '9')  {
        getCharacterByIndex(chr - '0' + 'Z' + 1, char_ptr, char_size);
      }
      else return false;
      return true;
    }
  };

}
