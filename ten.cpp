#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl,fl3;
fl.assign({10,20,30});
fl3.assign(fl.begin(),fl.end());
for(auto i:fl){
    cout<<i<<" ";
}
cout<<endl;
for(auto i:fl3){
    cout<<i<<" ";
}
cout<<endl;
    return 0;
}