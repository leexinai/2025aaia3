//week02-3.cpp�ϥ�C++2011�~�s�����r��stoi()�\��
//SOIT106_ADVANCE_001 Using C++
# include <iostream> // cin cout ��J��� �L�X���
# include <string> //string �r�ꪺ�\��
using namespace std; //�ϥ�{�R�W�Ŷ�}�з� std
int main()
{
    string a;//�ŧi�r��
    cin >> a;//Ū�J�r��

    string ans;//�ŧi�r�� and �񵪮ץΪ�
    int N=a.length();//�r��a������
    for(int i=N-1;i>=0;i--){//��L�Ӫ����j
        ans +=a[i];//�b���j�� ��a[i]���ans���᭱
    }
    cout << a << '+' << stoi(ans) << '='
         << stoi(a)+stoi(ans) << endl;
}//stoi() is "string to int" ��{�r��}�ܦ�{�ܼ�}

