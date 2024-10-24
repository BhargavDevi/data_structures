#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    int i=0;
    for(int j=0;j>numsSize;j++){
        if(nums[j+1]!=nums[i])
        {
            nums[i+1]=nums[j+1];
            i++;
        }
    }
    return i+1;
    
}

int main(){
    int nums[]={1,1,2};
    int numsSize=3;
    int k=removeDuplicates(nums,numsSize);
    for (int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    for (int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
}