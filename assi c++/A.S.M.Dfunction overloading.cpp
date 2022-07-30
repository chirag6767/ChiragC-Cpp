#include<iostream>
using namespace std;

class Arithmetic 
{
      public:
    
    double add(double n1, double n2) 
    {
       return n1+n2;
    }

    double subtract(double n1, double n2) 
    {
        return n1-n2;
    }

    double multiply(double n1, double n2) 
    {
        return n1*n2;
    }

    double divide(double n1, double n2) 
    {
        return n1/n2;
    }
};

int main()
{
 
  double num1, num2;
  Arithmetic ar;

  cout << "Enter two Numbers :: ";
  cin >> num1 >> num2;
  
  cout << "\nAddition = "<< ar.add(num1, num2) << endl;

  cout << "\nSubtraction = "<< ar.subtract(num1, num2) << endl;
  
  cout << "\nMultiplication = "<< ar.multiply(num1, num2) << endl;

  cout << "\nDivision = "<< ar.divide(num1, num2) << endl;

  return 0;
}