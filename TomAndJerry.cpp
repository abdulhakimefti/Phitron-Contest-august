
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
        string s;
        cin >> s;
        int sz = s.size();
        int count = 0;
        int sys = 1;
        int sys2 =0;
        int n=0;
        for (int j = 0; j <= sz; j++)
        {   
     

            if (s[j] == '1'&&sys2==0)
            {
               if(sys==1){
                 count++;
               }
               n=1;
               
            }
            else if(n==0&&s[j]=='0'){
                sys=1;
            }
            else if(sys==0&&s[j]=='0'){
                sys2=0;
                sys=1;
            }
            else{
                sys=0;
                sys2=1;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}
