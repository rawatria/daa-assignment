#include<iostream>
using namespace std;
int Selection_sort(int *ar,int n){
int i,k=0,j,c=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(ar[j]<ar[i]){
            k=ar[i];
            ar[i]=ar[j];
            ar[j]=k;
        }
        c=c+1;
    }
}
return c;
}
int main(){
    int i,n,t,result;
    cout<<"Enter no of test cases";
    cin>>t;
    while(t--){
    cout<<"Enter size of an array";
    cin>>n;
    int *ar = new int[n];
    cout<<"Enter elements";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    result=Selection_sort(ar,n);
    for(i=0;i<n;i++){
        cout<<"Sorted array is : ";
        cout<<ar[i]<<endl;
    }
    cout<<"comparisions "<<result<<endl;
    }
}
