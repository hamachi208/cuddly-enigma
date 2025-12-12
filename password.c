#include <stdio.h>
#include <string.h>

int main(){
    char password[100];
    int hasUpper = 0, hasLower = 0;
   
    printf("パスワードを入力してください");
    scanf("%99s",password);
    
    int length = strlen(password);
    
    for(int i =0; i<length; i++){
        char c = password[i];
        
        if(c >= 65 && c <= 90)
        {
            hasUpper = 1;
        }
        if(c >= 97 && c <=122)
        {
            hasLower = 1;
        }
    
    }
    int isStrong = 1;
    
    if(length < 8)
        isStrong=0;
    if(!hasUpper)
        isStrong=0;
    if(!hasLower)
        isStrong=0;
    
    if(isStrong)
    {
        printf("このパスワードは強いパスワードです。\n");
    }
    else
    {
        printf("このパスワードは強くありません。\n改善点\n");
        
        if(length < 8)
        printf("-8文字以上にしてください。\n");
        
        if(!hasUpper)
        printf("-大文字を含めてください。\n");
        
        if(!hasLower)
        printf("-小文字を含めてください。\n");
    }

    return 0;
}