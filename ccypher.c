#include <stdio.h>
#include <stdlib.h>

//This is a simple program that simulates a Caesar cypher. Pass in a .txt file to shift and a number to shift by.

int main(int argc, char **argv){

	//At some point check to make sure that you have the expected number of arguments.

	//check if you have the right amount of argumnets. 
	if(argc<3){
		
		printf("Not enough arguments.\n"); 
		return 0; 			
	}

	int n; 
	char ch; 
	
	//Take in the value of the number argument. 
	n = (atoi(argv[2])); 
	
	//Find the values that we shift by. 
	n = (n%26); 
	
	//open the file given and check if it is NULL. 
	FILE *file = fopen(argv[1], "r"); 
	if (file==NULL){
	
		printf("File failed to open.valgi\n"); 
		return 0; 
	}
	
	//Goes through the file char by char. 
	while((ch=fgetc(file))!=EOF){
			
		//Lower case	
		if(ch >='a' && ch <='z'){
			
			ch = ch + n;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1; 
			}

			printf("%c", ch);
 
		//Upper case
		}else if(ch >= 'A' && ch <= 'Z'){
		
			ch = ch + n; 
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1; 	
			}
		
			printf("%c", ch); 
		
		//Anything besides a letter
		}else{
			
			printf("%c", ch); 
		}
	}

	fclose(file); 
	return 1; 

}	
