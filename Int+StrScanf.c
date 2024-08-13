#include <stdio.h>

int main(){
	
	char str[50];
	int i;
	
	printf("Enter the value ");
	scanf("%s %d", str, &i);			//1st string part then int part will print respn
	
	printf("\nYou have entered %s %d\n ",str , i);
	
	return 0;
}
