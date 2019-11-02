#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
int i,limit,total=0,x,counter=0,time_quantum=3;
int wait_time=0,turnaround_time=0,arrival_time[10],burst_time[10],temp[10];
float average_wait_time,average_turnaround_time;
cout<<"enter total number of processes:" ;
cin>>limit;
x=limit;
for(i=0;i<limit;i++)
{
    
arrival_time[i]=rand()%10;
burst_time[i]= rand()%10;
temp[i]=burst_time[i];
}
cout<<"processes id   burst time turnaround time waiting time"<<endl;
for(total=0;i=0;x!=0)
{
if(temp[i]<=time_quantum&&temp[i]>0)
{
total=total+temp[i];
temp[i]=0;
counter =1;
}
else if(temp[i]>0)
{
temp[i]=temp[i]-time_quantum;
total=total+time_quantum;
}
if(temp[i]==0&&counter==1)
{
x--;
cout<<"process["<<i+1<<"]  "<<burst_time[i]<<"  "<<total-arrival_time[i]<<"   "<<total-arrival_time[i]-burst_time[i];
wait_time=wait_time+total-arrival_time[i]-burst_time[i];
turnaround_time=turnaround_time+total-arrival_time[i];
counter=0;
}
if(i==limit-1)
 i=0;
else if(arrival_time[i+1]<=total)
 i++;
else
 i=0;
}
average_wait_time=wait_time*1.0/limit;
average_turnaround_time=turnaround_time*1.0/limit;
cout<<endl<<endl<<"average waiting time:  "<<average_wait_time;
cout<<endl<<"average turnaround time:  "<<average_turnaround_time<<endl;
return 0;
}
