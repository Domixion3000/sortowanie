#include <iostream>
#include <fstream>
using namespace std;
int tab[10000];
int main()
{
    ifstream in;
    in.open("in.txt");
    ofstream out;
    out.open("out.txt");
    int number;
    while(in>>number)
    {
        tab[number]++;
    }
    for(auto i=100000; i>=0; i--)
    {
        while(tab[i]--)
        out<<i<<endl;

    }



    /*int a, x=0;

    while(cin>>a)
    {
        tab[a]++;

        if(a>x)
        {
            x=a;
        }

    }
    for (int i=0; i<x+1; i++)
    {
        while(tab[i]--)
        {
            cout<<i<<" ";
        }

    }*/
    return 0;
}
