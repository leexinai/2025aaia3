///week06-3.cpp
///LeetCode �ǲ߭p�e Simulation ���� ��1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;///�}�Ca
        for(string op: operations){///C++�i���j��
            ///cout << op << "\n";///�ոլ� �|�L�X�ƻ�F��
            if(op[0]=='+'){///�⥽��Ƭۥ[
                int temp = a.back();///���O�U�̫�1��
                a.pop_back();///�ȮɦR���L
                int temp2 = a.back();///�b�O�U�̫��2��
                a.push_back(temp);///����̫�1�Ѷ�^�h
                a.push_back(temp+temp2);///��Ƭۥ[ �b��^�h
            }else if(op[0]=='D'){///�ƻs�̫�1��  [�A��doouble��2��]�b��^�h
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){///�R���̫�1��
                a.pop_back();
            }else{///�� stoi(op)��� ��^�h
                a.push_back( stoi(op));
            }
        }
        ///�̫� ��for�j�� ��}�Ca���� �����[�_��
        int ans=0;
        for(int now : a){///C++ �i���j�� �]�i�H��for(int i=0;i<a.size();i++){int now=a[i]}
            ans+=now;
        }
        return ans;///���H�K return 0 ���U�A��
    }
};
