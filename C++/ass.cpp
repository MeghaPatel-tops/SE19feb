#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

class menu{
    public: 
    string event,name;
    int guests;
    int min;
    void display(){
        
    cout<<"\n *********************  EVENT MANAGEMENT SYSTEM *********************" ;  
        
    cout<<"\nEnter Name of the Event : ";
    cin>>event;
    cin.ignore();
    
    cout<<"\nEnter Your First and Last Name : ";
    getline(cin,name);
    
    
    cout<<"\nEnter Number of Guests : ";
    cin>>guests;
    
    cout<<"\n Enter the Number of Minutes In the Event : ";
    cin>>min;
    
    
    cout<<"\n==================== EVENT ESTIMATE FOR: "<<name<<" ====================";
    }
};

class Rates: public menu{
    public:
    const double CostPerHour = 18.50;
    const double CostPerMinute = .40;
    const double CostOfDinner = 20.70;
    
    void costing(int guests, int min){
        double a = guests/20;
        double servers =  static_cast<int>(ceil(a));
        cout<<"\nNumber of Servers: "<<servers;
        
        
       double Cost1 = (min / 60) * CostPerHour;
       double Cost2 = (min % 60) * CostPerMinute;
       double CostForOneServer = Cost1 + Cost2;
        cout<<"\nCost For One Server : "<<CostForOneServer;
        
        
        double TotalFoodCost = guests * CostOfDinner;
        cout<<"\nThe Cost For Food : "<<TotalFoodCost;
        
        
        double AverageCost = TotalFoodCost / guests;
        cout<<"\nAverage Cost Per Person : "<<AverageCost;
        
        
        double TotalCost = TotalFoodCost + (CostForOneServer * servers);
        cout<<"\n\n Total Coast for the Event : "<<TotalCost;
        
        cout<<"\n Please Deposite 25\% of the Total Amount to reserve the Event.";
        double deposite = TotalCost* 0.25;
        cout<<"The Deposite needed is : "<<deposite;
        
    }
    
};

int main(){
   
   menu m1;
   m1.display();
   Rates r1;
   r1.costing(m1.guests,m1.min);
    
}
