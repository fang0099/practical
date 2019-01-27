#include <stdio.h>
void InsertSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    for(int i = 1; i < length; i++) {
        int j = i-1;
        int val = num[i];
        while(j>=0 && num[j]>val) {
            num[j+1] = num[j];
            j--;
        }
        j++;
        num[j] = val; 
    }
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    InsertSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}
