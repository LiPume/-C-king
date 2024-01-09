/*#include<stdio.h>
#include<string.h>
void delchar(str,c);
int main()
{
    int repeat;
    
    scanf("%d",&repeat);
  
    char str[100];
    getchar();
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char c;
    scanf("%c",&c);
    int i;
    for(i=0;i<repeat;i++)
    {
        delchar(str,c);
        printf("result: %s\n",str);
    }
}
void delchar(char *str,char c)
{
int n=strlen(str);
int i,j=0;
for(i=0;i<n;i++)
{
  if(str[i]!=c)
  {
  str[j]=str[i];
    j++;
  }
}
    str[j]='\0';
}
 #include<stdio.h>
int main()
{
    int a[5][5];
    int i,j,k;
    int max,min;
    int m1=0,n1=0;
    int flag,s=0;
    for(i=0;i<5;i++)
       for(j=0;j<5;j++)
       scanf("%d",&a[i][j]);
    printf("输入的矩阵是:\n");
    for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
    for(i=0;i<5;i++)
    {
        max=a[i][0];
        for(j=0;j<5;j++)
        {
            if(a[i][j]>max)
            {max=a[i][j];
            m1=i;
            n1=j;} 
        }
        min=max;
        flag=0;
        for(k=0;k<5;k++)
        {
           if(min>a[k][n1])
           flag=1;
        }
        if(flag==0)
        {
            printf("%d %d %d\n",m1+1,n1+1,a[m1][n1]);
            s++;
        }
       
    }
    if(s==0)
    printf("没找到");

}*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    int m=a<b?a:b;
    int max,min;
    for(i=1;i<=m;i++)
    {
        if(a%i==0&&b%i==0)
           max=i;

    }
    min=a*b/max;
    printf("%d %d",max,min);
}

