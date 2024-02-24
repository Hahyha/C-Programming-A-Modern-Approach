#include <stdio.h>
#include <ctype.h>

int main(void){
	char character[300], input;
	int i, msglength = 0;
	
	printf("Enter message: ");
	
	while ((input = getchar()) != '\n') {
	    character[msglength] = input;
	    msglength++;
	}
	
	for (i = 0; i < msglength; i++) {
	    switch (toupper(character[i])) {
	        case 'A':
	            putchar('4');
	            break;
	        case 'B':
	            putchar('8');
	            break;
	        case 'E':
	            putchar('3');
	            break;
	        case 'I':
	            putchar('1');
	            break;
	        case 'O':
	            putchar('0');
	            break;
	        case 'S':
	            putchar('5');
	            break;
	        default:
	            putchar(toupper(character[i]));
	            break;
	    }
	}
  printf("!!!!!!!!!!\n");
    
	return 0;
}
