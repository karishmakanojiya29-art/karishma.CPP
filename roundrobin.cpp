#include <iostream>
using namespace std;

int main(){
    int n, tq;
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter Burst Time for each process:\n ";
    for(int i=0; i<n; i++)
    {
        cout << "Process " << i+1 << ": ";
        cin >> bt[i];
        rem[i]=bt[i];
        wt[i]=0;

    }

    cout << "Enter Time Quantam: ";
    cin >> tq;

    int time=0;
    bool done;

    do{
        done=true;
        for(int i=0; i<n; i++)
        {
            if(rem[i]>0)
            {
                done=false;
                if(rem[i]>tq)
                {
                    time=time+tq;
                    rem[i]=rem[i]-tq;
                }
                else
                {
                    time=time+rem[i];
                    wt[i]=time - bt[i];
                    rem[i]=0;
                }
            }
        }
    }while(!done);

    for(int i=0; i<n; i++)
    {
        tat[i]=bt[i]+wt[i];
    }

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for(int i=0; i<n; i++)
    {
        cout << "p" << i+1 << "\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

    return 0;
}