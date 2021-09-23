#include<iostream>
#include<vector>
using namespace std;
int search_pairs(vector<int>& ar, int k){
    int temp = 0, c=0;
    int n = ar.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            temp= ar[i]-ar[j];
            if(temp<0){
                temp=(-1)*temp;
            }
            if(temp==k){
                c=c+1;
            }
            temp=0;
        }        
    }
    return c;
}
int main(){
    int t;
    cout<<"Enter no of test cases: ";
    cin>>t;
    while(t--){
        int n;
        int key;
        cout<<"Enter no of elements: ";
        cin>>n; 
        vector<int>ar(n);
        cout<<"Enter elements in the array: ";
        for(int i=0;i<n;i++){
            cin>>ar[i]; 
        }
        cout<<"Enter the key: ";
        cin>>key; 
        int result=search_pairs(ar,key);
        cout << result << endl;

    }
}
