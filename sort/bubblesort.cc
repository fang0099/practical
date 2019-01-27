#include <stdio.h>
void BubbleSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    for(int j = length; j > 1; j--) {
        for(int i = 0; i < j - 1; i++) {
            if(num[i]>num[i+1]) {
                int temp = num[i+1];
                num[i+1] = num[i];
                num[i] = temp;
            }
        }
    }
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    BubbleSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}
