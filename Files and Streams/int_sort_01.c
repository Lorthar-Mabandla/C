/********************************************************************************************************/
/*	File name:	int_sort_01.c									*/
/*	Author:		Lorthar Mabandla								*/
/*	Date:		Modified 26 March 2019, created 25 March 2019					*/
/*	Purpose:	Program to sort integers collected from a text file (AT MOST 1000) 		*/
/*			Sorted integers are stored in the destination file				*/
/********************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

//function declaractions
void connect(char *src_file, char *dest_file);
void int_sort(FILE *src, FILE *dest);


void connect(char *src_file,char *dest_file){
	FILE *src, *dest;
	if((src = fopen(src_file,"rt")) == NULL){
		printf("%s:	%s\n",src_file, strerror(errno));
		return;
	}
	if((dest = fopen(dest_file,"wt")) == NULL){
		printf("%s:	%s\n",dest_file, strerror(errno));
		fclose(src);
		return;
	}
	else{
		int_sort(src, dest);
		fclose(src);
		fclose(dest);
	}
	return;
}
void int_sort(FILE *src, FILE *dest){
	int arr[1000], arr_index = 0, temp, i =0, a,b; // i is used in while
	while( ((fscanf(src, "%d", &arr[arr_index]) == 1) && (arr_index < 1000)) )//don't forget ampersand '&' on the array target
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
			fprintf(dest,"%d\t", arr[i]);
			i++;
		}
		fprintf(dest,"\n");
		return;
	}
}

int main(int argc, char *argv[]){
	if((argc == 2) && ( (strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "-V") == 0) ) ){
	      printf("Author:		Lorthar Mabandla \nVersion:	Integer sorting program, version 02\n");
      	      return 0;
	}
	else if(argc != 3){
		printf("Usage:	args... enter source and destination file names\n");
		return 0;
	}
	else
		connect(argv[1], argv[2]);
	return 0;
}
