#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl={1,3,2},fl2={8,5,4};
fl.merge(fl2);
for(auto i:fl){
cout<<i<<" ";
}


return 0;
}