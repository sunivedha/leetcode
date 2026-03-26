/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j] == target){
                ptr[0]=i;
                ptr[1]=j;
                *returnSize = 2;
                return ptr;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
   