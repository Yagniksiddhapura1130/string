#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
    char name[30];
  
    int id;
    double salary;
} Employee;
 
int main()
{
   
    int n;
    printf("enter count of employee : ");
    scanf("%d",&n);

   
    Employee employees[n];
 
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);
  
    
        
        printf("Id: ");
        scanf("%d",&employees[i].id);

       
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

       
        char ch = getchar();
 
        printf("\n");
    }
 
    
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
