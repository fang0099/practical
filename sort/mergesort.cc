#include <stdio.h>
#include <stdlib.h>

void MergeArray(int num_list_1[], int length_1, int num_list_2[], int length_2) {
    int* num = (int *)malloc(length_1 + length_2);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<length_1 && j<length_2) {
        if(num_list_1[i] < num_list_2[j]) {
            num[k] = num_list_1[i];
            i++;
        } else {
            num[k] = num_list_2[j];
            j++;
        }
        k++;
    }
    while(i<length_1) {
        num[k] = num_list_1[i];
        k++;
        i++;
    }
    while(j<length_2) {
        num[k] = num_list_2[j];
        k++;
        j++;
    }
    for(int m = 0; m < length_1 + length_2; m++) {
        num_list_1[m] = num[m];
    }
    free(num);
}

void MergeSort(int num[], int length) {
    if(NULL == num || length <= 1) {
        return;
    }
    int* num_list_1 = num;
    int length_1 = length / 2;
    int* num_list_2 = num + length_1;
    int length_2 = length - length_1;
    MergeSort(num_list_1, length_1);
    MergeSort(num_list_2, length_2);
    MergeArray(num_list_1, length_1, num_list_2, length_2);
}

int main() {
    int a[] = {4, 7, 9, 13, 1, 8, 2};
    MergeSort(a, 7);
    for(int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
}
