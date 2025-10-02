///week04-4d.cpp Part1:input Part2:output
///UVA The 3n + 1
///Part3:Algorithm(while,if),Part 4:now
///Part5:for(int i=a; i<=b; i++){int n=i;}
#include <iostream>
using namespace std;
int main()
{
	int a,b;///Part 1: input
	while (cin >> a >> b){
		int ans = 0;
		int a2=a,b2=b;///Part6
		if(a2>b2) swap(a2, b2);///PArt6
		for(int i=a2;i<=b2;i++){///Part5 Part6
			int now=1;///Part 4
			int n = i;
			while(n !=A1){///Part 3
				if(n%2==1) n = 3*n+1;
				else n = n / 2;
				now++;///Part4
			}
			if(now>ans) ans=now;///Part4
		}
		printf("%d %d %d\n", a, b, ans);
	}///Part2 :output
}
