/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int count_suvo = 0;
        int count_suvojit = 0;

        auto itr = 0;
        auto itr1 = 0;
        while(itr<s.length()){
            itr = s.find("SUVO", itr);
            if(itr<s.length()){
                count_suvo++;
                itr += 4;
            }
        }

        while(itr1<s.length()){
            itr1 =s.find("SUVOJIT", itr1);
            if(itr1<s.length()){
                count_suvojit++;
                itr1 += 7;
            }
        }
        cout<<"SUVO = "<<count_suvo - count_suvojit<<", "<<"SUVOJIT = "<<count_suvojit<<endl;

    }
}


