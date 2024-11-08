#include <stdio.h>

int main()
{
    int k;
    printf("数字を二つ入力してください");
    scanf("%d", &k);
    
    int a;
    scanf("%d", &a);
    
    if (k+a>=100)
    {
        printf("big");
    }
    
    else if (k+a<=10)
    {
        printf("few");
    }
    
    else
    {
        printf("normal");
    }