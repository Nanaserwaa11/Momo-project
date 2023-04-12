#include<iostream>

using namespace std;

int main()

{
int defaultpin=0000 ;
int attempt=0;
int balance=1000;
int number,option, pin,new_pin,selection;
float amount;
string ref;
main:
cout<<"Main menu"<<endl;
cout<<"1.Transfer money"<<endl;
cout<<"2.Check account balance"<<endl;
cout<<"3.Reset pin"<<endl;
cout<<"0.Exit"<<endl;
cin>>selection;

if(selection==1)
  {
	
     cout<<"Enter receipient number"<<endl;
     cin>>number;
 
     cout<<"Re-enter number"<<endl;
     cin>>number;
     jump:
     cout<<"Enter amount to transfer"<<endl;
     cin>>amount;
 
     if(amount>balance||amount<1)
      {
         cout<<"Invalid amount"<<endl;
         goto jump;
        }
 

      cout<<"Enter reference"<<endl;
     cin>>ref;
     do{
  	    cout<<"Enter your pin"<<endl;
         cin>>pin;
         attempt++;
   
         if(pin==defaultpin)
	       {
             cout<<"You have successfully sent "<<amount<<" to "<<number<<" with reference "<<ref<<endl;
             cout<<"Your current balance is "<<balance-amount<<endl;
             cout<<"Thanks for working with us !!!"<<endl;
            }
        else
	      {
	         cout<<"Incorrect pin. Please try again"<<endl;
	        }
       }
	  while(pin != defaultpin && attempt >=2);
    if(attempt =3)//{cout<<"max";}
  ;}
 else if(selection==2)
  {
     do{
		 cout<<"Please enter your PIN: "<<endl;
	     cin>> pin;
		 attempt++;
		 if (pin != defaultpin) 
		   {
			 cout<<"Incorrect PIN. Please try again" <<endl;
		    }
		 else if (pin== defaultpin)
		  {
	         cout<<"Your balance is "<<balance<<endl;	
		    }
   	    }
		    while (pin != defaultpin && attempt <=3);
        	if(attempt>3)
	       {
		     cout<<"Maximum attempts reached."; 
		     cout<<"Exiting Program"<<endl;
    	    }
    	   switch(pin){
	    	break;
    	}
    }
   else if(selection==3)
  {  
 	cout<<" Do You Want To Change Your Pin  "<<endl;
	 cout<<"1.Yes\n2.No\n "<<endl;
	 cin>>option;
 	if(option==1)
	  {
	     cout<<"Enter New Pin" <<endl;
		 cin>>new_pin;
	 	 pin==new_pin;
		 cout<<"Your new pin is "<<new_pin<<endl;
		 cout<<"\n\n\n"<<endl;
		 //system("pause");
		 goto main;  
	    }
    }
    
	
    
	

   return 0 ;
}

