#include <stdio.h>

void StraightSelectSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    for(int i = length; i > 1; i--) {
        int pos = 0;
        int max = num[pos];  
        for (int j = 1; j < i; j++) {
           if(num[j]>max) {
               pos = j;
               max = num[j];
           }
        }
        num[pos] = num[i-1];
        num[i-1] = max;
    }
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    StraightSelectSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}
