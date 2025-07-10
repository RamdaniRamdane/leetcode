#include<stdio.h>
#include<stdlib.h>


int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0){return 0;}
    if(numsSize==1){return 1;}
    int i,tmp = nums[0],count=0;
    for(i=1;i<numsSize;i++){
      if(tmp==nums[i]){
              count+=1;
      }else{
        if(count>0){
                nums[i-count]=nums[i];
        }
        tmp=nums[i];
      }
    }
    numsSize-=count;
    return numsSize;
}
int main(){
  int j;
  int arr[5];
  for(j=0;j<5;j++){
    printf("\narray[%d]=",j);
    scanf("%d",&arr[j]);
  }
  int arr1;
  arr1=removeDuplicates(arr,sizeof(arr)/sizeof(arr[0]));
  printf("\n");
  for(j=0;j<arr1;j++){
    printf("%d ",arr[j]);
  } 
  return 0;
}
