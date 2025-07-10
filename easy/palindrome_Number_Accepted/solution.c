#include <stdio.h>



bool isPalindrome(int x) {
    if(x < 0 || ( x % 10 == 0 && x != 0 )){
      return false;
    }
    
    int reversedHalf=0;
    while (x>reversedHalf){
      reversedHalf=reversedHalf*10+x%10;
      x/=10;
    }
    return x==reversedHalf || x==reversedHalf/10;
};


int main (){
int input;

printf("input a number : ");
scanf("%d", &input);



printf("%b",isPalindrome(input));
return 0;
}

