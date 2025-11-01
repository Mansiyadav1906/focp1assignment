#include <stdio.h>
int main()
{
int rows,a,b;
printf("Enter number of rows you want to create:");
scanf("%d",&rows);
for (a= 0;a<=rows;a++)
{
for (b=0;b<a;b++){
printf("%d",b%2);
}
printf("\n");}
return 0;

}