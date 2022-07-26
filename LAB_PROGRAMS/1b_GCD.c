#include <stdio.h>
int gcd(int a,int b) {
if(b!=0) return
gcd(b,a%b);
else
return a;
}
void main()
{
int a,b,c;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
c=gcd(a,b);
printf("The gcd of two numbers is %d\n",c);
}
