 #include <iostream>
 using namespace std;

int binary_s(int arr[], int start_i, int end_i, int x)
{
    if(end_i>=1)
    {
        int mid_i = (start_i+end_i) / 2;

        if(arr[mid_i]==x)
        {
            return mid_i;
        }
        else if(arr[mid_i]>x)
        {
            return binary_s(arr, start_i, mid_i-1, x);
        }
        else 
        {
            return binary_s(arr, mid_i+1, end_i, x);
        }
    }

    return -1;
}

 int main()
 {
    int sorted_arr[] = {2, 7, 10, 11, 14, 20, 24, 25, 28, 30};
    int x = 25;
    int n, i;
    n = sizeof(sorted_arr)/sizeof(sorted_arr[0]);
    i = binary_s(sorted_arr, 0, n-1, x);

    if(i == -1)
    {
        cout<<"Element is not in the given array.";
    }
    else
    {
        cout<<"Element is in index position "<<i;
    }

    return 0;
 }