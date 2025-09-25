///week03-4.cpp
///leetcode挑戰圖(賺錢金幣) 120. Triangle 找到最上面往下走的最小值
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][i]第i個的第j個
        int N = triangle.size();///總共有幾個區
        ///從下往上查 最下面的第N-1乘層 沒問題 就是本身的最小值 所以N-2往上更新
        for(int i=N-2;i>=0;i--){///到過來的迴圈 從N-2往上
            for(int j=0;j<=i;j++){///從左到右 地i層有0...i個數 都要更新
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                ///每個仁 要看到它下面2個選擇(正下方 下方靠右) 找最小的那一個
            }
         }
        return triangle[0][0];
    }
};
