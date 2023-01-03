#include<stdio.h>
#include<string.h>
struct employee

{
char name[30];
char surname[20];
char mail[30];
int id;
int sallery;


};

int main()

{
    int n;
    printf("enter count of employee : ");
    scanf("%d",&n);
    
    struct employee a[n];
    for(int i=0; i<=n; i++)
    {
char name[30];
char surname[20];
int id;
int sallery;
char mail[30];


printf("enter name :");
gets(a[i].name);

printf("enter surname :");
gets(a[i].surname);

strcat(name,surname);
printf("%s %s\n",a[i].name,a[i].surname);

printf("enter id : ");
scanf("%d\n",&id);

printf("enter sallery : ");
scanf("%d\n",&sallery);

printf("enter your email : ");
gets(a[i].mail);

printf("emplopyee details\n ,name=% %s\n,,id=%d\n,sallery=%d, mail=a[i].mail\n");
// a[i].name , a[i].id , a[i].sallery , a[i].mail 
    }
    return 0;

}