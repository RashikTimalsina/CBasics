#include <stdio.h>

double square(double x){
	
	double result=x*x;				
	return result;
	
	//OR only return x*x;			

}

int main(){
	
	double x= square(3.14);
	printf("%lf ",x);			
		
	return 0;
}
