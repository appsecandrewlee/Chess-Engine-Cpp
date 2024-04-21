#include <cstdint>
#include <iostream>
/* Author: Andrew Lee
 * This header file is used to initialise the board for Chess
 *
 *
 */
class BitBoard {
public:
  void BOARD_SETUP(unsigned long long BitBoard) {

    for (int rank = 0; rank < 8; rank++) {   // creating 8 rows
      for (int file = 0; file < 8; file++) { // creating 8 columns
        int square = rank * 8 + file; // each tile, that calculates 0 - 63
        printf("%d", square);         // print out the tiles
      }
      printf("\n"); // Layout 8 by 8
    }
  }
};
