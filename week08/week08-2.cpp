///week08-2.cpp LeetCode �ǲ߭p�e Matrix �x�}��4�D
///73. Set Matrix Zeroes�]�w�@��0
///�n�p�� ����@��Ū �@��]��0 �n�ⶥ�q ��Ū�� �b�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///�Ĥ@���q ��Ū�� �O�U������0������i�Mj
        int M = matrix.size(), N = matrix[0].size();///����M �k��N
        vector<int> markI(M,0),markJ(N,0);///�ŧiC++���}�C ���פ��OM N �̭����]��0
        for(int i=0; i < M; i++){
            for(int j=0; j < N; j++){
                if (matrix[i][j]==0){///�ľ��U������i�Mj
                    markI[i] = 1;///�аO�@�U i ����Ӿ�� ���@�U���n�M��0
                    markJ[j] = 1;///�аO�@�U j ����Ӫ��� ���@�U���n�M��0

                }
            }
        }
        ///��2���q �b�ӵ�markI �M markJ ���аO �����M��0
        for(int i=0; i < M; i++){
            for(int j=0; j < N; j++){
                if(markI[i]==1 || markJ[j]==1)matrix[i][j] = 0;
            }///�p�G���аO �A�⥦���������ܦ�0
        }
    }
};
