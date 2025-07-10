#include<stdio.h>
#include<stdlib.h>


int removeElement(int* nums, int numsSize,int val) {
    if(numsSize==0){return 0;}
    if(numsSize==1){return !(nums[0]==val);}
    int i ,count=0;
    for(i=0;i<numsSize;i++){
      if(val==nums[i]){
              count+=1;
      }else{
        if(count>0){
                nums[i-count]=nums[i];
        }
      }
    }
    numsSize-=count;
    return numsSize;
}
int main(){
  int j,value;
  int arr[5];
  for(j=0;j<5;j++){
    printf("\narray[%d]=",j);
    scanf("%d",&arr[j]);
  }
  printf("\nvalue to rmove :");
  scanf("%d",&value);

  int arr1;
  arr1=removeElement(arr,sizeof(arr)/sizeof(arr[0]),value);
  printf("\n");
  for(j=0;j<arr1;j++){
    printf("%d ",arr[j]);
  } 
  
  printf("\n");
  return 0;
}
