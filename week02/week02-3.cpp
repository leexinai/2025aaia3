//week02-3.cpp使用C++2011年新版的字串stoi()功能
//SOIT106_ADVANCE_001 Using C++
# include <iostream> // cin cout 潛入資料 印出資料
# include <string> //string 字串的功能
using namespace std; //使用{命名空間}標準 std
int main()
{
    string a;//宣告字串
    cin >> a;//讀入字串

    string ans;//宣告字串 and 放答案用的
    int N=a.length();//字串a的長度
    for(int i=N-1;i>=0;i--){//到過來的輪迴
        ans +=a[i];//在輪迴圈 把a[i]塞到ans的後面
    }
    cout << a << '+' << stoi(ans) << '='
         << stoi(a)+stoi(ans) << endl;
}//stoi() is "string to int" 把{字串}變成{變數}

