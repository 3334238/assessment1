/* function prototypes */
void rotat_encrypt(char input[], char output[], int key, char message[100]);
void rotat_decrypt(char input[], char output, int key, char message[100]);

void sub_encrypt(char input[], char output[], int key, char message[100]);
void sub_decrypt(char input[], char output[], int key, char message[100]);


#include <stdio.h>
#include <stdlib.h>
#include <string.h> //string library
#include <math.h> //math library

/*code to carry out functions*/
int main() {
char message[100], ch; //message string
    int user_input; 
    int key;
    printf("Please choose an option:\n 1 for Rotation Encryption\n 2 for Rotation Decryption \n 3 for Substitution Encryption\n 4 for Substiution Decryption\n"); //determines if it is to encrypt or decrypt
    scanf("%d", &user_input);
   
    switch(user_input) {
        case 1 : //rotation encryption case
            printf("Please enter encryption key:\n");
            scanf("%d", &key);
            rotat_encrypt(input, output, key, message);
            break;
        case 2 : //rotation decryption case
            printf("What is the key?\n");
            scanf("%d", &key);
            rotat_decrypt(input, output, key, message);
            break;
            
        case 3: //substitution encryption case
            printf("Please enter encryption key: \n");
            int sub_encrypt(input, output, key, message);
            break;
        
        case 4 : //subsitution decryption case
            sub_decrypt(input, output, key, message);
            break;
        default :
            printf("Please enter a valid option");
            break;
    }
    return 0;
}

/*function definitions*/
void rotat_encrypt(int key, char message[100]) { //rotation encryption definition
	int i;
	char ch;
	
	printf("Enter a message to encrypt: ");
	scanf("%s", &message);
	
	for(i = 0; *message[i] != '\0'; i++){
		ch = message[i];
		if(ch >= 'A' && ch <= 'Z'){ //rotation for upper case letters
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch % 26 + 'A'; //the actual rotation
			}
			
			message[i] = ch;
		}
		
		else if(ch < 0) { //impossible to get negative but helps just in case
		    c = ((temp + 26)%26 + 'A');
		}
		printf("Encrypted message: %s", message); //prints encrypted message
		
	}
	
	
void rotat_decrypt(int key, char message[100]) { //rotation decryption definition
	int i;
	char ch;
	
	printf("Enter a message to decrypt: ");
	gets(message);
	
	for(i = 0; message[i] != '\0'; i++){
		ch = message[i];
		if(ch >= 'A' && ch <= 'Z'){ //rotation for upper case letters
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch % 26 + 'A'; //the actual rotation
			}
			
			message[i] = ch;
		}
		
		else if(ch < 0) { //impossible to get negative but helps just in case
		    c = ((temp + 26)%26 + 'A');
		}
		printf("Decrypted message: %c", message); //prints encrypted message
	
	}
	

void sub_encrypt(char input, char output, int key, char message[100]) {
    int i;
    char ch;
    printf("Enter message to encrypt\n");
    gets(message);
    for (i = 0; message [i]!= NULL; i++) { 
        message[i] = toupper(message[i]); //changes all letters to upper case
    }
    for (i = 0; message[i] != NULL; i++) {
        if(message[i] == ' ') { //no changes (key = 0)
            emassage[i++] = message[i];
        }
        if(message[i] >=48 && message[i] <= 57) { //actual ciper (k > 0)
                message[i] = message[i] + key;
                if (message[i] > 57) {
                    emessage[i++] = 48 + (message[i] - 58); //encryption code
                }
                else {
                    emessage[i++] = message[i];
        else {
            if(*message[i] >=97 && *message[i] <= 123) {
                message[i] = message[i] + key;
                if(temp>122) {
                    emessage[i++] = 97 + (message[i] - 123); //encryption code
                }
            else{
                emessage[i++] = message[i];
                }
            }
        }
    printf("Encrypted message is:");
        for (i = 0; emessage[i] != NULL; i++) {
            printf("%c\n", emessage[i]);
        }
    return 0;
    }

/*decrypt message*/
void sub_decrypt(char input[], char demessage[], int key, char message[100]){
    int i;
    char ch;
    for (i=0; emessage[i] != NULL; i++) {
        if(message[i] == ' '){
        demessage[i++] = message[i];
        }
        else {
            if (message[i] >=48 && message[i] <= 75) {
                message = message[i] - key;
                if(temp < 48) {
                    demessage[i++] = 58 - (48 - message[i]);
                }
                else {
                    demessage[i++] = message[i];
                }
            else {
                    if(message[i] >= 97 && message [i] <=123) {
                        message = message[i] - key;
                        if(temp < 97) {
                            demessage[i++] = 123 - (97 - temp);
                        }
                        else {
                            demessage[i++] = message[i];
                        }
                    }
                    else {
                        demessage[i++] = message[i];
                    }
                }
            }
        }
    demessage [i] = '\0';
    printf("Decrypted message is:");
    for (i = 0; demessage[i] != NULL; i++) {
        printf("%c", demessage[i]);
    }
    return 0;
    }