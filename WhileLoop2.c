#include <stdio.h>

int main(){
	
	char name[25];
	
	printf("\nWhat's your name? ");
	fgets(name,25,stdin);
	name[strlen(name)-1]='\0';
	
	while(strlen(name)==0)
		{
			
			printf("\n You didnot enter your name !!!");
			printf("\nWhat's your name");
			fgets(name,25,stdin);
			name[strlen(name)-1]='\0';
			
	}
	
	printf("Hello %s",name);
	
	return 0;
}