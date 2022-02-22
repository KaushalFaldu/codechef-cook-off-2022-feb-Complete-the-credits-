#include <iostream>

using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
	    int k;
	    cin>>k;
	    if(k>65)
	    {
	        cout<<"Overload"<<endl;
	    }
	    else if (k<35){
	         cout<<"Underload"<<endl;
	    }
	     else{
	         cout<<"Normal"<<endl;
	    }
	}
	return 0;
}