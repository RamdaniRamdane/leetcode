#include<stdio.h>
#include<string.h>


int strStr(char* haystack,char* needle){
  int i,occ=-1 ,tmp=0,len;
  len = strlen(needle);

  for(i=0;i<(strlen(haystack));i++){
    if( haystack[i] == needle[tmp] ){
      if(occ<0) occ = i;
      if( tmp == len-1 ){
        return occ;
      }
      tmp+=1;
    }else if(tmp>0){
      i=i-tmp;
      tmp=0;
      occ=-1;
    }
  }
  return -1;
}



int main(){
  char hay[100] ;
  char nee[100];
  int output;
  printf("-haystack = ");
  scanf("%s",hay);
  printf("\n-needle = ");
  scanf("%s",nee);

  output=strStr(hay,nee);
  printf("\n\noutput : %d \n",output);

  return 0;
}
