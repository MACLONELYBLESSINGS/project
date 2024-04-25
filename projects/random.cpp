#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
       srand(time(0));
    
   for(int i = 0; i<=11; i++){

    }
    int daysUntilExpiration = rand()%12;
    
         
         // The statement  will concatenate since there no \n || endl
          if(daysUntilExpiration <=5){
            cout<<"Your subscription expires in value of";
             cout<<" daysUntilExpirationdaysRenew now and save 10%\n";


          }
           else if(daysUntilExpiration==1){
            cout<<" Your subscription expires within a day";
             cout<<"Renew now and save 20%! \n";


        
           }
           else if(daysUntilExpiration==0){
            cout<<" Your subscription has expired.\n";
           }
            
             else if(daysUntilExpiration <=10){
                cout<<" Your subscription will expire soon. Renew now!\n";
             }
             else 
              cout<<"You have an active subscription.\n";



    
    return 0;
}