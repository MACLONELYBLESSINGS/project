#include<iostream>
#include<cmath>

using namespace std;

/* declaring functions */
double Square(double side);
double Triangle(double base, double height);
double Rectangle( double length , double width);





int main(){
    int select;
     double base, height, length, side, width;
    cout<<" please select the area shape you want to calculate"<<endl;
     cout<<" 1." <<" Square"<<endl;
     cout<<" 2." <<" Rectangle"<<endl;
     cout<<" 3." <<" Triangle"<<endl;
     cout<<" 4" <<"  Quit the program"<<endl;
     /* checking if the input is invalid*/
     

     // prompt the user to select which shape to calculate;
     cout<< " Enter selection :"<<endl;
     cin>>select;

     while(select <  1 || select > 3){
          cout<<" The input is invalid : please enter between number 1  to 3 "<<endl;
          cout<< " Enter  valid input between (1-3)\n";
          cin>>select;

     }

      /* condition to be excuted given is true*/
      if(select ==1){
          cout<<" enter side to calculate square:? ";
          cin>>side;
          cout<<" The Area of the Square is : "<<Square( side)<<endl;

      }
          
          else if(select ==2){
              cout<<" enter side to calculate  Rectangle :? ";
              cin>>length>>width;
              cout<<" The  Area of triangle is  :"<<Rectangle(length, width)<<endl;

                 

          }
             else if(select==3){
                 cout<<" enter the base to calculate Triangle "<<endl;
                 cin>>base>>height ;               
        
                 cout<<" The Area of Triangle  :" <<Triangle( base, height) <<endl;
             }
             else {
                cout<<" The input    was invalid"<<endl;


             }
             return 0;
      }
        double Square(double side){
            int result;
             result= side  * side;
             return result;

        }
        double Triangle(double base, double height){
            int results;
            results = 0.5 * base * height;
            return results;
        }
        double Rectangle( double length , double width){
            int rectangle;
            rectangle = length * width;
            return rectangle;

        }


        
      
    
    
