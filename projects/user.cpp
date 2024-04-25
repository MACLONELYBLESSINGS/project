# include <iostream>
using namespace std ;

int main()
{


    /* prompt the user to values to integer in range*/
    int input ; 
    cout << "ENTER AN INTEGER VALUE BETWEEN 5 AND 10 ";
    cin>>input ;
        /* reapeat the code until the condition evaluate to true */
    while (true)
    {
        if (input >= 5 && input <= 10 )
        {
            cout << "your input value " << input << "has been accepted " << endl ;
            break;
        }else 
        {   
             
              
            cout << "sorry , you entered invalid number. try again" <<endl ;
            
              
        }
    }
    return 0;
}

