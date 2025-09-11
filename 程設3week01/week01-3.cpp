#week01-3.cpp
# include <iostream>///使用C++的外掛 負責輸入input 輸出output
using namespace std;///使用C++的std的{命名空間}
int main()
{
    int n;
    cin >> n;///使用C++的 Consolo Input 輸入文字資料
    int ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans+=i*i;
    }
    cout << ans;///使用C++的 consolo Output 輸出文字資料

}
