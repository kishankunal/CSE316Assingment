#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct process
{
    int Procees_number;
    int Arrrival_Time, Waiting_Time, TurnTime, Priority, BurstTimeCopy,BurstTime;
}Queue1[10],Queue2[10];
int main(void)
{
	struct process temp;
    int i,time=0,t1,t2,bu_t=0,largest,totalProcess,count=0,k,pf2=0,totalProcess2,n,pos,j,flag=0,y;
    float wait_time=0,turnaround_time= 0,average_waiting_time,average_turnaround_time;
    printf("\n Enter Total Number of Processes:\t");
    scanf("%d", &totalProcess);
    n=totalProcess;
    for(i=0;i<totalProcess;i++)
    {
    	printf("\nEnter Process name:-");
    	//fflush(stdin);//to flush the buffer
        scanf("%d",&Queue1[i].Procees_number);
        printf("\nEnter Details For processor %d:\n",Queue1[i].Procees_number);
        printf("Enter Arrival Time:-");
        scanf("%d",&Queue1[i].Arrrival_Time);
        printf("Enter Burst Time:-");
        scanf("%d",&Queue1[i].BurstTime);
        Queue1[i].BurstTimeCopy=Queue1[i].BurstTime;
        printf("Enter Priority:\t");
        scanf("%d",&Queue1[i].Priority);
    }
    printf("\nEnter Time Quantum for Fixed Priority queue:-");
    scanf("%d",&t1);
    printf("\nEnter Time Quantum for Round Robin queue:-");
    scanf("%d",&t2);
    printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
    for(i=0;i<totalProcess;i++)
    {
        pos=i;
        for(j=i+1;j<totalProcess;j++)
        {
            if(Queue1[j].Arrrival_Time<Queue1[pos].Arrrival_Time)
                pos=j;
        }
        temp=Queue1[i];
        Queue1[i]=Queue1[pos];
        Queue1[pos]=temp;
    }
    time=Queue1[0].Arrrival_Time;
    for(i=0;totalProcess!=0;i++)
    {
    	while(count!=t1)
    	{
    		count++;
    		if(Queue1[i].Arrrival_Time<=time)
    		{
    			for(j=i+1;j<totalProcess;j++)
    			{
    				if(Queue1[j].Arrrival_Time==time && Queue1[j].Priority<Queue1[i].Priority)//pr<
    				{
    					Queue2[pf2]=Queue1[i];
						pf2++;
    					for(k=i; k<totalProcess-1;k++)
    						Queue1[k]=Queue1[k+1];
    					totalProcess--;
						count=0;
    					i=j-1;
    					j--;
					}
				}
			}
			time++;
			Queue1[i].BurstTime--;
			if(Queue1[i].BurstTime==0)
			{
				Queue1[i].TurnTime=time-Queue1[i].Arrrival_Time;
				Queue1[i].Waiting_Time=Queue1[i].TurnTime-Queue1[i].BurstTimeCopy;
				printf("%d\t|\t%d\t|\t%d\n",Queue1[i].Procees_number,Queue1[i].TurnTime,Queue1[i].Waiting_Time);
				wait_time+=time-Queue1[i].Waiting_Time; 
    			turnaround_time+=time-Queue1[i].TurnTime;
    			for(k=i;k<totalProcess-1;k++)
    				Queue1[k]=Queue1[k+1];i--;
    			totalProcess--;
				count=t1;break;
			}
		}
		count=0;
		if(Queue1[i].BurstTime!=0)
		{
			Queue2[pf2]=Queue1[i];
			pf2++;
			for(k=i;k<totalProcess-1;k++)
    			Queue1[k]=Queue1[k+1];
    		totalProcess--;
		}
			if(i==totalProcess-1)
				i=-1;
	}
	
	totalProcess2=pf2;
	for(count=0;totalProcess2!=0;) 
	{ 
		if(Queue2[count].BurstTime<=t2&&Queue2[count].BurstTime>0) 
    	{ 
    		time+=Queue2[count].BurstTime; 
    		Queue2[count].BurstTime=0; 
    		flag=1; 
    	} 
    	else if(Queue2[count].BurstTime>0) 
    	{ 
    		Queue2[count].BurstTime-=t2; 
    		time+=t2; 
    	} 
    	if(Queue2[count].BurstTime==0&&flag==1) 
    	{ 
    		totalProcess2--; 
    		Queue2[count].TurnTime=time-Queue2[count].Arrrival_Time;
			Queue2[count].Waiting_Time=Queue2[count].TurnTime-Queue2[count].BurstTimeCopy; 
			printf("%d\t|\t%d\t|\t%d\n",Queue2[count].Procees_number,Queue2[count].TurnTime,Queue2[count].Waiting_Time); 
    		turnaround_time+=time-Queue2[count].Arrrival_Time; 
    		wait_time+=time-Queue2[count].Arrrival_Time-Queue2[count].BurstTimeCopy;
    		for(k=count; k<totalProcess2;k++)
    			Queue2[k]=Queue2[k+1];count--;
    		flag=0; 
    	} 
    	if(count==totalProcess2-1) 
      		count=0; 
    	else 
    		count++; 
    }
    printf("\n Average Waiting Time= %f\n", wait_time/n); 
    printf("Avg Turnaround Time = %f" ,turnaround_time/n);   
}
