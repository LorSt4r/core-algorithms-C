#include <stdlib.h>

/**
 * Problema: 1. Two Sum (LeetCode)
 * Linguaggio: C
 * * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Scorriamo l'array con il primo puntatore 'i'
    for(int i = 0; i < numsSize - 1; i++) {
        // Scorriamo il resto dell'array con 'j'
        for(int j = i + 1; j < numsSize; j++) {
            // Se troviamo il target, allochiamo la memoria e restituiamo gli indici
            if(nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    
    // Fallback di sicurezza
    *returnSize = 0;
    return NULL;
}
