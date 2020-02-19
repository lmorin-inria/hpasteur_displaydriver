#include "font.h"

namespace hpasteur {

  const uint8_t PROGMEM Font::font_A[28] = {117, 112, 99, 94, 82, 73, 63, 51, 39, 30, 22, 10, 24, 31, 41, 53, 69, 76, 85, 95, 111, 103, 127, 64, 65, 66, 67, 68};
  const uint8_t PROGMEM Font::font_B[32] = {122, 123, 124, 116, 114, 110, 103, 96, 88, 77, 60, 45, 38, 32, 25, 19, 17, 12, 11, 10, 69, 68, 67, 66, 52, 40, 34, 23, 80, 91, 101, 108};
  const uint8_t PROGMEM Font::font_C[25] = {4, 3, 2, 1, 7, 18, 0, 21, 29, 36, 43, 54, 62, 71, 86, 93, 99, 106, 113, 119, 120, 121, 122, 123, 124};
  const uint8_t PROGMEM Font::font_D[30] = {2, 10, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 123, 124, 116, 114, 110, 103, 96, 89, 78, 61, 46, 38, 32, 25, 19, 13, 4, 3};
  const uint8_t PROGMEM Font::font_E[24] = {122, 123, 124, 125, 126, 127, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 13, 14, 15, 67, 68, 69};
  const uint8_t PROGMEM Font::font_F[19] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 13, 14, 15, 67, 68, 69};
  const uint8_t PROGMEM Font::font_G[34] = {4, 3, 2, 1, 0, 7, 18, 21, 29, 36, 43, 54, 62, 71, 86, 93, 99, 106, 113, 119, 120, 121, 122, 123, 124, 116, 114, 110, 103, 96, 89, 78, 77, 76};
  const uint8_t PROGMEM Font::font_H[25] = {18, 37, 47, 55, 72, 82, 94, 106, 118, 126, 110, 95, 85, 77, 60, 50, 42, 19, 63, 64, 65, 66, 67, 68, 69};
  const uint8_t PROGMEM Font::font_I[23] = {10, 9, 8, 7, 11, 12, 13, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 121, 120, 119, 123, 124, 125};
  const uint8_t PROGMEM Font::font_J[20] = {7, 8, 9, 10, 11, 12, 13, 23, 34, 40, 52, 66, 80, 91, 101, 108, 121, 120, 115, 104};
  const uint8_t PROGMEM Font::font_K[26] = {66, 52, 40, 34, 23, 10, 2, 80, 91, 101, 108, 122, 75, 84, 92, 98, 105, 114, 126, 58, 49, 41, 35, 28, 19, 14};
  const uint8_t PROGMEM Font::font_L[17] = {2, 10, 23, 34, 40, 52, 66, 80, 91, 101, 108, 122, 123, 124, 125, 126, 127};
  const uint8_t PROGMEM Font::font_M[37] = {117, 112, 93, 86, 71, 62, 54, 43, 36, 20, 5, 6, 18, 27, 33, 39, 48, 57, 66, 58, 49, 41, 35, 28, 19, 14, 15, 26, 38, 46, 61, 70, 78, 96, 89, 111, 127};
  const uint8_t PROGMEM Font::font_N[37] = {117, 112, 93, 86, 71, 62, 54, 43, 36, 20, 5, 6, 18, 27, 33, 39, 48, 57, 66, 75, 84, 92, 98, 105, 114, 126, 127, 111, 96, 89, 78, 70, 61, 46, 38, 26, 15};
  const uint8_t PROGMEM Font::font_O[40] = {120, 119, 113, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18, 7, 0, 1, 2, 3, 4, 13, 19, 25, 32, 38, 46, 61, 70, 78, 89, 96, 103, 110, 114, 125, 124, 123, 122, 121};
  const uint8_t PROGMEM Font::font_P[23] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 17, 19, 25, 32, 38, 45, 60, 69, 68, 67};
  const uint8_t PROGMEM Font::font_Q[41] = {130, 129, 128, 120, 119, 113, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18, 7, 1, 2, 3, 13, 19, 25, 32, 38, 46, 61, 70, 78, 89, 96, 103, 110, 114, 116, 124, 123, 122, 121};
  const uint8_t PROGMEM Font::font_R[29] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 11, 12, 17, 19, 25, 32, 38, 45, 60, 69, 68, 67, 76, 85, 95, 103, 111, 127};
  const uint8_t PROGMEM Font::font_S[27] = {104, 115, 120, 121, 122, 123, 124, 116, 105, 98, 92, 84, 75, 66, 57, 48, 39, 33, 27, 16, 8, 1, 2, 3, 12, 17, 28};
  const uint8_t PROGMEM Font::font_T[17] = {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 7, 8, 9, 10, 11, 12, 13};
  const uint8_t PROGMEM Font::font_U[24] = {18, 21, 37, 55, 72, 94, 106, 113, 119, 120, 121, 123, 124, 122, 125, 114, 110, 103, 88, 77, 60, 42, 25, 19};
  const uint8_t PROGMEM Font::font_V[21] = {122, 107, 100, 90, 79, 63, 56, 47, 37, 29, 20, 109, 102, 92, 81, 69, 59, 50, 42, 32, 26};
  const uint8_t PROGMEM Font::font_W[33] = {113, 106, 118, 99, 93, 86, 71, 62, 54, 43, 104, 97, 90, 83, 74, 66, 75, 84, 92, 98, 105, 114, 126, 110, 103, 96, 89, 78, 70, 61, 46, 38, 36};
  const uint8_t PROGMEM Font::font_X[29] = {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 19, 14, 6, 18, 27, 33, 39, 48, 57, 75, 84, 92, 98, 105, 114, 126};
  const uint8_t PROGMEM Font::font_Y[20] = {6, 18, 27, 33, 39, 48, 57, 66, 58, 49, 41, 35, 28, 19, 14, 80, 91, 101, 108, 122};
  const uint8_t PROGMEM Font::font_Z[29] = {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 19, 14, 13, 12, 11, 10, 9, 8, 7, 119, 120, 121, 122, 123, 124, 125};

  const uint8_t PROGMEM Font::font_0 [39] 	= {7, 0, 1, 2, 3, 4, 13, 19, 25, 32, 38, 46, 61, 78, 89, 96, 103, 110, 114, 116, 124, 123, 122, 121, 120, 113, 115, 106, 99, 93, 86, 71, 62, 54, 43, 36, 29, 21, 18};
  const uint8_t PROGMEM Font::font_1 [18] 	= {122, 108, 101, 91, 80, 66, 52, 40, 34, 23, 10, 22, 30, 33, 120, 121, 123, 124};
  const uint8_t PROGMEM Font::font_2 [28] 	= {118, 113, 104, 97, 90, 83, 74, 66, 58, 49, 41, 35, 28, 17, 12, 3, 2, 1, 8, 16, 27, 119, 120, 121, 122, 123, 124, 125};
  const uint8_t PROGMEM Font::font_3 [32] 	= {27, 16, 8, 1, 2, 3, 4, 13, 19, 25, 32, 42, 50, 59, 69, 68, 67, 66, 76, 85, 95, 103, 110, 114, 125, 124, 123, 122, 121, 120, 115, 104};
  const uint8_t PROGMEM Font::font_4 [18] 	= {63, 51, 39, 30, 22, 10, 64, 65, 66, 67, 68, 69, 80, 91, 101, 108, 52, 122};
  const uint8_t PROGMEM Font::font_5 [27] 	= {120, 121, 122, 123, 124, 116, 114, 110, 103, 96, 88, 77, 69, 68, 67, 66, 65, 64, 51, 33, 16, 8, 9, 10, 11, 12, 13};
  const uint8_t PROGMEM Font::font_6 [30] 	= {17, 12, 11, 10, 9, 8, 16, 27, 47, 55, 72, 94, 104, 115, 120, 121, 122, 123, 124, 116, 105, 95, 77, 69, 68, 67, 65, 64, 63, 66};
  const uint8_t PROGMEM Font::font_7 [27] 	= {7, 8, 9, 10, 11, 12, 13, 14, 19, 28, 41, 49, 66, 58, 74, 83, 90, 97, 104, 113, 118, 63, 64, 65, 67, 68, 69};
  const uint8_t PROGMEM Font::font_8 [40] 	= {64, 63, 56, 47, 37, 21, 18, 7, 1, 2, 3, 13, 19, 25, 42, 50, 59, 69, 68, 67, 66, 65, 73, 82, 94, 106, 113, 119, 120, 121, 122, 123, 124, 116, 114, 110, 103, 88, 85, 76};
  const uint8_t PROGMEM Font::font_9 [34] 	= {120, 121, 122, 123, 124, 116, 114, 110, 95, 60, 42, 25, 19, 17, 12, 10, 9, 11, 8, 16, 18, 21, 37, 47, 56, 63, 64, 65, 66, 67, 68, 69, 77, 119};

  // const uint8_t * PROGMEM const Font::numerics[10]        = {Font::font_0, Font::font_1, Font::font_2, Font::font_3, Font::font_4, Font::font_5, Font::font_6, Font::font_7, Font::font_8, Font::font_9};
  // const size_t    PROGMEM Font::numerics_size[10]   = {Font::size_0, Font::size_1, Font::size_2, Font::size_3, Font::size_4, Font::size_5, Font::size_6, Font::size_7, Font::size_8, Font::size_9};
  // const uint8_t * PROGMEM const Font::letters[26]         = {Font::font_A, Font::font_B, Font::font_C, Font::font_D, Font::font_E, Font::font_F, Font::font_G, Font::font_H, Font::font_I, Font::font_J, Font::font_K, Font::font_L, Font::font_M, Font::font_N, Font::font_O, Font::font_P, Font::font_Q, Font::font_R, Font::font_S, Font::font_T, Font::font_U, Font::font_V, Font::font_W, Font::font_X, Font::font_Y, Font::font_Z};
  // const size_t    PROGMEM Font::letters_size[26]    = {Font::size_A, Font::size_B, Font::size_C, Font::size_D, Font::size_E, Font::size_F, Font::size_G, Font::size_H, Font::size_I, Font::size_J, Font::size_K, Font::size_L, Font::size_M, Font::size_N, Font::size_O, Font::size_P, Font::size_Q, Font::size_R, Font::size_S, Font::size_T, Font::size_U, Font::size_V, Font::size_W, Font::size_X, Font::size_Y, Font::size_Z};

  const uint8_t * const Font::characters[36] = {Font::font_A, Font::font_B, Font::font_C, Font::font_D, Font::font_E, Font::font_F, Font::font_G, Font::font_H, Font::font_I, Font::font_J, Font::font_K, Font::font_L, Font::font_M, Font::font_N, Font::font_O, Font::font_P, Font::font_Q, Font::font_R, Font::font_S, Font::font_T, Font::font_U, Font::font_V, Font::font_W, Font::font_X, Font::font_Y, Font::font_Z, Font::font_0, Font::font_1, Font::font_2, Font::font_3, Font::font_4, Font::font_5, Font::font_6, Font::font_7, Font::font_8, Font::font_9};
  const size_t    Font::characters_size[36]  = {Font::size_A, Font::size_B, Font::size_C, Font::size_D, Font::size_E, Font::size_F, Font::size_G, Font::size_H, Font::size_I, Font::size_J, Font::size_K, Font::size_L, Font::size_M, Font::size_N, Font::size_O, Font::size_P, Font::size_Q, Font::size_R, Font::size_S, Font::size_T, Font::size_U, Font::size_V, Font::size_W, Font::size_X, Font::size_Y, Font::size_Z, Font::size_0, Font::size_1, Font::size_2, Font::size_3, Font::size_4, Font::size_5, Font::size_6, Font::size_7, Font::size_8, Font::size_9};

  // static const uint8_t * Font::characters[36]   = {Font::font_A, Font::font_B, Font::font_C, Font::font_D, Font::font_E, Font::font_F, Font::font_G, Font::font_H, Font::font_I, Font::font_J, Font::font_K, Font::font_L, Font::font_M, Font::font_N, Font::font_O, Font::font_P, Font::font_Q};
  // static const size_t Font::characters_size[36] = {Font::size_A, Font::size_B, Font::size_C, Font::size_D, Font::size_E, Font::size_F, Font::size_G, Font::size_H, Font::size_I, Font::size_J, Font::size_K, Font::size_L, Font::size_M, Font::size_N, Font::size_O, Font::size_P, Font::size_Q};

}
