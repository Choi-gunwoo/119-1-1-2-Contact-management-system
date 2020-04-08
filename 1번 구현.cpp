#include <stdio.h>

struct contact {
    char Name[50];
    char Phone[15];
    char Address[100];
    char Email[50];
};

int main(){
    char c[100];
    struct contact cList[100]; 

        printf("Name : ");
        scanf("%s", &cList[0].Name);
        printf("Phone : ");
        scanf("%s", &cList[0].Phone);
        printf("Address : ");
        scanf("%s", &cList[0].Address);
        printf("Email : ");
        scanf("%s", &cList[0].Email);

        printf("%s %s %s %s \n", 
        cList[0].Name, 
        cList[0].Phone,
        cList[0].Address,
        cList[0].Email
        );
        
		////파일저장오류나는부분 
        
        FILE *fp = fopen("sample.txt", "w");
        
		cList[0].Name;
        cList[0].Phone;
        cList[0].Address;
        cList[0].Email;
        
		fputs("%s %s %s %s \n", 
		cList[0].Name, 
		cList[0].Phone, 
		cList[0].Address, 
		cList[0].Email, 
		fp);
		
		
		fclose(fp);
    }
