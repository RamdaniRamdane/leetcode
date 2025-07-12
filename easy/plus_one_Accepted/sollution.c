#include<stdio.h>
#include<stdlib.h>

// here the idea is to add one into a large integer
// defined as an array of integer

// the returned array must be malloced assuming that
// caller calls free()

int* plusOne(int* digits, int digitsSize, int* returnSize) {
   int* result=malloc((digitsSize+1)*sizeof(int)); 
   // asma3 iwar cuya lhal dmed un papier hh 
   int i=(digitsSize-1),j;
   if(digits[digitsSize-1]==9){
     while (i>=0 && digits[i]==9 ){ 
       digits[i]=0;
       i--;
     }
     if(i<0){
       result[0]=1;
       *returnSize=digitsSize+1;
       for(j=0;j<digitsSize;j++){
         result[j+1]=digits[j];
       } 
     }else{
       digits[i]+=1;
       for(j=0;j<digitsSize;j++){
         result[j]=digits[j];
       } 

       *returnSize=digitsSize;
     }
   }else{
     digits[digitsSize-1]+=1;
       for(j=0;j<digitsSize;j++){
         result[j]=digits[j];
       } 
     *returnSize=digitsSize;
   }
   return result;
}


int main(){
  int input[]={9,9,9};
  int returnSize;
  int * result = plusOne(input,3,&returnSize);
  int i;
  for (i=0;i<returnSize;i++){
    printf("%d ",result[i]);
  }
  free(result);
  return 0;
}
