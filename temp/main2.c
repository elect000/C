#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "People.h"

int main(void)
{
	int i,count,datasize;
	People *data;
	
	datasize = 10;
	data = (People*)malloc(sizeof(People) * datasize);
	
	count = 0;
	while (1) {
		InputPeople(&data[count]);
		if (data[count].age == -1) break;
		count++;
		
		if (count >= datasize) {
			datasize += 10;
			data = (People*)realloc(data,sizeof(People) * datasize);
		}
	}
	
	for (i = 0;i < count;i++) {
		ShowPeople(data[i]);
	}

	free(data);
	
	return 0;
}
