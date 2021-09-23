#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no of test cases: ";
    cin>>t;
    while(t--){
    int c = 0;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter elements of an array: ";
    vector<int>ar(n);
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<n;k++){
                if(ar[i]+ar[j]==ar[k]){
                    cout << i+1 << "," << j << "," << k <<endl;
                    c=1;
                }
            }
        }
    }
    if(c==0){
        cout<<"no sequence found"<<endl;
    }
    }
}
