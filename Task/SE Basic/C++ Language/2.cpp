#include <iostream>
using namespace std;

main() 
{
    int rows;
    int i,j,k;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for (i=1;i<=rows;++i) 
	{
        
        for (j=1;j<=rows-i;++j) 
		{
            cout<<" ";
        }
        for (k=1;k<=2*i-1;++k) 
		{
            cout<<"*";
        }

        cout<<endl;
    }
}

