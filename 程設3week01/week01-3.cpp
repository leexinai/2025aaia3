#week01-3.cpp
# include <iostream>///�ϥ�C++���~�� �t�d��Jinput ��Xoutput
using namespace std;///�ϥ�C++��std��{�R�W�Ŷ�}
int main()
{
    int n;
    cin >> n;///�ϥ�C++�� Consolo Input ��J��r���
    int ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans+=i*i;
    }
    cout << ans;///�ϥ�C++�� consolo Output ��X��r���

}
