#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n ;
    cin >> n;
   int temp = n ;
   int rev = 0 ;
    while(n)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<rev<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<rev<<endl;
        cout<<"NO"<<endl;
    }

    return 0;
}
