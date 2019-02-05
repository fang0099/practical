//输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

class Solution {
public:
     int  NumberOf1(int n) {
         int counter = 0;
         int k = 0;
         while(k < 32) {
             int temp = n & 0x0001;
             if(temp == 1) {
                 counter++;
             }
             n = n >> 1;
             k++;
         }
         return counter;
     }
};
