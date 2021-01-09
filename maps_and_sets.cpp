#include<iostream>
#include<set>
#include<map>
#include<iterator>
#include<utility>


using namespace std;

int main(){
    //sets
    set<int> set_1;
    //inserting element
    set_1.insert(10);
    set_1.insert(13);
    set_1.insert(12);
    set_1.insert(16);
    set_1.insert(14);

    set<int>::iterator i=set_1.begin();
    set<int>::iterator e=set_1.end();
    cout<<*i<<" "<<*e<<endl;

    set<int> set_2(set_1.begin(),set_1.end());

    set<int>:: i2=set_2.begin();
    set<int>::iterator e2=set_2.end();
    cout<<*i2<<" "<<*e2<<endl;

    set<int> set_3;
    bool con=set_3.empty();
    cout<<con<<endl;

    auto it=set_1.begin();

    cout<<*it<<endl;
    set_1.erase(it);
    set_1.erase(12);
    auto it2=set_1.begin();
    cout<<*it2<<endl;

    //maps
    //pairr
    pair<int,int> p;
    p.first=10;
    p.second=8;
    cout<<p.first<<"="<<p.second<<endl;
    p.second=p.second+1;
    cout<<p.second<<endl;
    //maps
    map<int ,int> dup;
    dup.insert(pair<int,int>(1,2));
    dup.insert(pair<int,int>(6,1));
    dup.insert(pair<int,int>(5,1));

    for(auto mitr=dup.begin();mitr!=dup.end();++mitr){
        cout<<mitr->first<<"->"<<mitr->second<<endl;
        if(mitr->first == 5){
            mitr->second++;
        }
    }
    for(auto mitr=dup.begin();mitr!=dup.end();++mitr){
        cout<<mitr->first<<"->"<<mitr->second<<endl;

    }
    auto fitr=dup.find(5);
    cout<<fitr->second<<endl;
}
