#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        unordered_map<string, int> x;
        int maxLength = strs.at(0).size();
        int count = 0;
        string ans = strs.at(0);

        for (string y : strs) {
            bool longestFlag = true;
            if(y.size() < maxLength) {
                maxLength = y.size();
            }

            string z = y.substr(0, maxLength);
            while(z.size() > 0) {
                if(x[z] != count) {
                    maxLength--;
                } else {
                    x[z]++;
                    if(longestFlag) {
                        ans = z;
                        longestFlag = false;
                    }
                }
                z.pop_back();
            }
            count++;
        }
        
        return ans;
    }
};




int main() {


    Solution s;
    vector<string> y = {"aaa", "aab"};
    string x = s.longestCommonPrefix(y);
    cout << x << endl;
    return 0;
}
