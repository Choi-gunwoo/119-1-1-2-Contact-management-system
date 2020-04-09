#include <stdio.h>

struct contact {
    char Name[50];
    char Phone[15];
    char Address[100];
    char Email[50];
};

int main(){
    	FILE *fpr = NULL;
		FILE *fpw = NULL;
		int i = 0, j = 0;
		char c[100];
		struct contact conList[100];
    
    
        printf("\n\t\tEdit a Contact : Enter the contact to edit\n================================================================================\n");
		printf("Name : ");
        scanf("%s", &conList[0].Name);
        printf("Phone : ");
        scanf("%s", &conList[0].Phone);
        printf("Address : ");
        scanf("%s", &conList[0].Address);
        printf("Email : ");
        scanf("%s", &conList[0].Email);

        printf("\n %s \n %s \n %s \n %s \n", 
        conList[j].Name, 
        conList[j].Phone,
        conList[j].Address,
        conList[j].Email
        );
        
    // 종료 전 파일 저장 
	fpw = fopen("sample_edited.txt", "wt");
	for(j = 0; j < i; j++){
	fprintf(fpw, "%s %s %s %s\n", 
				conList[j].Name, 
				conList[j].Phone,
				conList[j].Address,
				conList[j].Email);
	}
	printf("\n 파일 수정 성공. 종료\n");
	
	fclose(fpr);
	fclose(fpw);
	return 0;
	 
	  
	   
}




