#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0;
        for (int i : A)
            sum += i;
        if (sum % 3 != 0)return false;
        int sum1 = 0, sum2 = 0;
        int i = 0, j = A.size() - 1;        
        for (; i < A.size(); i++) {
            sum1 += A[i];
            if (sum1 == sum / 3)break;
        }
        for (; j >= 0; j--) {
            sum2 += A[j];
            if (sum2 == sum / 3)break;
        }
        if (i + 1 < j)return true;
        else return false;
    }
};

int main() {
    Solution sol;
    vector<int>nums = { 1,1,1 };
    cout << sol.canThreePartsEqualSum(nums);
    return 0;
}