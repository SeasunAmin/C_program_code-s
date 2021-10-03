#include<stdio.h>
#include<conio.h>
void PrintArray(int A[],int size)
{
	for(int i=0; i<size;i++)
	 {
	 	printf("%d",A[i]);
	 }
	 printf("\n");
}
int mian()
{

	int A[] = {5,8,9,2,4};

	int size,low,mid,high;

	size = sizeof(A)/sizeof(A[0]);

	printf("Before sorting :");
	PrintArray(A,size);


}
