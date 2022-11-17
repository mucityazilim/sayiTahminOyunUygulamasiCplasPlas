#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {
	
	srand(time(0)) ; 
	int tutulan, tahmin, hak=5; 
	string devammi; 
	
	while( true )
	{
		tutulan = rand() %11 ; 
		
		
		while( true  ) 
		{
			if( hak<=0 ) 
			{
				cout<<"Maleseif bilemediniz... sayimiz : "<< tutulan << endl; 
				break; 
			}
			cout<<"Tahmininiz : "; cin>>tahmin; 
			
			if( tahmin == tutulan  ) 
			{
				cout<<"Tebrikler bildiniz "<< endl; 
				break; 
			}
			else if( tahmin < tutulan  ) 
			cout<<"Tahmininizi buyultiniz..."<< endl; 
			else 
			cout<<"Tahmininizi kucultunuz..."<< endl; 
			
			hak--; 
			
		}
		
		cout<<"Devam etmek istermisiniz : [E/H] : "; cin>>devammi; 
		if( devammi== "e" || devammi=="E"  ) 
		{
			hak= 5; 
			system("cls") ;  			
		}
		else 
		{
			cout<<"Oyunu bitirdiniz..."<< endl; 
			break; 
		}
 		
	}
	
	

  
}
