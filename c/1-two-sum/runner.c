#include <stdio.h>
#include "./solution.c"

int main(void) {
    printf("Example 1\n");
    int numsSize1 = 4;
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1 = 0;
    int *res1 = twoSum(nums1, numsSize1, target1, &returnSize1);
    int expected1[] = {0,1};
    for(int i = 0; i < returnSize1; i++) {
        if(res1[0] != expected1[0])
            return 1;
    }
    free(res1);

    printf("Example 2\n");
    int numsSize2 = 3;
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int returnSize2 = 0;
    int *res2 = twoSum(nums2, numsSize2, target2, &returnSize2);
    int expected2[] = {1,2};
    for(int i = 0; i < returnSize2; i++) {
        if(res2[0] != expected2[0])
            return 1;
    }
    free(res2);

    printf("Example 3\n");
    int numsSize3 = 2;
    int nums3[] = {3, 3};
    int target3 = 6;
    int returnSize3 = 0;
    int *res3 = twoSum(nums3, numsSize3, target3, &returnSize3);
    int expected3[] = {0,1};
    for(int i = 0; i < returnSize3; i++) {
        if(res3[0] != expected3[0])
            return 1;
    }
    free(res3);

    puts("Success!");
    return 0;
}
