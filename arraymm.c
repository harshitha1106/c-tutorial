#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int min = a[0], max = a[0];
    for (int i=1;i<n;i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Maximum element is: %d\n",max);
    printf("Minimum element is: %d\n",min);
}