#include<stdio.h>

int main()
{
    char K;
    printf("enter a characteristic\n");
    scanf("%c",&K );
    if (K == 'a' || K == 'e' || K == 'i' || K == 'o' || K == 'u' ||
        K == 'A' || K == 'E' || K == 'I' || K == 'O' || K == 'U') 
        
        {

        printf("%c is a vowel.\n", K);
    } 
    
    else 
    
    {
        printf("%c is a consonant.\n", K);
    }
    return 0;
}
