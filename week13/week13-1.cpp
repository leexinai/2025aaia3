///week13-1.cpp聖誕倒數寫程式 Advent of Code 2025 第一天第一題
///Moodle 點擊 adventofcode.com 網址 可以看到黑底 白字的題目
///在leetcode 的 My playground 我的遊戲場 可以寫程式
///leetcode 幫你把#include 全部加好了 不用寫#include
///右下角stdin 可以貼上你的程式Input
///在AdentOfCode.com 登入你的GitHub 帳號後 便可看到你的專屬謎題Input
///貼到右下角stdin後 在執行 看你答案是多少
int main() {
    char c;///字母 對應方向 L左轉 R右轉
    int d;///數字 要轉動幾格
    int now = 50;///一開始的密碼 指向50
    int ans = 0;///轉動時 有幾次停在0的地方(通關密碼)
    while( cin >> c >> d ){///一直讀資料 讀字母 讀數字
        ///if(c=='L') cout << "往左轉" << d << "格\n";
        ///if(c=='R') cout << "往右轉" << d << "格\n";
        ///把上面兩行的中文註解掉
        if(c=='L')now = now - d;///減掉
        if(c=='R')now = now + d;///加上


        now = (now%100 + 100) % 100;///太大太小 都限制在 0~99間
        ///cout << "現在的刻度是:" << now << "\n";
        if(now==0)ans++;///轉動時 停在0的地方(通關密碼)
    }
    cout << "答案是:" << ans;
}


/*
Input:
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
