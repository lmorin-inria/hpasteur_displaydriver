#include <stdlib.h>
typedef unsigned char uint8_t;

namespace hpasteur {
  class Font
  {
  private:
    size_t size_A = 28;
    size_t size_B = 32;
    size_t size_C = 25;
    size_t size_D = 30;
    size_t size_E = 24;
    size_t size_F = 19;
    size_t size_G = 34;
    size_t size_H = 25;
    size_t size_I = 23;
    size_t size_J = 20;
    size_t size_K = 26;
    size_t size_L = 17;
    size_t size_M = 37;
    size_t size_N = 37;
    size_t size_O = 40;
    size_t size_P = 23;
    size_t size_Q = 41;
    size_t size_R = 29;
    size_t size_S = 27;
    size_t size_T = 17;
    size_t size_U = 24;
    size_t size_V = 21;
    size_t size_W = 33;
    size_t size_X = 29;
    size_t size_Y = 20;
    size_t size_Z = 29;
    size_t size_0 = 39;
    size_t size_1 = 18;
    size_t size_2 = 28;
    size_t size_3 = 32;
    size_t size_4 = 18;
    size_t size_5 = 27;
    size_t size_6 = 30;
    size_t size_7 = 27;
    size_t size_8 = 40;
    size_t size_9 = 34;


