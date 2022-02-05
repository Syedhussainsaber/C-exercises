#include<stdio.h>
#include<string.h>
#define N 4
struct driver
{
char name[20];
char licence[11];
char route[40];
int distance;
} d[N];
int main()
{
    struct driver d[N];
    int n,s;
    for(int i=0,id=1;i<N;i++,id++)
    {
printf("Enter the name of the driver%d :\n",id);
scanf("%s",&d[i].name);
printf("Enter the licence number of driver%d :\n",id);
scanf("%s",&d[i].licence);
printf("Enter your routes :\n");
scanf("%s",&d[i].route);
printf("Enter the distance you covered in km:\n");
scanf("%d",&d[i].distance);
  printf("\n");  
  }
    printf("Choose the following :\n1.Want to know details of any one driver ?\n2.Want to know the details of all drivers\n");
   scanf("%d",&n);
   if(n==1)
   {
printf("Enter the id of the driver,to know the details of him :\n");
scanf("%d",&s);
for(int i=0,id=1;i<N;i++,id++)
{
if(s==id)
{
printf("\nThe name of the driver%d is %s\n",id,d[i].name);
printf("His licence number is %s\n",d[i].licence);
printf("His routes are : %s\n",d[i].route);
printf("The distance covered by him is : %d\n\n",d[i].distance);
}
}
}
   else if(n==2)
   {
       printf("The details of all drivers are :\n\n");
for(int j=0;j<N;j++)
    {
printf("The name of the driver%d is %s\n",j+1,d[j].name);
printf("His licence number is %s\n",d[j].licence);
printf("His routes are : %s\n",d[j].route);
printf("The distance covered by him is : %d\n\n",d[j].distance);
}
}
   else
   {
       printf("Error enter the valid choice !\n");
   }
    return 0;
}