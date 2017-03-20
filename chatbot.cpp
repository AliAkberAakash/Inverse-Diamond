/*
Self learding chatbot :p
Date : Feb 19, 2017
Author: MD. MUBDIUR RAHMAN


Algo:
Step1: read it
Step2: Search for it
Step3: if found write!
Step4: if not found set new

*/






#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char c, fstri[500], fstro[500], stri[500] ;
	FILE *FPTR = NULL;
	FPTR = fopen("Db.dll", "r+");
	if(FPTR==NULL)
		FPTR = fopen("Db.dll", "w+");
	int FoundInDB, exit_stat, inputRemain, i, len;

	do{
		fclose(FPTR);
		FPTR = NULL;
		FPTR = fopen("Db.dll", "r+");
		FoundInDB = 1;
		exit_stat = 0;
		inputRemain = 1;
		fstri[0] = '\0';
		fstro[0] = '\0';
		stri[0] = '\0';
		scanf("%[^\n]", stri);
		len = strlen(stri);
		for(i = 0; i < len; i++)
			stri[i] = tolower(stri[i]);
		scanf("%c", &c);
		while(inputRemain==1){
			if(strcmp(stri, "bye now :)")==0){
				puts("RoboLearner: Okay, Hope to see you soon");
				exit_stat = 1;
				break;
			}
			if(fscanf(FPTR, "%[^\n]", fstri)!=EOF){
				fscanf(FPTR,"%c", &c);
				fscanf(FPTR, "%[^\n]", fstro);
				fscanf(FPTR,"%c", &c);
				if(strcmp(fstri, stri)==0){
					printf("RoboLearner: ");
					puts(fstro);
					break;
				}
			}else{
				FoundInDB = 0;
				inputRemain = 0;
			}

		}
		if(!FoundInDB && strlen(stri)>1){
			puts("This Statement Hasn't been found!\n\tWanna add something?(yes/no): ");
			scanf("%[^\n]", fstri);
			getchar();
			fstri[0] = tolower(fstri[0]);
			fstri[1] = tolower(fstri[1]);
			fstri[2] = tolower(fstri[2]);
			if(strcmp(fstri, "yes")==0){
				puts("write the new reply:");
				scanf("%[^\n]", fstri);
				getchar();
				fprintf(FPTR, "%s\n%s\n", stri, fstri);
			}
		}
	}
	while(!exit_stat);
	getchar();
	return 0;
}
