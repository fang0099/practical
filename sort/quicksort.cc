#include <stdio.h>
void QuickSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    int start = 0;
    int end = length - 1;
    int val = num[0];
    while(start < end) {
        while(start < end) {
            if (num[end] < val) {
                num[start] = num[end];
                break;
            }
            end--;
        }
        while(start < end) {
            if (num[start] > val) {
                num[end] = num[start];
                break;
            }
            start++;
        }
    }
    num[start] = val;
    QuickSort(num, start);
    QuickSort(num + start + 1, length - start - 1);
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    QuickSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}

