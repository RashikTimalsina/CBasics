#include <stdio.h>
#include <stdbool.h>

int main(){
	
	char a='C';							//single character %c
	char b[]="Rashik";					//array of characters %s
	
	float c=3.14545324321231;					//4 bytes (32 bits of precision) 6-7 digits	%f
	double d=3.1454512321321;					//8 bytes (64 bits of precision) 15-16 digits %1f
	
	bool e=false;						//1 byte(true or false) %d	Output:true=1; false=0;
	
	char f=100;						//1 byte(-128 to +127) %d or %c
	unsigned char g=255;			//1 byte (0 to +255) %d or %c		(not store -num and after 255 it begins with 0 again)
	
	short h=32767;				//2 bytes(-32,768 to +32,767) %d	(exceeding these values means overflow and starting with -num again)
	unsigned short i=65535;		//2 bytes (0 to +65,535) %d			(exceeding these values means overflow and starting with -num again)
	
	int j=2147483647; 					//4 bytes (-2,147,483,648 to +2,147,483,647) %d		(exceeding these values means overflow and starting with -num again)
	unsigned int k=4294967295;		//4 bytes (0 to +4,294,967,295) %u

	long long int l=9223372036854775807;             	// 8 bytes (-9 quintillion to +9 quintillion)
	unsigned long long int m= 18446744073709551615U;		//8 bytes  (0 to +18 quintilion) %			Using U will give accurate value

	
	//printf("%c\n" , a);			//char
	//printf("%s\n" , b);			// character array
	//printf("%0.15f\n" , c);			// float
	//printf("%0.15lf\n" , d);			//double
	//printf("%d\n" , e);			//bool
	//printf("%c\n" , f);			//char as numeric value
	//printf("%d\n" , g);			//unsigned char as numeric value
	//printf("%d\n" , h);			//short
	//printf("%d\n" , i);
	//printf("%d\n" , j);
	//printf("%u\n" , k);
	//printf("%lld\n" , l);
	//printf("%llu\n" , m);
	


}
