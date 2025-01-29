#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> xss;
    unordered_map<int, int> x;
    
    int y = 0;
    int z = 0;
    for(int i = 0; i < nums.size(); ++i){
        x[nums[i]] = i;
    }
    
    for (auto j : nums) {
        
        j = target - j;    
        if(x.count(j) && y != x[j]) {

            xss = {y,x[j]};
            return xss;
        }
        ++y;
    }

    return xss;
    }
};

int main() {

    Solution s;
    vector<int> x = {2,7,11,15};
    vector<int> i = s.twoSum(x, 9);
    for(auto y : i){
        cout << y; 
    }

    return 0;
}