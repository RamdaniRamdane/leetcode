#include <stdio.h>

int mySqrt(int x){
  if(x==1) return 1;
  if(x==0) return 0;
  int i;
  for(i=x/2;i>0;i--){
    if(i>46340){
      i=46340;
    }
    if(i*i<x) return i;
    if(i==x/i) return i;
  }
  return 1;
}


int main(){
  int input,output;
  printf("your number: ");
  scanf("%d",&input);
  output=mySqrt(input); 
  printf("\nsqrt(%d)=%d\n",input,output);
  return 0;
}
