///week03-2b.cpp�G�X�@ �n�g�⦸(���n�u���� num[i] �u��+1,-1,0)
///LeetCode �ǲ߭p�e�a8�D 1822. Sign of the Product of an Array
///��C�}���_�� �ݬO���� �t���٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;///�]��0����Ʀr���O0 �u��1�̨� ���ƻ�O�ƻ�
        for(int i=0;i<nums.size();i++){///�Y�S�X�Ӧ]�� �j��]�X��
            if(nums[i]>0)ans*=+1;
            if(nums[i]<0)ans*=-1;
            if(nums[i]==0)ans*=0;
            ///ans *=num[i];///�C����nums[i]���ians��
        }///�Ʀr�V���V�j 1000�ӼƦr ����@�b �N�z���F �ҥH�{�����F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
