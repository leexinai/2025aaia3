///week01-3c.cpp
# include <stdio.h>///�ϥ�C�y�����~�� �t�d��Jinput ��Xoutput
int main()
{
    int n;
    scanf("%d",&n);///�ϥ�C�y���� scan with format ��J
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+= i*i;
    }
    printf("%d",ans);///�ϥ�C�y���� print with format �L�X��
}
