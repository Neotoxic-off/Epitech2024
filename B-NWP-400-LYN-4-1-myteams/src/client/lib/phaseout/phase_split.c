/*
** EPITECH PROJECT, 2020
** phaseout
** File description:
** phase_split.c
*/

#include "phaseout.h"

char **phase_split(char *array, char sep, char end, char *s_end)
{
    size_t count = phase_count(array, sep, end);
    char **split = phase_mmalloc(count + 1, s_end);
    size_t floor = 0;
    size_t previous = 0;
    char *append = NULL;

    if (count > 0) {
        for (size_t i = 0; i < phase_length(array, end); i++) {
            if (array[i] == sep) {
                floor++;
            } else {
                if (i == 0 || previous < floor) {
                    split[floor] = phase_malloc(1, end);
                    previous = floor;
                }
                append = phase_insert(split[floor], array[i], end);
                phase_cnf(split[floor]);
                split[floor] = append;
            }
        }
    } else {
        split[0] = array;
    }

    return (split);
}
