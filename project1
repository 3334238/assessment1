#include <stdio.h>
//task 3.2 code
int main() {
char message[25], ch; //
int i, key;

printf("enter a message to encrypt");

printf("Enter key:");
scanf("%d", &key);

for(i = 0; message[i] !='\0'; ++i){
    ch = message[i];
    
    if(ch >='a' &&ch <= 'z'){
        ch = ch - key;
        if(ch < 'a'){
            ch = ch + 'z' - 'a' + 1;
        }
        
        message [i] = ch;}

  return 0;
}
