#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	int A[100],Size,Begin,Seek=0,Difference;
     float Average;
     printf("Enter the total number of Cylinders :");
     scanf("%d",&Size);
     printf("\nTotal number of Cylinder You Entered is :%d",Size);
     for(int X=1; X<=Size; X++)
     {
     	printf("\nEnter the %d Cylinder Address ",X);
     	scanf("\n%d",&A[X]);
	 }
	 printf("Enter the Adress of Header Adress :");
	 scanf("%d",&Begin);
	 A[0]=Begin;
	 printf("X\tY\tDifferenceerence\n");
	 for(int Y=0; Y<Size; Y++)
	 {
	 	Difference=abs(A[Y+1]-A[Y]);
	 	Seek+=Difference;
	 	printf("%d\t%d\t%d\n",A[Y],A[Y+1],Difference);
	 }
	 printf("Total distance travelled is &d\n :",Seek);
	 Average=Seek/Size;
	 printf("The avergae would come as %f",Average);
	 getch();
	 
 	 
}
