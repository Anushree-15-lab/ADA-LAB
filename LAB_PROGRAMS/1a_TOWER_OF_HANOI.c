#include<stdio.h>
void towerofhanoi(int n,char from,char to,char aux)
{
  if(n==1)
  {
    printf("\n Move disk 1 from %e to %e",from, to);
    return;
  }
  towerofhanoi(n-1,from,aux,to);
  printf("\nMove disk %d from %c to %c",n,from,to);
  towerofhanoi(n-1,aux,to,from);
}
 int main()
{
   int n;
   printf("Enter number of disks:");
   scanf("%d",&n);
   towerofhanoi(n,'A','B','C');
   return 0;
}
