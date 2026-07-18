class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    map<char,int> ran;
    map<char,int> mag;

    int rsize = ransomNote.size();
    int msize = magazine.size();
    for(int i = 0;i<magazine.size() || i<rsize;i++){
        if(i<rsize){
            ran[ransomNote[i]]++;
        }   
        if(i<msize){
            mag[magazine[i]]++;
        }
    }


    for (auto &entry : ran) {
        char c = entry.first;
        if (entry.second > mag[c]) {
            return false;
        }
    }
    return true;
    }
};