#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int width = 0;
        for(int i : height) {
            cout<<i<<" ";
            //making changes
            
        } 
        return 0;
    }


};


int main() {

    vector<int> y = {1,8,6,2,5,4,8,3,7};
    Solution s;
    int x = s.maxArea(y);
    cout << x;
    return 0;
}


