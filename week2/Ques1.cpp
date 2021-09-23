#include<iostream>
#include<vector>
using namespace std;

int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
 

int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
int main()
{
    int n,t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter number of elements: ";
        cin>>n;
        int ele;
        vector<int>a(n);
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++) cin>>a[i];

        cout<<"Enter element to be searched\n";
        cin>>ele;
        
        int first = (a, 0, n-1, ele, n);
        int last = (a, 0, n-1, ele , n);
        int count = last-first+1;
        if(count >= 1)cout << ele << " " << count << endl;  
        else cout<<"sequence not found" << endl;
    }
  return 0;
}
