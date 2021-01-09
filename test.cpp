#include <iostream>
#include<vector>
using namespace std;

int main ()
{
   vector <int> v;
   for(int i =0;i<6;i++) v.push_back(i);
   for (auto i = v.cbegin(); i != v.cend(); ++i) 
        cout << *i << " ";
        
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.resize(10);
    cout<<v.size()<<endl;
    
    v.shrink_to_fit();
    for (auto i = v.cbegin(); i != v.cend(); ++i) 
        cout << *i << " ";

}