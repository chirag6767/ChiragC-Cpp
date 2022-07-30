#include <iostream>
using namespace std;
 
class Swap 
{
    int temp, a, b;
        
		public:
     
	Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
   friend void swap(Swap&);
};
 

    void swap(Swap& a1)
    {
        cout << "\n\nBefore Swapping : " << a1.a << " " << a1.b;
 
        a1.temp = a1.b;
        a1.b = a1.b;
        a1.b = a1.temp;
        cout << "\n\nAfter Swapping : " << a1.a << " " << a1.b;
    }

int main()
{
    Swap s(10, 20);
    swap(s);
    return 0;
}