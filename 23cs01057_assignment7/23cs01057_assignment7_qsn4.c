#include <stdio.h>

int k = -100000;

int getlargest(int arr[], int i, int n){
    if (i == n){
        return k;
    }
    k = (k > arr[i]) ? k : arr[i];
    return getlargest(arr, i + 1, n);
}

int main(){
    printf("Enter the number of integers in array: ");
    int n; scanf("%d", &n);
    int arr[n];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

   int largest = getlargest(arr, 0, n);

   printf("%d\n", largest);

}