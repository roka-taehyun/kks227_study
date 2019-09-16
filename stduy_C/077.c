#include <stdio.h>

typedef struct vect{
 int x, y;
}Vect;

void change_vector(Vect*, int, int);
void change_vector_x(Vect*, int);
void change_vector_y(Vect*, int);

int main() {

 Vect a = {3, 2};
 printf("벡터값: (%d, %d)\n", a.x, a.y);
 change_vector_x(&a, 5);
 printf("벡터값: (%d, %d)\n", a.x, a.y);
 change_vector_y(&a, -2);
 printf("벡터값: (%d, %d)\n", a.x, a.y);
 change_vector(&a, 0, 1);
 printf("벡터값: (%d, %d)\n", a.x, a.y);
 return 0;
}

void change_vector(Vect *p, int x1, int y1){
 p->x = x1;
 p->y = y1;
}

void change_vector_x(Vect *p, int x1){
 p->x = x1;
}

void change_vector_y(Vect *p, int y1){
 p->y = y1;
}

// 구조체 포인터를 이용하여 구조체 안의 멤버변수 값의 변경.