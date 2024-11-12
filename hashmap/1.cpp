#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>mp;

    mp.insert({"anc",3});
    mp["none"]=1;
    mp["love"]=4;

    cout<<mp.at("anc")<<endl;
    cout<<mp["and"]<<endl;
    cout<<mp.at("and")<<endl;

    cout<<mp.size()<<endl;


    cout<<mp.count("love")<<endl;
    cout<<mp.count("ans")<<endl;

    // mp.erase("and");
    // cout<<mp.size()<<endl;

    // mp.clear();
    // cout<<mp.size()<<endl;


    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iterator
    map<string,int> :: iterator it=mp.begin();
    while(it!=mp.end()){
        cout<<it->first<<" "<<it->second<<endl;it++;
    }

    return 0;
}