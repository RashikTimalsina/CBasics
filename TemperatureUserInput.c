#include <stdio.h>
#include <ctype.h>

int main(){
	
	char unit;
	float temp;
	
	printf("\nIs the temperature is in (C) or (F)");
	scanf("%c" ,&unit);
	
	
	unit=toupper(unit);	  //C is a case-sensitive program,this converts to Uppercase letters
	//unit=tolower(unit);	  //C is a case-sensitive program,this converts to lowercase letters
		
	if(unit=='C'){
		
		printf("Enter the temp in Celsius :");
		scanf("\n%f",&temp);
		temp=(temp*9/5) +32;
		printf("The temp in Fahrenheit Scale is %.1f\n :" ,temp);
	}	
	else if(unit=='F'){	
			
			printf("Enter the temp in Fahrenheit :");
			scanf("%f",&temp);
			temp=((temp-32)*5)/9;
			printf("The temp in Celsius Scale is %.1f\n :" ,temp);
	}
	else{
		
		printf(" Invalid unit of measurement !!!" ,unit);
	
	}

	return 0;
}


