#include<stdio.h>

// so we have to do what :
// first of all we need to find a number that is so close to target or ==
// and retrun the index before or after 

int searchInsert(int* nums, int numsSize, int target) {
    int i;
    if(target > nums[numsSize-1]) return numsSize;
    for (i=0;i<numsSize;i++){
       if(target==nums[i] || target<nums[i]){
          return i;
       } 
    }
    return numsSize;
}

int main(){
  int nums[]={1,3,5,6};
  int target=10;
  int len =sizeof(nums)/sizeof(int);
  int result = searchInsert(nums,len,target);
  printf("output = %d\n",result);
  return 0;
}
