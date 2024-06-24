#include<stdio.h>

struct Employee{
	char name[50];
	char role[50];
};

int main(){
	const int MAX_EMPLOYEES = 100;
	struct Employee employees[MAX_EMPLOYEES];
	int N, i;
	
	printf("Enter number of employees: ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		printf("\nEmplpoyee %d: \n", i + 1);
		
		printf("Enter name: ");
		scanf(" %[^\n]s", employees[i].name);
		
		printf("Enter role: ");
		scanf(" %[^\n]s", employees[i].role);
	}
	
	FILE * fp;
	fp = fopen("employee.txt", "w");
	
	if (fp == NULL){
		printf("Error");
		return 1;
	}
	
	printf("\nData has been wriiten to employee.txt successfully.\n");
	
	return 0;
}