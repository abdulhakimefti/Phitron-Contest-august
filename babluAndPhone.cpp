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
                string y;
                int time = 0;

                cin >> y;
                int l = y[0] - 48;
                int m = y[1] - 48;
                int x = l * 10 + m;
                
                if(l==0){
                    x=0;
                }
                else if(y[2]=='0'){
                    x=100;
                }
                
        
                if (x < 60)
                {
                    time = (60 - x) + 100;
                }
                else if (x < 80)
                {
                    time = (80 - x) * 2 + 60;
                }
                else if (80 < x)
                {
                    time = (100 - x) * 3;
                }
                cout << time << " minutes" << endl;
            }
            return 0;
        }
