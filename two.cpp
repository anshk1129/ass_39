#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl,fl2,fl3;
fl.assign({10,20,30});
fl2.assign(5,10);
fl3.assign(fl2.begin(),fl2.end());
for(auto i:fl){
    cout<<i<<" ";
}
cout<<endl;
for(auto i:fl2){
    cout<<i<<" ";
}
cout<<endl;
for(auto i:fl3){
    cout<<i<<" ";
}
cout<<endl;
    return 0;
}