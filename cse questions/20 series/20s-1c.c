#include<stdio.h> 
#include <stdlib.h>

int main() {
     int a, b, f, g;
   printf("Enter 1st day temperature of Mali: ");
   scanf("%d", &a);
   printf("Enter 2nd day temperature of Mali: ");
   scanf("%d", &b);
   printf("Enter 1st day temperature of Antactica: ");
   scanf("%d", &f);
   printf("Enter 2nd day temperature of Antactica: ");
   scanf("%d", &g);

   int c = abs(a - b);
   float d = (9.0 / 5) * c;
   int h = abs(f-g);
   float i = (5 / 9.0) * h;
printf("\n\n");
   printf("Differnces of temperature in Mali in celcius: %d\n", c);
   printf("Differnces of temperature in Mali in ferenheit: %0.1f\n", d);
   printf("Differnces of temperature in Antactica in celcius: %0.1f\n", i);
   printf("Differnces of temperature in Antactica in ferenheit: %d\n", h);
    return 0;
}