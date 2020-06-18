#include<stdio.h>

//sscanf

int main(){
	
	int n;
	char *date="18 June 2020";
	int day;
	char month[20];
	int year;
	
	sscanf(date,"%d %s %d",&day,month,&year);
	
	printf("%d %s %d",day,month,year);
	
	return 0;
}

