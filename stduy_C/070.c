#include <stdio.h>

void reverse();

int main() {

 reverse();

 return 0;
}

void reverse(){
 int n;
 scanf("%d", &n);
 if(n){
  reverse();
  printf("%d\n", n);
 }
}
//[출처] [다시쓰는 C언어 강좌] 070 - 함수의 제작 (9) - 재귀함수|작성자 라이

