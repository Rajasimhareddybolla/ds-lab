#include <stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int *temp= nums;
    int non_zero = 0;
    for(int i = 0 ; i<numsSize ; i++){
        if(*temp != 0){
            int t = *(nums+non_zero);
            *(nums+non_zero) = *temp;
            *temp = t ;
            non_zero++;
        }
        temp = temp++;
    }
}
