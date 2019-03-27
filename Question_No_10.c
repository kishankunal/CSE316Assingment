#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	 int A[100],Size,Start,Seek=0,Diff;
     float Avg;
     printf("Enter the total number of Cylinders :");
     scanf("%d",&Size);
     printf("\nTotal number of Cylinder You Entered is :%d",Size);
     for(int X=1; X<=Size; X++)
     {
     	printf("\nEnter the %d Cylinder Address ",X);
     	scanf("\n%d",&A[X]);
	 }
	 printf("Enter the Adress of Header Adress :");
	 scanf("%d",&Start);
	 A[0]=Start;
	 printf("X\tY\t\Difference\n");
	 for(int Y=0; Y<Size; Y++)
	 {
	 	Diff=abs(A[Y+1]-A[Y]);
	 	Seek+=Diff;
	 	printf("%d\t%d\t%d\n",A[Y],A[Y+1],Diff);
	 }
	 printf("Total distance travelled is &d\n :",Seek);
	 Avg=Seek/Size;
	 printf("The avergae would come as %f",Avg);
	 getch();
	 
	 
}
