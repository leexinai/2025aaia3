///week03-4.cpp
///leetcode�D�Թ�(�ȿ�����) 120. Triangle ���̤W�����U�����̤p��
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][i]��i�Ӫ���j��
        int N = triangle.size();///�`�@���X�Ӱ�
        ///�q�U���W�d �̤U������N-1���h �S���D �N�O�������̤p�� �ҥHN-2���W��s
        for(int i=N-2;i>=0;i--){///��L�Ӫ��j�� �qN-2���W
            for(int j=0;j<=i;j++){///�q����k �ai�h��0...i�Ӽ� ���n��s
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                ///�C�Ӥ� �n�ݨ쥦�U��2�ӿ��(���U�� �U��a�k) ��̤p�����@��
            }
         }
        return triangle[0][0];
    }
};
