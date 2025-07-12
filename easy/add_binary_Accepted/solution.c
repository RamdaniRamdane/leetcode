#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
   int c=0,i,k;

   if(strlen(a)>=strlen(b)){
      k=strlen(a);
   }else{
      k=strlen(b);
   }

   char *help=malloc(strlen(a)+strlen(b)+2);
   help[0] = '\0';
   if(strlen(a)>strlen(b)){
     int j;
     for(j=0;j<(strlen(a)-strlen(b));j++){
       help[j]='0';
     }
     help[j] = '\0'; 
     strcat(help,b);
   }else if(strlen(a)<strlen(b)){
     int j;
     for(j=0;j<(strlen(b)-strlen(a));j++){
       help[j]='0';
     }
     help[j] = '\0'; 
     strcat(help,a);
     a=b;
   }else{
     help[0]='\0';
     strcat(help,b);
   }
   for(i=k-1; i>=0;i--){
     if((a[i]=='1'&&help[i]=='1'&&c==0) || (a[i]=='1'&&help[i]=='0'&&c==1) || (a[i]=='0'&&help[i]=='1'&&c==1)){
       help[i]='0';
       c=1;
     }else if((a[i]=='1'&&help[i]=='0'&&c==0)||(a[i]=='0'&&help[i]=='1'&&c==0)||(a[i]=='0'&&help[i]=='0'&&c==1)){
       help[i]='1';
       c=0;
     }else if(a[i]=='1'&&help[i]=='1'&&c==1){
       help[i]='1';
       c=1;
     }else if(a[i]=='0'&&help[i]=='0'&&c==0){
       help[i]='0';
       c=0;
     }
   }
  if(c>0){
     char *result=malloc(strlen(help)+2);
     result[0]='1';
     result[1]='\0';
     strcat(result,help);
     return result;
  } 
  return help;

}


int main(){
  char a[100]="11";
  char b[100]="1";
  char *result;
  result=addBinary(a,b);
  printf("%s",result);
  free(result);
  return 0;
}
