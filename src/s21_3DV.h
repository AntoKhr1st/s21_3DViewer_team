#ifndef SRC_S21_3DV_H_
#define SRC_S21_3DV_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Matrix {
	double **matrix;
	int rows;
	int cols;
} matrix_t;

typedef struct facets {
	int *vertexes;
	int numbers_of_vertexes_in_facets;
} polygon_t;

typedef struct data {
	int count_of_vertexes;
	int count_of_facets;
	matrix_t matrix_3d;
	polygon_t *polygons;
}

#endif  // SRC_S21_3DV_H_

// Просмотреть QWidget и его использование
