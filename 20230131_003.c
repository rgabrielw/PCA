#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int i, j, day, month, year;
	char date[11];
	
	printf("Type your date: ");
	scanf("%s", date);
	
	while(date[2]!='/' || date[5]!='/'){
		printf("Don't forget to use /\n");
		printf("Type your date again: ");
		scanf("%s", date);
	}
	for(i=0; i<strlen(date); i++){
		if(i==2 || i==5){
			i++;
		}
		if(date[i]<'0' || date[i]>'9'){
			printf("\nInvalid number, type integer numbers!");
			return 0;
		}	
	}
	day = (date[0] - '0') * 10 + (date[1] - '0');
  	month = (date[3] - '0') * 10 + (date[4] - '0');
  	year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0');
        

  	printf("\nDay: %d\nMonth: %d\nYear: %d\n", day, month, year);
}
