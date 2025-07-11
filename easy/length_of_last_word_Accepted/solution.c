#include<stdio.h>
#include<string.h>



int lengthOfLastWord(char* s) {
   int i,count=0; 
   for(i=(strlen(s)-1);i>=0;i--){
     if(s[i]!=' ' && s[i]!='\0' && s[i]!='\n'){
      count++; 
     }else if(count!=0){
       return count;
     }
   }
   return count;
}


int main(){
  char input[100],len;
  printf("enter ur phrase : ");
  fgets(input,sizeof(input),stdin);
  len=lengthOfLastWord(input);
  printf("\nthe length of last word is : %d \n",len);
  return 0;
}
