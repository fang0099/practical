#include <stdio.h>
void HeapAdjust(int num[], int parent, int length) {
    int child = parent * 2 + 1;
    int val = num[parent];
    while(child<length) {
        if(child+1<length && num[child] < num[child+1]) {
            child++;
        }
        if(num[child]>num[parent]) {
            int temp = num[parent];
            num[parent] = num[child];
            num[child] = temp;
            parent = child;
            child = child * 2 + 1;
        } else {
            break;
        }
    }
}

void HeapSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    int n = length / 2;
    while(n>=0) {
        HeapAdjust(num, n, length);
        n--;
    }
    int i = length;
    while(i > 1) {
        int temp = num[0];
        num[0] = num[i-1];
        num[i-1] = temp;
        i--;
        HeapAdjust(num, 0, i);
    }
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    HeapSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}
