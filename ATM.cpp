
#include <iostream>
#include <conio.h>
using namespace std;

class ATM
{
	private: 
				char enter, process;
				int  option, amountW, amountD, W[10], D[10]; 
				int  amount[10], cash_no[20], cash, cashs[10], bankBalance[10];
				
	
	public: 
			void entryProcess()
			{	
				system("cls");
				cout << "\nENTER YOUR CARD IN SIDE THE MACHINE ( PRESS ENTER'E' ) : ";	
				cin  >> enter;
					
				if (enter=='e' || enter=='E')
				{
					cout << "\nDO PROCESS ( PRESS ENTER'P' ) : ";
					cin  >> process;
					
					if (process=='p' || process=='P')
					{
						cout << "\nPROCEED...\n";
					}
					else
					{
						cout << "\nHave Wrong Side Inserted in the machine... \nAgain Insert Your Card..."; 
						cout << "\n=======================================================================";
						exit(0);
					}
					
				} 
				else
				{
					cout << "\nDoesn't Enter Card Yet...!!!";
					cout << "\n=======================================================================";
					exit(0);
				}
				getch();
			}
			
			void password()
			{
				system("cls");
				int attempts=0;
   				string username, password;
				while (attempts < 3)
  				{
        			
        			cout << "\n=======================================================================";
        			cout << "\n\n   -: USER ID :-" << endl;
        			
        			cout << "\nENTER USER NAME     : ";
        			getline( cin, username);
       				cin  >> username;
        			cout << "ENTER USER PASSWORD : ";
        			getline( cin, password);
       	 			cin  >>password;
        			if (username == "R" && password == "K")
       				{
       					cout<<"\nYou have been granted access.\n";
       					cout << "\n=======================================================================";
            			cout << "\n\n   -: WORLD BANK OF UNIVERS :-" << endl;
						cout << "\n1. OTHER                     2. CASH WITHDRAWAL\n3. DIPOSIT                   4. BALANCE INQUIRY\n5. MINI STATEMENT            6. PIN CHANGE\n";
            			break;
        			}
        			else 
        			{
            			attempts++;
            			//cout<<username <<" " <<password << "\n";
           				cout<<"\nIncorrect username or password";
            			cout<<"\nAttempts remaining: "<<3-attempts <<"\n";
            			if (3-attempts)
            			{
            				cout<<"\nTry Again.";		
						}  
						else
						{
							cout<<"\nOut of attempts, access denied.";
					 	}          			
        			}
    			}
    			getch();	
			}
			
