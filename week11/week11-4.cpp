///week11-4.cpp學習計畫 math 倒數第三題
///67. Add Binary
///用字串來表達很長的二進位數字
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1;///最右邊的個位數
        vector<int> ans;///伸縮自如的陣列 裡面放答案
        int carry = 0;///進位的變值(直法加法中 上面小小的進位)
        while(i>=0 || j>=0){///想要a[i] vs. b[j] 來進行加法
            int now = carry;///現在的這個位數 (等一下要再改)
            if(i>=0){
                now += a[i]-'0';///字母a[i]減掉'0'變數值
                i--;/// 之前教過{倒過來的迴圈} for(int i=N;i>=0;i--)
            }
            if(j>=0){
                now += b[j] - '0';
                j--;
            }
            ans.push_back( now%2 );///加完後 要放答案
            carry = now / 2;///看有沒有進位(carry)
        }
        if(carry>0)ans.push_back(carry);///結束時 還有進位
        ///迴圈外面ans 可以拿來用
        string strAns;///最後的return的字母
        for(int i=ans.size()-1; i>=0; i--){
            strAns = strAns + (char)(ans[i]+'0');
        }
        return strAns;
    }
};
