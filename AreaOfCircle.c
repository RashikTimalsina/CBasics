
#include <stdio.h>
#define PI 3. 
int main(){
	//WAP in C that finds AREA of circle PI*Rsquare;
	
	float radius,area;
    printf("Enter radius\n");
    scanf("%f",& radius);
	
	area = PI * radius * radius;
	printf("The Area of circle is %.f",area);
	
	return 0;
}
