#include "ourhdr.h"
int main()
{
	char * FILE_NAME_SRC = "/home/rlk/kong/etc/src";    
	char * FILE_NAME_DES = "/home/rlk/kong/etc/des";  
	unsigned char file_buffer[20]; 
	FILE *fdsrc,*fddes;
	fdsrc = fopen(FILE_NAME_SRC,"rb"); 
	fddes = fopen(FILE_NAME_DES,"wt"); 
		if(fdsrc == NULL)  
		{  
		   perror("errno");  
		}  
		if(fddes == NULL)  
		{  
		   perror("errno");  
		} 
		else
		{  
		   printf("File Open successed!\n");  
		   while(!feof(fdsrc)){
				fread(file_buffer,sizeof(char),20,fdsrc);
				fwrite(file_buffer,sizeof(char),20,fddes);
			}
			fclose(fdsrc); 
			fclose(fddes); 
		}
	return 0; 
}
