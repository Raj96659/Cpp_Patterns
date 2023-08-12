/*

  1 1 1 1
  2 2 2
  3 3
  4

*/
#include<iostream>
using namespace std;
main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}
