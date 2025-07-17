#include <stdio.h>

// i taked a search and i found that fibonacci is the right way
// after playing with factorials as shiiit
// its just calculating the fib(n+1) or there i made \ i<=(n+1)
// right this one if fucking mind but they are saying that it 
// easy 

int climbStairs(int n) {
    int a=0, b=1,i,result;
    for (i=2; i<=(n+1); i++) {
        result=a+b;
        a=b;
        b=result;
    }
    return result;
}

int main(){
  int input,output;
  printf("\nyour number sir :");
  scanf("%d",&input);

  output=climbStairs(input);

  printf("\nnumber of stairs with (1-2 steps) is : %d\n",output);

  return 0;
}
