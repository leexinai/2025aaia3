///week05-4.cpp
///LeetCode �ǲ߭p�e Built-In Functions 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){///�C�@�Ӧr��
            s[i] = tolower( s[i] );///�ܦ��p�g
        }///�C�Ӧr�� ���ܦ��p�g
        ///�άO��#include <cctype> ��ӵ��P�@���ɮ�
        return s;///���װe�X�h
    }
};
