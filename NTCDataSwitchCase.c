#include <stdio.h>

int main(){
	
	char dig;
	
	printf("Enter the num :");
	scanf("%c\n ",&dig);
	
	switch(dig){
		case '1':
			printf("Spring");
			break;	
		case '2':
			printf("Prepaid Packs");
			break;	
		case '3':
			printf("Unlimited Night Data");
			break;	
		case '4':
			printf("Voice");
			break;
		case '5':
			printf("4G");
			break;		
		case '6':
			printf("GB/Day");
			break;	
		case '7':
			printf("Int-Services");
			break;
		case '8':
			printf("Unlimited");
			break;			
		case '9':
			printf("Day Packs");
			break;	
		case '0':
			printf("StayConnected");
			break;	
		default :
			printf("Please enter only valid numbers\n" );
			
	}
	
			return 0;	
	
}