    uint8_t font_A[28] = {117, 112, 99, 94, 82, 73, 63, 51, 39, 30, 22, 10, 24, 31, 41, 53, 69, 76, 85, 95, 111, 103, 127, 64, 65, 66, 67, 68};
    uint8_t font_B[32] = {122, 123, 124, 116, 114, 110, 103, 96, 88, 77, 60, 45, 38, 32, 25, 19, 17, 12, 11, 10, 69, 68, 67, 66, 52, 40, 34, 23, 80, 91, 101, 108};
    uint8_t font_C[25] = {4, 3, 2, 1, 7, 18, 0, 21, 29, 36, 43, 54, 62, 71, 86, 93, 99, 106, 113, 119, 120, 121, 122, 123, 124};
    uint8_t font_D[30] = {2, 10, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 123, 124, 116, 114, 110, 103, 96, 89, 78, 61, 46, 38, 32, 25, 19, 13, 4, 3};
    uint8_t font_E[24] = {122, 123, 124, 125, 126, 127, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 13, 14, 15, 67, 68, 69};
    uint8_t font_F[19] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 13, 14, 15, 67, 68, 69};
    uint8_t font_G[34] = {4, 3, 2, 1, 0, 7, 18, 21, 29, 36, 43, 54, 62, 71, 86, 93, 99, 106, 113, 119, 120, 121, 122, 123, 124, 116, 114, 110, 103, 96, 89, 78, 77, 76};
    uint8_t font_H[25] = {18, 37, 47, 55, 72, 82, 94, 106, 118, 126, 110, 95, 85, 77, 60, 50, 42, 19, 63, 64, 65, 66, 67, 68, 69};
    uint8_t font_I[23] = {10, 9, 8, 7, 11, 12, 13, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 121, 120, 119, 123, 124, 125};
    uint8_t font_J[20] = {7, 8, 9, 10, 11, 12, 13, 23, 34, 40, 52, 66, 80, 91, 101, 108, 121, 120, 115, 104};
    uint8_t font_K[26] = {66, 52, 40, 34, 23, 10, 2, 80, 91, 101, 108, 122, 75, 84, 92, 98, 105, 114, 126, 58, 49, 41, 35, 28, 19, 14};
    uint8_t font_L[17] = {2, 10, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 123, 124, 125, 126, 127};
    uint8_t font_M[37] = {117, 112, 93, 86, 71, 62, 54, 43, 36, 20, 5, 6, 18, 27, 33, 39, 48, 57, 66, 58, 49, 41, 35, 28, 19, 14, 15, 26, 38, 46, 61, 70, 78, 96, 89, 111, 127};
    uint8_t font_N[37] = {117, 112, 93, 86, 71, 62, 54, 43, 36, 20, 5, 6, 18, 27, 33, 39, 48, 57, 66, 75, 84, 92, 98, 105, 114, 126, 127, 111, 96, 89, 78, 70, 61, 46, 38, 26, 15};
    uint8_t font_O[40] = {120, 119, 113, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18, 7, 0, 1, 2, 3, 4, 13, 19, 25, 32, 38, 46, 61, 70, 78, 89, 96, 103, 110, 114, 125, 124, 123, 122, 121};
    uint8_t font_P[23] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 17, 19, 25, 32, 38, 45, 60, 69, 68, 67};
    uint8_t font_Q[41] = {130, 129, 128, 120, 119, 113, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18, 7, 1, 2, 3, 13, 19, 25, 32, 38, 46, 61, 70, 78, 89, 96, 103, 110, 114, 116, 124, 123, 122, 121};
    // uint8_t font_R[29] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 17, 19, 25, 32, 38, 45, 60, 69, 68, 67, 76, 85, 95, 103, 111, 127};
    // uint8_t font_S[27] = {104, 115, 120, 121, 122, 123, 124, 116, 105, 98, 92, 84, 75, 66, 57, 48, 39, 33, 27, 16, 8, 1, 2, 3, 12, 17, 28};
    // uint8_t font_T[17] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 7, 8, 9, 10, 11, 12, 13};
    // uint8_t font_U[24] = {18, 21, 37, 55, 72, 94, 106, 113, 119, 120, 121, 123, 124, 122, 125, 114, 110, 103, 88, 77, 60, 42, 25, 19};
    // uint8_t font_V[21] = {122, 107, 100, 90, 79, 63, 56, 47, 37, 29, 20, 109, 102, 92, 81, 69, 59, 50, 42, 32, 26};
    // uint8_t font_W[33] = {113, 106, 118, 99, 93, 86, 71, 62, 54, 43, 104, 97, 90, 83, 74, 66, 75, 84, 92, 98, 105, 114, 126, 110, 103, 96, 89, 78, 70, 61, 46, 38, 36};
    // uint8_t font_X[29] = {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 19, 14, 6, 18, 27, 33, 39, 48, 57, 75, 84, 92, 98, 105, 114, 126};
    // uint8_t font_Y[20] = {6, 18, 27, 33, 39, 48, 57, 66, 58, 49, 41, 35, 28, 19, 14, 80, 91, 101, 108, 122};
    // uint8_t font_Z[29] = {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 19, 14, 13, 12, 11, 10, 9, 8, 7, 119, 120, 121, 122, 123, 124, 125};

    // uint8_t font_0 [39] 	= {7, 0, 1, 2, 3, 4, 13, 19, 25, 32, 38, 46, 61, 78, 89, 96, 103, 110, 114, 116, 124, 123, 122, 121, 120, 113, 115, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18};
    // uint8_t font_1 [18] 	= {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 22, 30, 33, 120, 121, 123, 124};
    // uint8_t font_2 [28] 	= {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 17, 12, 3, 2, 1, 8, 16, 27, 119, 120, 121, 122, 123, 124, 125};
    // uint8_t font_3 [32] 	= {27, 16, 8, 1, 2, 3, 4, 13, 19, 25, 32, 42, 50, 59, 69, 68, 67, 66, 76, 85, 95, 103, 110, 114, 125, 124, 123, 122, 121, 120, 115, 104};
    // uint8_t font_4 [18] 	= {63, 51, 39, 30, 22, 10, 64, 65, 66, 67, 68, 69, 80, 91, 101, 108, 52, 122};
    // uint8_t font_5 [27] 	= {120, 121, 122, 123, 124, 116, 114, 110, 103, 96, 88, 77, 69, 68, 67, 66, 65, 64, 51, 33, 16, 8, 9, 10, 11, 12, 13};
    // uint8_t font_6 [30] 	= {17, 12, 11, 10, 9, 8, 16, 27, 47, 55, 72, 94, 104, 115, 120, 121, 122, 123, 124, 116, 105, 95, 77, 69, 68, 67, 65, 64, 63, 66};
    // uint8_t font_7 [27] 	= {7, 8, 9, 10, 11, 12, 13, 14, 19, 28, 41, 49, 66, 58, 74, 83, 90, 97, 104, 113, 118, 63, 64, 65, 67, 68, 69};
    // uint8_t font_8 [40] 	= {64, 63, 56, 47, 37, 21, 18, 7, 1, 2, 3, 13, 19, 25, 42, 50, 59, 69, 68, 67, 66, 65, 73, 82, 94, 106, 113, 119, 120, 121, 122, 123, 124, 116, 114, 110, 103, 88, 85, 76};
    // uint8_t font_9 [34] 	= {120, 121, 122, 123, 124, 116, 114, 110, 95, 60, 42, 25, 19, 17, 12, 10, 9, 11, 8, 16, 18, 21, 37, 47, 56, 63, 64, 65, 66, 67, 68, 69, 77, 119};

    // uint8_t * numerics[10]     = {font_0, font_1, font_2, font_3, font_4, font_5, font_6, font_7, font_8, font_9};
    // size_t numerics_size[10]   = {size_0, size_1, size_2, size_3, size_4, size_5, size_6, size_7, size_8, size_9};
    // uint8_t * letters[26]      = {font_A, font_B, font_C, font_D, font_E, font_F, font_G, font_H, font_I, font_J, font_K, font_L, font_M, font_N, font_O, font_P, font_Q, font_R, font_S, font_T, font_U, font_V, font_W, font_X, font_Y, font_Z};
    // size_t letters_size[26]    = {size_A, size_B, size_C, size_D, size_E, size_F, size_G, size_H, size_I, size_J, size_K, size_L, size_M, size_N, size_O, size_P, size_Q, size_R, size_S, size_T, size_U, size_V, size_W, size_X, size_Y, size_Z};

    // uint8_t * characters[36]   = {font_A, font_B, font_C, font_D, font_E, font_F, font_G, font_H, font_I, font_J, font_K, font_L, font_M, font_N, font_O, font_P, font_Q, font_R, font_S, font_T, font_U, font_V, font_W, font_X, font_Y, font_Z, font_0, font_1, font_2, font_3, font_4, font_5, font_6, font_7, font_8, font_9};
    // size_t characters_size[36] = {size_A, size_B, size_C, size_D, size_E, size_F, size_G, size_H, size_I, size_J, size_K, size_L, size_M, size_N, size_O, size_P, size_Q, size_R, size_S, size_T, size_U, size_V, size_W, size_X, size_Y, size_Z, size_0, size_1, size_2, size_3, size_4, size_5, size_6, size_7, size_8, size_9};

    uint8_t * characters[36]   = {font_A, font_B, font_C, font_D, font_E, font_F, font_G, font_H, font_I, font_J, font_K, font_L, font_M, font_N, font_O, font_P, font_Q};
    size_t characters_size[36] = {size_A, size_B, size_C, size_D, size_E, size_F, size_G, size_H, size_I, size_J, size_K, size_L, size_M, size_N, size_O, size_P, size_Q};

    // uint8_t ascii2index[256];
    uint8_t maxIndex = 0;
    
  public:
    Font(/* args */) {
      maxIndex = 'Q' - 'A' + 1;

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
    bool getCharacterByIndex(size_t index, uint8_t * &char_ptr, size_t & char_size) {
      if (index > maxIndex) return false;
      char_ptr = characters[index];
      char_size = characters_size[index];
      return true;
    }

    bool getCharacterByChar(char chr, uint8_t * &char_ptr, size_t & char_size) {
      // uint8_t index = ascii2index[(uint8_t) chr];
      // if (index == 255) return false;
      if (chr > 'Q' || chr < 'A') return false;
      uint8_t index = chr - 'A';
      getCharacterByIndex(index, char_ptr, char_size);
      return true;
    }
  };

}
