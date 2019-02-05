#include<stdio.h>

int BinarySearch(int array[], int arraylen, int target) {
    if (NULL == array) {
        return -1;
    }
    int start = 0;
    int end = arraylen - 1;
    int mid = (start + end)/2;
    while(start <= end) {
        if(array[mid] > target) {
            end = mid - 1;
        } else if (array[mid] < target) {
            start = mid + 1;
        } else {
            return mid;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main() {
    int a[] = {3, 5, 10, 13, 15, 20, 21};
    printf("%d\n", BinarySearch(a, 7, 23));
    return 0;
}
