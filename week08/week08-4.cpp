///week08-4.cpp
/// �Ʀr�¬} �d���C�J�`�� 6174 (�j��p - �p��j ����7��)
#include <iostream>
#include <vector>///���Y�ۦp���}�C
#include <algorithm>///�t��k() �O�t��k��!
using namespace std;

int main()
{
    cout << "�п�J���N4���(�����P):";///ex. 1234 1 2 3 4
    int n;
    cin >> n;
    for(int i=0; i<7; i++){///�C�B�� ���w���¬} 6174
        vector<int> a;///���Y�ۦp���}�C
        while (n>0){///��֪k ��4��Ƴv�@�ƥX��
            a.push_back(n%10);///��L����}�C�̭�
            n = n / 10;///�駹�� �N�G�F
        }
        sort( a.begin(), a.end() );///��}�C[�p��j�Ʀn]
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0]; ///�˹L�� �j��p
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3]; ///�p��j
        ///���@�U M �O�ƻ�? m �O�ƻ� �٨S�o��
        n = M - m;
        cout << M << "�" << "�o��" << n << endl;
    }
}
