#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int * res = malloc(*returnSize * sizeof(int));
    res[0] = -1;
    res[1] = -1;
    /*
    printf("numsSize: %d\n", numsSize);
    printf("targetr: %d\n", target);
    printf("returnSize: %d\n", *returnSize);
    printf("[");
    for(int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if(i != numsSize-1) printf(",");
    }
    printf("]\n");
    */

    for(int i = 0; i < numsSize; i++) {
        for(int j = i+1; j < numsSize; j++) {
            // printf("%d+%d == %d => %d\n", nums[i], nums[j], target, nums[i]+nums[j] == target);
            if(nums[i]+nums[j] == target) {
                res[0] = i;
                res[1] = j;
            }
        }
    }

    return res;
}
