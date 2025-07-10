#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// [([]])
// [({(())}[()])]

int isValid(char* s) {
        char* prev=malloc(strlen(s)+1);
        int pos=0, i;
        for(i=0;i<strlen(s);i++){

                if(s[i]=='(' || s[i] == '{' || s[i] == '['){
                prev[pos]=s[i];
                pos++;
        }else {
                if(s[i]==')' && pos>0 &&prev[pos-1]=='('){
                        pos--;

                }else if(s[i]==']' &&pos>0 && prev[pos-1]=='['){
                pos--;
        }else if(s[i]=='}'&&pos>0 && prev[pos-1]=='{'){
                pos--;
        }else{return 0;}

        }

        }
        free(prev);
    return pos==0;
}


int main (){
  char input[200];
  scanf("%s",input);
  printf("%d\n",isValid(input)); 
  return 0;
}
