#include <stdio.h>

double round(double, int);

int main() {

 printf("%.4f %.4f %.4f\n", round(4.569, -2), round(10.6, 0), round(386, 2));
 printf("%.4f %.4f %.4f\n", round(2.3333, -2), round(7.312, 0), round(1422, 2));

 return 0;
}

double round(double f, int digit){
 int i, n;
 if(digit<1){
  for(i=digit; i<0; i++)
   f *= 10;
  f += 0.5;
  f = (double)((int)f);
  for(i=digit; i<0; i++)
   f /= 10;
 }
 else if(digit>=1){
  for(i=digit; i>0; i--)
   f /= 10;
  f += 0.5;
  f = (double)((int)f);
  for(i=digit; i>0; i--)
   f *= 10;
 }
 return f;
}
//[출처] [다시쓰는 C언어 강좌] 067 - 함수의 제작 (6)|작성자 라이

// +0.5 를 이용해서 소수, 정수 반올림 하는 법.