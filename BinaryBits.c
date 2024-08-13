#include <stdio.h>

int main(){
	
	unsigned int i=60;			//0011 1100	
	unsigned int j=13;			//0000 1101
	int result=0;
	
	//result=i&j;
	result=i|j;					//0011 1101	(0 = false , 1 = true just like logic tables)
								//TT=t ,TF=t ,FT=t ,FF=f	(atleast 1 
	
	printf("Result is %d\n ",result);
	
	return 0;
}
