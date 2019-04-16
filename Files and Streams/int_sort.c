/********************************************************************************************************/
/*	File name:	int_sort.c									*/
/*	Author:		Lorthar Mabandla								*/
/*	Date:		25 March 2019									*/
/*	Purpose:	Program to sort integers collected from a text file and print them on stdout	*/
/********************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

//function declaractions
void connect(char *file_name);
void int_sort(FILE *file);


void connect(char *file_name){
	FILE *file;
	if((file = fopen(file_name,"rt")) == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	else{
		int_sort(file);
		fclose(file);
	}
	return;
}
void int_sort(FILE *file){
	int arr[1000], arr_index = 0, temp, i =0, a,b; // i is used in while
	while( ((fscanf(file, "%d", &arr[arr_index]) == 1) && (arr_index < 1000)) )//don't forget ampersand '&' on the array target
		arr_index++;
	if(arr_index == 0){
		printf("No Integers read from text file\n");
		return;
	}
	else{
		for(a = 0; a < arr_index ; a++){
			for(b = a+1 ; b < arr_index ; b++){
				if(arr[a] > arr[b]){
				       	temp = arr[b]; 
					arr[b] = arr[a]; 
					arr[a] = temp;
				}
			}
		}
		while( i< arr_index){
			printf("%d\t", arr[i]);
			i++;
		}
		printf("\n");
		return;
	}
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: args... Enter the name of file with integers to be sorted. \nAlso include directory with name: /.../file.ext\n");
		return 0;
	}
	else if((argc == 2) && ( (strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "-V") == 0) ) ){
	      printf("Author:		Lorthar Mabandla \nVersion:	Integer sorting program, version 01\n");
      	      return 0;
	}
	else
		connect(argv[1]);
	return 0;
}
