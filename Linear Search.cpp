#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr= new int[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
        if(!(arr[i]^k))
        {
            cout<<i<<endl;return 0;
        }
    return 0;
}
