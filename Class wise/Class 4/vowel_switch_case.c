//Write a program to find whether a character is consonant or vowel using switch statement.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
    // Switch statement to determine if the character is a vowel or consonant
    switch(ch)
    {
        case 'a':
        case 'A':
            // If the character is 'a' or 'A', it's a vowel
            printf("%c is a vowel", ch);
            break;
        case 'e':
        case 'E':
            // If the character is 'e' or 'E', it's a vowel
            printf("%c is a vowel", ch);
            break;
        case 'i':
        case 'I':
            // If the character is 'i' or 'I', it's a vowel
            printf("%c is a vowel", ch);
            break;
        case 'o':
        case 'O':
            // If the character is 'o' or 'O', it's a vowel
            printf("%c is a vowel", ch);
            break;
        case 'u':
        case 'U':
            // If the character is 'u' or 'U', it's a vowel
            printf("%c is a vowel", ch);
            break;
        default:
            // If the character is not a vowel, it is considered a consonant
            printf("%c is a consonant.", ch);	
    }
	return 0;
}
