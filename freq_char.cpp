#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str1;
 getline(cin,str1);
unordered_map<char,int>u;
for(int i=0;str1[i];i++)
{
    if(u.find(str1[i])==u.end()){
    u.insert(make_pair(str1[i],1));}
    else{
    u[str1[i]]++;}
}
for(auto &i : u)

cout<<i.first<<" "<<i.second<<" "<<"\n";
}