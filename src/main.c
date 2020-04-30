#include <stdio.h>
#include <espl_lib.h>

int main(){
	unsigned int num, exit=0;
	char* words;
	char status;

	while(exit!=1){
		printf("Please enter a number: ");
		scanf(" %u", &num);
		words = num_to_words(num);
		printf("Your number in words is: %s\n", words);

		printf("Do you want to exit [x] or to enter a new number [n]?\n");
		//scanf("%c", &status);
		while(status!='n' && status!='x'){
			scanf("%c", &status);
			if(status=='n'){	
				words=0;
				exit=0;
			}else if(status=='x'){
				exit=1;
			}
		}
		status=0;
	}
	return 0;
}
