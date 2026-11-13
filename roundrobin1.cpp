#include <iostream>
using namespace std;

int main() {
    int n, tq;
    int bt[20], rt[20], wt[20], tat[20];
    int time = 0, remain;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter burst time of each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i];
    }

    cout << "Enter time quantum: ";
    cin >> tq;

    remain = n;

    while (remain > 0) {
        bool executed = false;

        for (int i = 0; i < n; i++) {
            if (rt[i] > 0) {
                executed = true;

                if (rt[i] > tq) {
                    time += tq;
                    rt[i] -= tq;
                } else {
                    time += rt[i];
                    tat[i] = time;
                    wt[i] = tat[i] - bt[i];
                    rt[i] = 0;
                    remain--;
                }
            }
        }

        if (!executed)
            break;
    }

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    float totalWT = 0, totalTAT = 0;

    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;

        totalWT += wt[i];
        totalTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << totalWT / n;
    cout << "\nAverage Turnaround Time = " << totalTAT / n;

    return 0;
}