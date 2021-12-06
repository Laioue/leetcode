//
// Created by Laioue on 2021/12/6.
//
#include "iostream"
#include "string"
using namespace std;


class Solution {
public:
    string truncateSentence(string s, int k) {

        for (int i=0;i<s.length();i++) {
            if (s[i] == ' ')
                k--;
            if (k == 0)
                return s.substr(0, i);
        }
        return s;
    }
};

int main()
{
    string s = "Hello how are you Contestant";
    int k = 4;
    Solution solution;
    cout << solution.truncateSentence(s, k);
    return 0;
}
