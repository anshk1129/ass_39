#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>ff,ff2;
ff={10,20,30,405};
ff2={5,6,7,8,67};
ff.splice_after(ff.begin(),ff2,ff2.before_begin(),ff2.end());

for(auto i:ff){
cout<<i<<" ";
}



    return 0;
}