#include<stdio.h> 

int main() {
    FILE *ptr;
    ptr= fopen("t.txt", "r");
char s[100],st[100];
int i=0;
s[i] =fgetc(ptr);
    while(s[i] != EOF) {
         i++;
            s[i] =fgetc(ptr);
           
    }
    fclose(ptr);
  
int k=0;
    for( i=0; s[i]!='\0'; i++) {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            st[k]=s[i];
            k++;
        }

    }
    

    
    fclose(ptr);
    ptr = fopen("te.txt", "w");
    fputs(st, ptr);
    fclose(ptr);
    return 0;
    return 0;
}