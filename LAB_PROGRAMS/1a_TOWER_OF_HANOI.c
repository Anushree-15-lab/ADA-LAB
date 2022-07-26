#include<stdio.h>
void toh(int n,char a,char b,char c)
{ if(n>0){ toh(n-1,a,c,b);
printf("Move %c to %c",a,c);
toh(n-1,b,a,c);
}
}
void main()
{ char
A,B,C; int
num;
printf("Enter number of disks: ");
scanf("%d",&num);
toh(num,'A','B','C');
}
