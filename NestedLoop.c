#include <stdio.h>

int main(){
	
	int i,j;
	
	for(i=1;i<=10;i++){
		for(j=10;j>=0;j--){
			
			printf("Outer:"%d\n" ,j);
			
			printf("Inner:"%d\n" ,i);
			
			
		}
		
		
	}
	
		
}