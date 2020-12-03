#include <stdio.h>

#define MAX_ROWS 2
#define MAX_COLS 3

static void print_array(int data[][MAX_COLS], int rows, int cols);
static void double_array(int data[][MAX_COLS], int rows, int cols);

static void print_array(int data[][MAX_COLS], int rows, int cols) {
   int row, col;

   for (row = 0; row < rows; row++) {
      for (col = 0; col < cols; col++) {
         printf("%d ", data[row][col]);
      } 
      printf("\n");
   }
}

static void double_array(int data[][MAX_COLS], int rows, int cols) {
   int row, col;

   for (row = 0; row < rows; row++) {
      for (col = 0; col < cols; col++) {
          data[row][col] *= 2;
      } 
   }
}

int main() {
   int a[MAX_ROWS][MAX_COLS] = {{10, 20, 30},
                                {40, 50, 60}};
   int b[MAX_ROWS][MAX_COLS] = {{0}, {0}};

   print_array(a, MAX_ROWS, MAX_COLS);
   printf("*****\n");
   print_array(b, MAX_ROWS, MAX_COLS);
   printf("*****\n");

   double_array(a, MAX_ROWS, MAX_COLS);
   print_array(a, MAX_ROWS, MAX_COLS);

   return 0;
}
