#include<stdio.h>

//sscanf
//The only difference of the sscanf function from other scanf functions is that it does the reading operation from the object (char *) specified in its first parameter.

int main(){
	
	char *date="18 June 2020";
	int day;
	char month[20];
	int year;
	
	sscanf(date,"%d %s %d",&day,month,&year);
	
	printf("%d %s %d",day,month,year);
	
	return 0;
}

