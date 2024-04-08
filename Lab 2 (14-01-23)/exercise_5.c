#include<stdio.h> 

int main() {
    int a,c,b;
    printf("Enter a digit: ");
    scanf("%d", &a);

    switch (a)
    {
        case 0: printf("\n Spelling: Zero");
        break;
    case 1: printf("\n Spelling: One");
        break;
    case 2: printf("\n Spelling: Two");
        break;
    case 3: printf("\n Spelling: Three");
        break;
    case 4: printf("\n Spelling: Four");
        break;
    case 5: printf("\n Spelling: Five");
        break;
    case 6: printf("\n Spelling: Six");
        break;
    case 7: printf("\n Spelling: Seven");
        break;
    case 8: printf("\n Spelling: Eight");
        break;
    case 9: printf("\n Spelling: Nine");
        break;
    case 10: printf("\n Spelling: Ten");
        break;


    default: printf("\nEnter the number between 0 to 10");
        break;
    }
    return 0;
}