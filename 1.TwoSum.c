/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int nb;
    int nb2;
    int *answer;

    *returnSize = 2;
    answer = malloc(2*(sizeof(int)));
    nb = 0;
    while (nb < numsSize - 1)
    {
        nb2 = nb + 1;
        while (nb2 < numsSize)
        {
            if ((nums[nb] + nums[nb2]) == target)
            {
                answer[0] = nb;
                answer[1] = nb2;
                return(answer);
            }
           nb2++;
        }
        nb++;
    }
    free(answer);
    *returnSize = 0;
    return NULL;
}