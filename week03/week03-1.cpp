///week03-1.cpp �ǲ�C++���}�C vector<int>a;
/// File-save as �s�ɮ� �n�a�ɦW�g��
#include <iostream>///C++ �� cin cout
#include <vector>///C++���C vector
using namespace std;

int main()
{
    vector<int> a(2);///���Ӱ}�C �̭������(�}�C���j�p�O2)

    for(int i=0;i<a.size();i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl; /// ����

    a.push_back(99);///��99����}�C a����᭱
    a.push_back(77);///��77����}�C a����᭱

    for(int i=0;i<a.size();i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl; ///����
}
