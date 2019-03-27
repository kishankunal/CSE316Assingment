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


