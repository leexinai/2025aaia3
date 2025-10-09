///week05-4.cpp
///LeetCode 學習計畫 Built-In Functions 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){///每一個字母
            s[i] = tolower( s[i] );///變成小寫
        }///每個字母 都變成小寫
        ///或是用#include <cctype> 兩個視同一個檔案
        return s;///答案送出去
    }
};
