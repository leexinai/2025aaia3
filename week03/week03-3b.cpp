///week03-3b.cpp �G�X�@����1�ؤ�k �⤣�O0����X��
///leetcode�ǲ߭p�e�a6�D283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;///��������nums[k]=nums[i],�Ak++
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)nums[k++]=nums[i];
        }
        for(int i=k;i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
