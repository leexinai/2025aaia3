///week02-5.cpp LeetCode �ǲ߭p�e�Ĥ@�P��2�D
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //���� �έp�@�U26�Ӧr�� �X�{�X��
        int A[256] = {};//�}�C�ŧi �}�C�Τj�A�����w�]��0
        for(int i=0;i<s.length();i++){
            char c = s[i];//����i�Ӧr��
            A[c]++;//���� ��i �������r���l��
        }
        for(int i=0; i<t.length();i++){
            char c = t[i];//����i�Ӧr��
            A[c]--;//����l�� ���X�r��
            if(A[c] < 0)return c;//�r�������� �N�O��!!!!!�ʥ�!!!!!!
        }
        return 0;
    }
};
