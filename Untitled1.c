/*
Number of digits:12
9 2 8 1 3 5 6 7 3 1 1 6
Number of digits:9
7 8 4 6 2 1 9 9 7
Output :
9 2 8 9 2 0 2 9 5 1 1 3 
*/
#include<stdio.h>
#include<stdlib.h>
int* alloc(int no1,int no2)
{
	int *arr3;
	if(no1<no2)
	arr3 = malloc((no2+1)*sizeof(int));
	else
	arr3 = malloc((no1+1)*sizeof(int));
	return arr3;
}
void getVal(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	//return arr;
}
int main()
{
	int no1,no2;
	scanf("%d%d",&no1,&no2);
	int arr1[no1],arr2[no2];
	int *arr3=alloc(no1,no2);
	getVal(arr1,no1);
	getVal(arr2,no2);
	
	int i,j;
	for(i=0;i<5;i++)
	printf("%d ",arr2[i]);
	return 0;
}
