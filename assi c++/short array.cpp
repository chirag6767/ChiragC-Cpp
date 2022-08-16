#include<iostream>
using namespace std;

template <class A>

class array
{
	public:
		A arr[10],n,a,b,c;
		void display()
	{
	
			cout<<"Enter Size Of Array : ";
			cin>>n;
		
		
		for(a=0; a<n; a++)
		{
			cout<<"Enter Elements ["<<a<<"] ";
			cin>>arr[a];
	    }
	    
		    for(a=0;a<n;a++)
		    {
			    for(b=a+1;b<n;b++)
			    {
				     if(arr[a] > arr[b])
				     {
					    c=arr[a];
					    arr[a]=arr[b];
					    arr[b]=c;
				     }
		  	    }
		  	    cout<<"\nSort Elements Is "<<arr[a]<<endl;
		    }
		 
    }
	
};

int main()
{
	array <int>m;
	m.display();
	return 0;
}
