#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int prefix[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Build prefix sum array
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int L, R;
    printf("Enter range (L R): ");
    scanf("%d %d", &L, &R);

    int rangeSum;
    if (L == 0)
        rangeSum = prefix[R];
    else
        rangeSum = prefix[R] - prefix[L - 1];

    printf("Sum from index %d to %d = %d\n", L, R, rangeSum);

    return 0;
}