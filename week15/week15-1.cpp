///week15-1.cpp
///242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;///長度不一樣
        int H[256] = {};//用來統計H數量
        ///先針對s字串 逐一放入H陣列
        for(char c : s){
            H[c]++;
        }
        for(char c : t){
            H[c]--;
            if(H[c]<0)return false;
        }
        return true;
    }
};
