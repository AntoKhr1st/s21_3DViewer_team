#ifndef SRC_S21_3DVIEWER_H_
#define SRC_S21_3DVIEWER_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// максимальный размер строчки в файле
#define buff_size 256  // 1024
#define OK 0
// код ошибки в read_file(). Файл не открыть
#define ERROR_FILE_OPEN 1
// код ошибки в read_file(). Ошибка данных в файле
#define FILE_STRUCT_ERR 2
// код ошибки в read_file(). Память
#define MEM_ERR 3
#define MIN_VERTICES 3
#define eps 1e-6

// Структура для вершин
typedef struct polygon {
  int num_vertices;
  int *vertices_on_polygon;
} polygon;

// Структура для данных вершин и многоугольника
typedef struct obj_data {
  int num_V;        // количество вершин
  int num_F;        // количество поверхностей
  double *V;        // массив для вершин
  polygon *F;       // массив вершин в многоугольнике
  double V_min[3];  // минимум для координат вершин
  double V_max[3];  // максимум для координат вершин
} obj_data;

// Заполнение структуры данных нулями
void init_data(obj_data *Data);
void clean_data(obj_data *Data);

// Синтаксический анализатор файла
int read_file(obj_data *Data, char *file_name);

// Счетчик вершин и многоугольников
int count_VF(obj_data *Data, FILE *file);

// добавление данных в структуру
int add_points(obj_data *Data, FILE *file);

// ADD координат вершин
int add_vertice(const char *str, obj_data *Data, int count_V);

// ADD вершин к многоугольнику
int add_polygon(const char *str, obj_data *Data, int count_F);

// счетчик количества вершин в многоугольнике
int count_vertices_on_polygon(const char *str, obj_data *Data, int count_F);

// проверка наличия координат вершин
int check_digit(const char *str);

// чекам символ v f
int check_first_char(char *str, char c);

// передвижение в новую точку оси
void centering(obj_data *Data);

// вращение по 0Х
void rotX(obj_data *Data, int angle);

// вращение по 0Y
void rotY(obj_data *Data, int angle);

// вращение по 0Z
void rotZ(obj_data *Data, int angle);

#endif  // SRC_S21_3DVIEWER_H_
