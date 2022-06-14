#include <stdio.h>

int max;

int main()
{
    int dal[50][50];
    int i, x = 0, y = -1, t = 1;
    int p;
    int cnt=1;
    int jmax;

    printf("배열 숫자를 입력하세요 nXn: ");
    scanf("%d",&p);
    max=p;
    
    jmax=max;
    while(0<=jmax)
    {
        for(i=0;i<jmax;i++)
        {
        y=y+t;
        dal[x][y]=cnt;
        cnt++;
    }
    jmax--;
    for(i=0;i<jmax;i++)
    {
        x=x+t;
        dal[x][y]=cnt;
        cnt++;
    }

    t=t*-1;
    }
    for(x=0;x<max;x++)
    { 
    for(y=0;y<max;y++)
    {
    printf("%4d",dal[x][y]);
    }
    printf("\n");
    }

    return 0;
}
