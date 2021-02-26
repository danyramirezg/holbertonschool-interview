#ifndef SLIDE_LINE
#define SLIDE_LINE

#include <stdio.h>
#include <stdlib.h>
#define SLIDE_RIGHT 1
#define SLIDE_LEFT 2

int slide_line(int *line, size_t size, int direction);
int left_direction(int *line, int size);
int right_direction(int *line, int size);

#endif
