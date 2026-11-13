#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter number of memory blocks: ";
    cin >> n;
    int *block=new int[n];
    cout << "Enter memory block sizes: \n";
    for(int i=0;i<n;i++)
        cin >> block[i];

        cout << "Enter number of process: ";
        cin >> m;

        int *process=new int[m];
        int *allocation=new int[m];

    cout << "Enter process sizes: \n";
    for (int i=0;i<m;i++)
    {
        cin >> process[i];
        allocation[i]=-1;
    }

    for (int i=0;i<m;i++)
    {
        int best=-1;
        for(int j=0;j<n;j++)
        {
            if(block[j]>=process[i])
            {
                if (best==-1 || block[j] < block[best])
                    best=j;
            }
        }
        if (best!=-1)
        {
            allocation[i]=best;
            block[best]-=process[i];
        }
    }

    cout << "\nProcess No.\tProcess Size\tBlock No.\n";
    for (int i=0;i<m;i++)
    {
        cout << i+1 << "\t\t" << process[i] << "\t\t";
        if (allocation[i]!=-1)
            cout << allocation[i]+1;
        else
            cout << "Not Allocated";
        cout << endl;
    }

    delete[] block;
    delete[] process;
    delete[] allocation;

    return 0;

}