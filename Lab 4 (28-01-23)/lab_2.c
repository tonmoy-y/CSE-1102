#include <stdio.h>
int main()
{
    float  pay_tax=0;
    int income;
    printf("Enter your salary: ");
    scanf("%d", &income);

    switch(income) {

    case   0 ... 9999:
    
        pay_tax = pay_tax + income * 0.1;
        
    break;

    case 10000 ... 29999:
    
        pay_tax = pay_tax + 10000 * 0.1;
        pay_tax = pay_tax + (income - 10000) * 0.150;
break;

    case 30000 ... 49999:

        pay_tax = pay_tax + 30000 * 0.150;
        pay_tax = pay_tax + (income - 30000) * 0.20;      
    break;

    default:
   
        pay_tax = pay_tax + 50000 * 0.20;
        pay_tax = pay_tax + (income - 50000) * 0.25; 
    
    }
    printf("Your payable tax amount is %0.2f \n", pay_tax);
    return 0;
}
