#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
     srand(time(0));
     int daysUntilExpiration;
    
          for (int i =0; i<=11; i++){

          

          }
            daysUntilExpiration  = rand()%12;
    
            
    switch (daysUntilExpiration)
    {

    case 1:
          cout<<"Your subscription expires in value of";
          cout<<" daysUntilExpirationdaysRenew now and save 10%\n";
        
        break;
        case 2:
             cout<<"Your subscription expires in value of";
              cout<<" daysUntilExpirationdaysRenew now and save 10%\n";
         break;
         case 3:
               cout<<"Your subscription expires in value of";
                cout<<" daysUntilExpirationdaysRenew now and save 10%\n";
            break;
          case 4:
                  cout<<"Your subscription expires in value of";
                  cout<<" daysUntilExpirationdaysRenew now and save 10%\n";
            break;
            case 5:
                  cout<<"Your subscription expires in value of";
                  cout<<" daysUntilExpirationdaysRenew now and save 10%\n";
            break;

            case 6:
                 cout<<" Your subscription will expire soon. Renew now!\n";
            break;
            case 7:
                 cout<<" Your subscription will expire soon. Renew now!\n";
                 break;
            case 8:
                   cout<<" Your subscription will expire soon. Renew now!\n";
                   break;
            case 9:
                   cout<<" Your subscription will expire soon. Renew now!\n";
                   break;
           case 10: 
                    cout<<" : Your subscription will expire soon. Renew now! \n";
                    break;
         case 11:
                  cout<<" You have an active subscription.\n";
                  break;

    default:
                 cout<<" Your subscription has expired.\n";
        break;
    
    
 return 0;   
}


}