#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    int maxArea(vector<int>& height) {
        int maxAreaThis = 0;
        int z = 0;
        int y = 0;
        int track = 1;
        int width = 0;

            //as we traverse the array, we can find the max area, lets assume that the current area we have so far is max area; theres 2 cases
            //case 1; current area is less than our new area - we take the new points, but 
            //case 2; current area is more than our new area - we disregard.
        for(int i =0;i <height.size(); ++i) {

            for (int j = width; j < height.size(); ++j) {
                y = (height.at(i) < height.at(j)) ? height.at(i) : height.at(j);
                z = (j - width) * y;
                
                
                if(maxAreaThis < z) {

                    maxAreaThis = z;
                    cout << "Max = " << maxAreaThis << " z = " << (j - width) << " y = " << y  << " i = " << i  << " j = " << j  <<  endl;

                }
            }

            ++width;

        } 
        return maxAreaThis;
    }


};


int main() {

    vector<int> y = {1,8,6,2,5,4,8,3,7};
    Solution s;
    int x = s.maxArea(y);
    cout << x;
    return 0;
}


