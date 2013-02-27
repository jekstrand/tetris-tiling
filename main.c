#include "common.h"

#include <stdlib.h>
#include <stdio.h>

int
main(int argc, char **argv)
{
    unsigned int i, crossings;

    /* Load the pieces as binary */
    binary_pieces = malloc(num_pieces * sizeof(*binary_pieces));
    for (i = 0; i < num_pieces; ++i)
        binary_pieces[i] = tetris_piece_get_binary(&piece_data[i]);

    crossings = compute_crossings(0, 0);
    printf("Crossings: %d\n", crossings);

    return 0;
}

