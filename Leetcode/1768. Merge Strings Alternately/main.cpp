

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        if(word1.size() == 0) {
            return word2;
        }

        if(word2.size() == 0) {
            return word1;
        }

        int maxLength = (word1.size() > word2.size()) ? word1.size() : word2.size();

        for(int x = 0; x<maxLength;++x) {
            ans.push_back(word1.at(x));
            ans.push_back(word2.at(x));


            if(x == word1.size()) {
                ans.append(word2.substr(x, word2.size()));
                break;
            }
            if(x == word2.size()) {
                ans.append(word1.substr(x, word1.size()));
                break;
            }

        }


        return ans;
    }
};



int main() {


    Solution s;

    string x = s.mergeAlternately("aaa", "bbb");
    cout << x << endl;
    return 0;
}
