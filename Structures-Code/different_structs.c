#include <stdio.h>

typedef struct pixel {
   int x, y;
   char color;
} Pixel;

typedef struct pixel2 {
   int x, y;
   double color;

} Pixel2;

int main() {
   Pixel p1={1,2,'e'}, *p1_ptr;
   Pixel2 p2, *p2_ptr;
    
    p1_ptr = &p1;          /* invalid */ 
   /* p2_ptr = p1_ptr; */ /* invalid */
   
   printf("%d\n", p1_ptr->x);
   printf("%d\n", sizeof(p2));

   return 0;
}

