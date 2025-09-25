///week03-2b.cpp 璶糶ㄢΩ(ぃ璶痷 num[i] +1,-1,0)
///LeetCode 厩策璸礶8肈 1822. Sign of the Product of an Array
///р皚癬ㄓ 琌タ计 璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;///0ヴ计常琌0 Τ1程 或琌或
        for(int i=0;i<nums.size();i++){///璝碭计 癹伴禲碭Ω
            if(nums[i]>0)ans*=+1;
            if(nums[i]<0)ans*=-1;
            if(nums[i]==0)ans*=0;
            ///ans *=num[i];///–Ωрnums[i]秈ans柑
        }///计禫禫 1000计  碞脄 ┮祘Α岿
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
