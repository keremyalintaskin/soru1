#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <limits.h>

void findClosestSum(int arr[], int n, int target);

int main() {
    int size;
    int element;
    int *array;
    int target;
    printf("Hedef sayiyi giriniz.\n");
    scanf("%d", &target);
    printf("Dizinin boyutunu giriniz.\n");
    scanf("%d", &size);
    printf("%d", size);
    array = (int *) malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++){
        printf("Dizinin %d. indexini giriniz.\n", i);
        scanf("%d", &element);
        array[i] = element;
    }
    
    for (int j = 0; j < size; j ++){
        printf("Dizinin %d. elemani = %d\n", j,array[j]);
    }
    
    printf("Hedef sayi %d\n", target);
    findClosestSum(array, size, target);
    return 0;
}

void findClosestSum(int arr[], int n, int target) {
    int closest_i, closest_j, closest_k;
    int closest_diff = INT_MAX;
    int i, j, k;
 
    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                int diff = abs(target - sum); 
 
                if (diff < closest_diff) {
                    closest_diff = diff;
                    closest_i = i;
                    closest_j = j;
                    closest_k = k;
                }
            }
        }
    }
    printf("En yakın toplam: %d, %d, %d, hedef sayi: %d\n", arr[closest_i], arr[closest_j], arr[closest_k], arr[closest_i]+arr[closest_j]+arr[closest_k]);
}
