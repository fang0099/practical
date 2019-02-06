// 输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
// 输出描述: 对应每个测试案例，输出两个数，小的先输出。
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> result;
        if (array.empty()) {
            return result;
        }
        int start = 0;
        int end = array.size() - 1;
        while(start < end) {
            if(array[start] + array[end] > sum) {
                end--;
            } else if (array[start] + array[end] < sum) {
                start++;
            } else {
                result.push_back(array[start]);
                result.push_back(array[end]);
                return result;
            }
        }
        return result;
    }
};
