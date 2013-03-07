#ifndef __TETRIS_COMMON_H__
#define __TETRIS_COMMON_H__

#include <stdint.h>
#include <stdio.h>

#define BOARD_HEIGHT 8
#define BOARD_WIDTH 6
#define NUM_THREADS 1

#define PIECE_WIDTH 6
#define PIECE_HEIGHT 6
#define PIECE_VERTICAL_OFFSET 2

struct piece_data {
    char board[PIECE_HEIGHT][PIECE_WIDTH];
    char future[5];
};

struct crossing_list;
struct adjacency_list;

extern const struct piece_data piece_data[];
extern const unsigned int piece_data_count;

typedef uint64_t piece_t;
typedef uint64_t board_t;
typedef uint64_t crossing_t;
typedef uint32_t index_t;

#endif /* __TETRIS_COMMON_H__ */
