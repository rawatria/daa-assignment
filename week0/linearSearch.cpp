#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector<int>&a, int k){
    int n = a.size(), index = -1;
    bool f = false;
    for(int i=0; i<=n; i++){
        if(a[i] == k){
            index = i;
            f = true;
        }
    }
    if(f){
        cout<<"founded at index: " << index+1 << endl;
    }
    else cout << "not founded" << endl;
    return 0;
    
}
int main(){
    int i,k,n;
    cout<<"Enter n";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter elements: ";
    for(i=0; i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value you want to search: ";
    cin>>k;
    LinearSearch(a,k);
    
}
