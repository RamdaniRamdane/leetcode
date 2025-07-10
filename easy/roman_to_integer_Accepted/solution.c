#include<stdio.h>
#include<string.h>
int romanToInt(char* s){
//('I', 'V', 'X', 'L', 'C', 'D', 'M')
//IV 5-1 ,, VI 5+1
  int i;
  int result=0;
  for(i=strlen(s)-1 ;i>=0;i--){
    switch (s[i]) {
      case 'I':
        if(result == 5){
          result-=1;
        }else if (result == 10) {
          result -=1 ;
        }else{
          result +=1;
        }
        break;
      case 'V':
        result+=5;
        break;
      case 'X':
        if(result >= 100 || result >=50){
          result-=10;
        }else{
          result +=10;
        }
        break;
      case 'L':
        result+=50;
        break;
      case 'C':
        if(result >= 1000 || result >=500){
          result-=100;
        }else{
          result +=100;
        }
        break;
      case 'D':
        result+=500;
        break;
      case 'M':
        result+=1000;
        break;
    }
  }
  return result;
}


int main(){
    char input[10] ;
    printf("put in a roman number : ");
    scanf("%s",input);
    printf("%s -> %d",input, romanToInt(input));
    return 0;
}
