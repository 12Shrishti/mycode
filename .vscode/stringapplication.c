#include<stdio.h>
int main()
{
    char word1[40],word2[40],word3[40],word4[40];
    printf("enter text:\n");
    scanf("%s %s",word1,word2);
    scanf("%s",word3);
    scanf("%s",word4);
    
    printf("\n");
    printf("word1=%s\n word2=%3s\n",word1,word2);
    printf("word3=%s\n word4=%s",word3,word4);
    return 0;
}
