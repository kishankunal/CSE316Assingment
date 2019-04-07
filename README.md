# CSE316Assingment
Assingmnet 2019 Cse 316

Name-Kishan Kunal            ||         Section -K17SJ             ||             Registration Number-11712595

Course Instructor-Shivali Chopra

Github url:-github.com/kishankunal/CSE316Assingment

Question N0-10

Write a C program to solve the following problem:

Suppose that a disk drive has 5 ,000 cylinders, numbered 0 to 4999. The drive is currently serving a request at cylinder 143 , and the previous request was at cylinder 125. The queue of pending requests, in FIFO Order, is: 86 , 1470, 913 , 1774, 948, 1509, 1022, 175 0, 130 Starting from the current head position, what is the total distance (in cylinders) that the disk arm moves to satisfy all the pending requests for each of the SCAN disk-scheduling algorithms?


Solution : First come, first served (FCFS) is an operating system process scheduling algorithm

and a network routing management mechanism that automatically executes queued requests and processes by the order of their arrival. With first come, first served, what comes first is handled first; the next request in line will be executed once the one before it is complete.

FCFS provides an efficient, simple and error-free process scheduling algorithm that saves valuable CPU resources. It uses non-preemptive scheduling in which a process is automatically queued and processing occurs according to an incoming request or process order. FCFS derives its concept from real-life customer service.

Let's take a look at how FCFS process scheduling works. Suppose there are three processes in a

queue: P1, P2 and P3. P1 is placed in the processing register with a waiting time of zero seconds and 10 seconds for complete processing. The next process, P2 , must wait 10 seconds and is placed in the processing cycle until P1 is processed. Assuming that P2 will take 15 seconds to complete, the final process, P3, must wait 25 seconds to be processed. FCFS may not be the fastest process scheduling algorithm, as it does not check for priorities associated with processes. These priorities may depend on the processes' individual execution times.


Question no-17. Design a scheduling program to implements a Queue with two levels:

Level 1 : Fixed priority preemptive Scheduling

Level 2: Round Robin Scheduling

For a Fixed priority preemptive Scheduling (Queue1), the Priority 0 is highest priority. If one process P1 is scheduled and running, another process P2 with higher priority comes. The New process (high priority) process P2 preempts currently running process P1 and process P1 will go to second level queue. Time for which process will strictly execute must be considered in the multiples of 2. All the processes in second level queue will complete their execution according to round robin scheduling.
Consider: 1. Queue 2 will be processed after Queue 1 becomes empty.

solution:

This is a scheduling program to implement a Queue with two levels:
Level 1 : Fixed priority preemptive Scheduling.
Level 2 : Round Robin Scheduling
For a Fixed priority pre-emptive scheduling if one process P1 is scheduled and running and another process P2 with higher priority comes. The New process with high priority process P2 preempts currently running process P1 and process P1 will go to second level queue. Time for which process will strictly execute must be considered in the multiples of 2.
All the processes in second level queue will complete their execution according to round robin scheduling.
In this program Queue 2 will be processed after Queue 1 becomes empty and Priority of Queue 2 has lower priority than in Queue 1.

Algorithm:

In this problem algorithm for round robin scheduling and multilevel queue scheduling is used.
Algorithm for round robin scheduling:
1- Create an array Rem_Bt[] to keep track of remaining
   burst time of processes. This array is initially a 
   copy of Bt[] (burst times array)
2- Create another array Wt[] to store waiting times
   of processes. Initialize this array as 0.
3- Initialize time : t = 0
4- Keep traversing the all processes while all processes
   are not done. Do following for i'th process if it is
   not done yet.
a-	If Rem_Bt[i] > quantum
(i)  t = t + quantum
       (ii) Bt_Rem[i] -= quantum;
    c- Else // Last cycle for this process
       (i)  t = t + Bt_Rem[i];
       (ii) Wt[i] = t - bt[i]
       (ii) Bt_Rem[i] = 0; // This process is over
       
       
Algorithm For Multilevel Queue:
1.	When a process starts executing then it first enters queue 1.
2.	In queue 1 process executes for 4 unit and if it completes in this 4 unit or it gives CPU for I/O operation in this 4 unit than the priority of this process does not change and if it again comes in the ready queue than it again starts its execution in Queue 1.
3.	If a process in queue 1 does not complete in 4 unit then its priority gets reduced and it shifted to queue 2.
4.	Above points 2 and 3 are also true for queue 2 processes but the time quantum is 8 unit.In a general case if a process does not complete in a time quantum than it is shifted to the lower priority queue.
5.	In the last queue, processes are scheduled in FCFS manner.
6.	A process in lower priority queue can only execute only when higher priority queues are empty.
7.	A process running in the lower priority queue is interrupted by a process arriving in the higher priority queue.

Complexity:  O(n3)

Boundary Conditions:
•	Level 1 : Fixed priority preemptive Scheduling
•	Level 2 : Round Robin Scheduling
•	Consider: 1. Queue 2 will be processed after Queue 1 becomes empty.
•	Consider 2. Priority of Queue 2 has lower priority than in Queue 1.


