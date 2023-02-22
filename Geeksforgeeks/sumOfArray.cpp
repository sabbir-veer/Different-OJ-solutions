//User function Template for C++

//Complete this function

int sumElement(int arr[], int n)
{
    //Your code here
    return accumulate(arr, arr + n, 0);
}