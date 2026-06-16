#include<bits/stdc++.h>
using namespace std;
void backtracking(int n,int i)
{
    if(i>n) return;
    backtracking(n,i+1);
    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    backtracking(n,1);
}