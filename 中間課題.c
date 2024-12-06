#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("パスワードを入力してください");
    
    char str[100];
    scanf("%s", str);
    
    str[strcspn(str,"\n")]='\0';
    
    int has_upper = 0;
    int has_lower = 0;
    
    int length = strlen(str);
    
    for (int i = 0; i < length; i++)
    {
        if (isupper(str[i]))
        {
            has_upper = 1;
        }
        if (islower(str[i]))
        {
            has_lower = 1;
        }
    }
    
    if (strlen(str)<8)
    {
        printf("8文字以上入力してください\n");
    }
    
    if (!has_upper)
    {
        printf("大文字を入力してください\n");
    }
    
    if (!has_lower)
    {
        printf("小文字を入力してください\n");
    }
    

    return 0;
}