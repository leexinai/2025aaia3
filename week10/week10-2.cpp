///week10-2.cpp(埃程 程 キА羱)
///1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;///р羱常癬ㄓ
        int N = salary.size();///羆ΤN
        int M = salary[0],m = salary[0];///р材0 讽程 程
        for(int i=0; i<N; i++){
            total += salary[i];///р羱常安癬ㄓ
            if(salary[i]>M) M = salary[i];///ゑ程 程传
            if(salary[i]<m) m = salary[i];///ゑ程 程传
        }
        ///return total / N;///ぃ钡场埃奔 璶Ι埃程 程
        return (total - M - m)/(N-2);///埃2(程 程)埃
    }
};
