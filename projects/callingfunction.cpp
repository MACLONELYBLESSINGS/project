# include <iostream>
using namespace std ;
// function declaration 
int max (int num1, int num2);
int main()
{
    // decleration of local variables 
    int a = 100;
    int b = 2000;
    int ret;

    // calling a function to return the max value 
    ret = max(a , b );
    cout << "the max value is :: " << ret << endl;
    return 0 ;


}

    // function returning the max value 
   int max (int num1,int num2)
   {
    // declaration of the variable 
    int result ;
    if (num1 > num2)
         result = num1;
         else 
           result = num2;
           return result;
   }
