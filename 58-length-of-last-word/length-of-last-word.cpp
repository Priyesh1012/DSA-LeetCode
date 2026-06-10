#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = -1;
        for(int i = s.size();i>=0;i--){
            if(s[i] == ' '){
                if(count != 0){
                    break;
                }
            }
            else{ count ++; }
           
        }
        return count;
    }
};