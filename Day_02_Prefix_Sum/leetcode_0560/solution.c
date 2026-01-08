// LeetCode 560 - Subarray Sum Equals K
// Prefix Sum + Hash Map
// Time: O(n)
// Space: O(n)

#include <stdlib.h>

typedef struct {
    int key;
    int value;
} HashNode;

typedef struct {
    HashNode* table;
    int size;
} HashMap;

int hash(int key, int size) {
    return (key % size + size) % size;
}

HashMap* createHashMap(int size) {
    HashMap* map = (HashMap*)malloc(sizeof(HashMap));
    map->size = size;
    map->table = (HashNode*)calloc(size, sizeof(HashNode));
    return map;
}

int get(HashMap* map, int key) {
    int idx = hash(key, map->size);
    while (map->table[idx].value != 0) {
        if (map->table[idx].key == key)
            return map->table[idx].value;
        idx = (idx + 1) % map->size;
    }
    return 0;
}

void put(HashMap* map, int key) {
    int idx = hash(key, map->size);
    while (map->table[idx].value != 0) {
        if (map->table[idx].key == key) {
            map->table[idx].value++;
            return;
        }
        idx = (idx + 1) % map->size;
    }
    map->table[idx].key = key;
    map->table[idx].value = 1;
}

int subarraySum(int* nums, int numsSize, int k) {
    HashMap* map = createHashMap(numsSize * 2);

    int prefixSum = 0;
    int count = 0;

    // Base case: prefix sum 0 occurs once
    put(map, 0);

    for (int i = 0; i < numsSize; i++) {
        prefixSum += nums[i];
        count += get(map, prefixSum - k);
        put(map, prefixSum);
    }

    return count;
}
