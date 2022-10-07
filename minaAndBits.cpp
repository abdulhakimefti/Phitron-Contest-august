#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
       
        int j=1;
        while(j<=n){
             j = j*2+1;
             cout<<j<<" ";
            count++;
        }
        cout<<endl;
        cout<<count<<endl;
    }
    return 0;
}
