#include<bits/stdc++.h>
using namespace std;
main()
{
    map<char,int> m;
    m.insert({'I',1});
    auto it = m.find('I');
    cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}