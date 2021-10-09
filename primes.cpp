#include <bits/stdc++.h>
using namespace std;
void fun() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main() {    
fun();
int n;
cin>>n;
int i,j;
for(i=1;i<n;i++)
{
    int c=0;
for(j=1;j<=i;j++)
{
    if(i%j==0)
        c++;
}
if(c==2)
cout<<i<<endl;
}


    
   
    return 0;
}
