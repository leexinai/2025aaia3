///week01-1.py
/// LeetCode 28.Find the Index of the Frist Occurrence in a String
/// �bhaystack���_���̧��needle�w(�j�����w)
/// haystack:sadbutsad
///needle:  sad i:0
///          sad i:1
///           sad i:2
///            sad i:3
///             sad i:4
///              sad i:5
///               sad i:6
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H= haystack.length(),N= needle.length();///�r�ꪺ����
        for(int i=0;i<=H;i++){///9��3�o��6
        ///.substr(�}�l,����)�������r��
            if(haystack.substr(i,N) == needle)return i;///��쵪��
        }
        ///�j�餺�䤣��needle�N����
        return -1;
    }
};
