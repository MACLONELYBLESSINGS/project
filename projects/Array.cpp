#include <iostream>
using namespace std;

int main ()
{
// lets define our two dimension aray 
    int a[5][2] =  { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};


        // lest innitialise elements in an array 
        for (int i = 0 ; i < 5; i++ )
            for (int j = 0 ; j < 2; j++)
            {
                    cout << "a[" << i << "][" << j << "]:";
                    cout << a[i][j] <<endl;
            }
            return 0;

}
