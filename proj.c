//decryption
#include <stdio.h>
#include <string.h> //string library

int main() {
char message[100], ch; //message string
	int i, key;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; i++){
		ch = message[i];
		if(ch >= 'A' && ch <= 'Z'){ //rotation for upper case letters
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' + 1; //the actual rotation
			}
			
			message[i] = ch;
			printf("Encrypted message: %s", message); //prints encrypted message
		}
		
		else if(ch >= 'a' && ch <= 'z'){ //rotation for lower case letters
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' + 1; // have to rotate from upper case to lower case
			}
			
			message[i] = ch;
			printf("Encrypted message: %s", strlwr(message)); //strlwr function prints the encrypted message in capital letters
		}
		
	}
	
	
	
	return 0;
}         
