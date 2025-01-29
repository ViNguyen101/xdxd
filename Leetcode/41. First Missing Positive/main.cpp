#include <iostream>
#include <vector>
using namespace std;





class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int head = 0;
        int ans = 1;
        int tail = nums.size() - 1;
        for (int i = 0; i < nums.size(); ++i){

            if(nums[i] == ans) {
                ++ans;
            }
        }
        return ans;
    }
};

int main() {

    vector<int> y = {1,8,6,2,5,4,8,3,7};
    Solution s;
    int x = s.firstMissingPositive(y);
    cout << x;
    return 1;
}