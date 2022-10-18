#include <iostream>
using namespace std;

void mergeSort(int A[], int m, int B[], int n)
{
    int ai,bi,ci;
    ai=0;
    bi=0;
    ci=0;
    int C[50];

    while(ai<m && bi<n)
    {
        if(A[ai] < B[bi])
        {
            C[ci++] = A[ai++];
        }
        else
        {
            C[ci++] = B[bi++];
        }
    }

    while(ai<m)
    {
        C[ci++] = A[ai++];
    }

    while(bi<n)
    {
        C[ci++] = B[bi++];
    }

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n+m;i++)
    {
        cout<<C[i]<<" ";
    }
}

int main()
{
    int A[20], B[20], n, m, i;

    cout<<"Enter size of 1st array: ";
    cin>>m;
    cout<<"Enter 1st array elements in increasing order: ";
    for(i=0;i<m;i++)
    {
        cin>>A[i];
    }

    cout<<"Enter size of 2nd array: ";
    cin>>n;
    cout<<"Enter 2nd array elements in increasing order: ";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }

    mergeSort(A, m, B, n);

return 0;
}