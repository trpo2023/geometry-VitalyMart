#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Point {
    double x;
    double y;
} point;

float pcircle(point center, double rad);
float acircle(point center, double rad);
void Exception(char* string);
void parse_start();