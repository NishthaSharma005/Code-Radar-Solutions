#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=="AEIOUaeiou"){
        printf("Vowel");
    }
    else if(ch>='a' && ch<='z' && ch>='A' && ch<='Z'){
        printf("consonant");
    }
    else if(ch=="0123456789"){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}