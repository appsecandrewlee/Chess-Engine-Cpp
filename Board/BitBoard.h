#include <cstdint>
#include <iostream>
/* Author: Andrew Lee
 * This header file is used to initialise the board for Chess
 * SOLID Principles
 *
 */
class BitBoard {

public:
  void BOARD_SETUP(unsigned long long BitBoard) {

    for (int rank = 0; rank < 8; rank++) {   // creating 8 rows
      for (int file = 0; file < 8; file++) { // creating 8 columns
        int square = rank * 8 + file; // each tile, that calculates 0 - 63

        if (BitBoard & (1ULL << square)) {
          printf("1");
        } else {
          printf("0");
        }
      }
      printf("\n");
    }
  }
};
