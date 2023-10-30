#include <stdio.h>

int main(void) {
  void swap(int *,int *);
  void calc(int ,int ,int *,int *);
  int a=10,b=5,res1,res2;
  //swap(&a,&b);
  calc(a,b,&res1,&res2);
  
  printf("res1=%d and res2=%d\n",res1,res2);
  return 0;
}

void swap(int *p,int *q){
  int temp=*p;
  *p=*q;
  *q=temp;
}
 
void calc(int a,int b,int *s,int *d){
 *s=a+b;
 *d=a-b; 
}