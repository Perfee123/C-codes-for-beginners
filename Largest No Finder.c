#include <stdio.h>

int main() {
    int arr[100], n, i, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("Largest element = %d\n", max);
    return 0;
}
