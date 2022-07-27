#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void delay(){
int a,b;
for(a=0;a<10000;a++){
    b=100/50;
}
}
void insertionsort(int arr[],int n){
int i,key,j;
for(i=0;i<n;i++){
    key=arr[i];
    j=i-1;

while(j>=0 && arr[j]>key){
    delay();
    arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=key;
}
}



int main(){
int n,i;
clock_t start,end;
srand(time(0));

printf("Enter size of array:");
scanf("%d",&n);

int arr[n];
for(i=0;i<n;i++){
    arr[i]=rand()/100;
}


start=clock();
insertionsort(arr,n);
end=clock();


printf("Time taken:%f",(double)(end-start)/CLOCKS_PER_SEC);

}
