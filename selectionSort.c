#include <stdio.h>
int main() {
int n,arr[n];
printf("enter value of n :-");
scanf("%d",&n);
printf("Enter your Array elements :-");
for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("Original array is: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
for (int i = 0; i < n - 1; i++) {
    for (int j=i+1; j<n; j++){
        if (arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
printf("\nSorted array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
return 0;
}