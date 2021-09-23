#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>& a,int k){
    int n = a.size();
    int low=0, high = n-1;
    while(low <= high){
        int mid=(high+low)/2;
        if(a[mid] == k)
            return mid;
        else if(a[mid] < k)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int t;
    cout<<"test case";
    cin >> t;
    while(t--){
        int n;
        cout<<"enter n";
        cin>>n;
        vector<int>a(n);
        cout<<"enter elements";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int key;
        cout<<"enter key: ";
        cin >> key;
        int idx = BinarySearch(a, key);
        if(idx == -1){
            cout<<"not present"<<endl;
        }
        else{
            cout<<"found at: "<<idx + 1<<endl;
        }
    }
}
