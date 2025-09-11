///week01-3c.cpp
# include <stdio.h>///使用C語言的外掛 負責輸入input 輸出output
int main()
{
    int n;
    scanf("%d",&n);///使用C語言的 scan with format 輸入
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+= i*i;
    }
    printf("%d",ans);///使用C語言的 print with format 印出來
}