			void chooseManu()
			{
				system("cls");
				cout << "\nSELECT YOUR OPTION : ";
				cin  >> option;
				bankBalance[0]=50000;
				switch(option)
				{
					case 1: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'OTHERS' :- \n";
							break;
					
					case 2: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'CASH WITHDRAWAL' :- \n";
							
							cout << "\nENTER AMOUNT : ";
							cin  >> amountW;
							cout << "\npress 'e'";
							cin  >> enter;
							
							if (enter=='e' || enter=='E')
							{
								if(amountW<=1000)
								{
									cout << "\nYOU ARE WITHDRAWN " << amountW << "Rs.";
									cout << "\nCollet Your Cash = " << amountW << "Rs.";
									W[1]=bankBalance[0]-amountW;
									cout << "\n\nYour Bank Balance is " << W[1] << "Rs.";
							
									cout << "\n Account no.               : 148209100000321";
									cout << "\n User Name                 : ";
									cout << "\n IFSE Code                 : SRCB0000148";
									cout << "\n Withdrawal Cash           : " << amountW;
									cout << "\n Account Balance           : " << W[1];
							
								}
								else
								{
									cout << "\nWITHDRAWAL LIMIT IS 1000 Rs. YOU CANNOT WITHDRAW MORE THAN 1000 Rs. ...!!!  ";
								}
							}
							else 
							{
								cout << "\nYOU HAVE PRESSED THE WRONG BOTTON";
							}
							
							break;
							
					case 3: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'DIPOSIT' :- \n";
							cout << "\nYOU CAN DIPOSIT CASH IN FORM OF 100, 200, AND 500 (enter no. of forms): ";
						
							bankBalance[0]=50000;

							cout << "\nENTER CASH : ";
							cin  >> cash;
			
							if (cash >= 500)
							{   
								cashs[0]=cash;
								cash_no[0] = cashs[0] / 500;
								amount[0]=cash_no[0] * 500;
								cashs[1] = cashs[0] - amount[0];
								if (cashs[1] == 0)
								{
									cout << cash_no[0] << " * 500 = " << amount[0] << endl;
									amountD= amount[0];
								}	
								else if (cashs[1] >= 200 && cashs[1] <= 500)
								{ 	
									cash_no[1] = cashs[1] / 200;
									amount[1] = cash_no[1] * 200;
									cashs[2] = cashs[1] - amount[1];
									if (cashs[2] == 0)
									{
										cout << cash_no[0] << " * 500 = " << amount[0] << endl;
										cout << cash_no[1] << " * 200 = " << amount[1] << endl;
										amountD= amount[0]+amount[1];
									}
									else if (cashs[2] >= 100 && cashs[2] <=200)
									{
										cash_no[2] = cashs[2] / 100;
										amount[2] = cash_no[2] * 100;
										cashs[3] = cashs[2] - amount[2];
										if (cashs[3] == 0)
										{
											cout << cash_no[0] << " * 500 = " << amount[0] << endl;
											cout << cash_no[1] << " * 200 = " << amount[1] << endl;
											cout << cash_no[2] << " * 100 = " << amount[2] << endl;
											amountD= amount[0]+amount[1]+amount[2];
										}
									}		
								}
							}
							else if (cash >= 200)
							{		 	
								cashs[0]=cash;
								cash_no[0] = cashs[0] / 200;
								amount[0] = cash_no[0] * 200;
								cashs[1] = cashs[0] - amount[0];
								if (cashs[1] == 0)
								{
									cout << cash_no[0] << " * 200 = " << amount[0] << endl;
									amountD= amount[0];
								}
								else if (cashs[1] >= 100 && cashs[1] <=200)
								{
									cash_no[1] = cashs[1] / 100;
									amount[1] = cash_no[1] * 100;
									cashs[2] = cashs[1] - amount[1];
									if (cashs[2] == 0)
									{
										cout << cash_no[0] << " * 200 = " << amount[0] << endl;
										cout << cash_no[1] << " * 100 = " << amount[1] << endl;
										amountD= amount[0]+amount[1];
									}
								}
							}
							else if (cash >= 100)
							{
								cashs[0]=cash;
								cash_no[0] = cashs[0] / 100;
								amount[0] = cash_no[0] * 100;
								cashs[1] = cashs[0] - amount[0];
								if (cashs[1] == 0)
								{
									cout << cash_no[0] << " * 100 = " << amount[0] << endl;
									amountD = amount[0];
								}
							}
			
							cout << "YOUR AMOUNT : " << amountD <<" Rs.";
							cout << "\n\npress 'e'";
							cin  >> enter;
							if (enter=='e' || enter=='E')
							{
								if(amountD<=10000)
								{
									cout << "\nYOU ARE DIPOSIT " << amountD << " Rs.";
									cout << "\nYou have Diposited " << amountD << " Rs. Cash in Your Bank Account" ;
									D[1]=bankBalance[0]+amountD;
									cout << "\n\nYour Current Account Balance is " << D[1] << "Rs.";
									
									cout << "\n Account no.               : 148209100000321";
									cout << "\n User Name                 : ";
									cout << "\n IFSE Code                 : SRCB0000148";
									cout << "\n Diposit Cash      	   : " << amountD;
									cout << "\n Account Balance           : " << D[1];		
								}
								else
								{
									cout << "\nDIPOSIT LIMIT IS 10000 Rs. YOU CANNOT DIPOSIT MORE THAN 10000 Rs. ...!!!  ";
								}
							}
							else 
							{
								cout << "\nYOU HAVE PRESSED THE WRONG BOTTON";
							}							
							break;
							
					case 4: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'BALANCE INQUIRY' :- \n";
							
							cout << "\n YOUR BALANCE IS " << bankBalance << " Rs";
							
							break;
					
					case 5: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'MINI STATEMENTE' :- \n";
							
							cout << "\n Account no.               : 148209100000321";
							cout << "\n User Name                 : ";
							cout << "\n IFSE Code                 : SRCB0000148";
							cout << "\n Account Balance           : " << bankBalance;
					
							break;
					
					case 6: 
							cout << "\n=======================================================================\n";
							cout << "\n -: YOU HAVE COME TO THE 'PIN CHANGE' :- \n";
							
							cout << "\nGet Permission From Sahil...*_* ";
							
							break;
						default:
									cout << "Invalid Option...!!!";	
				}
			getch();
			}
};
main()
{
	char re;
	do
	{
		ATM bank;
		bank.entryProcess();
		bank.password();
		bank.chooseManu();
		cout << "\n=======================================================================\n";
		cout << "\nAGAIN INSERT YOUR CARD(press 'R')";
		cin  >> re;	
	}
	while(re=='r' || re=='R');
}
