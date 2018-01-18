#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the three numbers");
scanf("%d %d %d",&x,&y,&z);
if(x>=y && x>=z)
{
printf("%x isthe largest number",x);
}
else if(y>=x && y>=z)
{
printf("%y the largest number",y);
}
else
{
printf("%z the largest number:",z);
}
return 0;
}

