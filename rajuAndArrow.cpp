#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= (n - i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            if (i == (n - 1) && j == (n - 1))
            {
                for (int k = 0; k < n; k++)
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
       
      
    }
     for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n-1; j >= 0; j--)
            {
                if (j <= i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                if (i == j&& i == (n-1))
                {
                    for (int k = 0; k < n; k++)
                    {
                        cout << "*";
                    }
                }
            }
            cout << endl;
        }
      return 0;
}