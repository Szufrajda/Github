#include <iostream>
#include <string>
auto pytanie(std::string tekst)->int
{
int n;    
std::cout<<tekst<<"\n";
std::cin>>n;
return n;
}
auto main()->int
	{
	int a; 
	int b=1;
	int i=1;
 	a=pytanie("Podaj liczbę której silnie chcesz policzyć: ");
	while(i<=a){ 
	b*=i;
    	i++;
	}	
std::cout<<"Silnia liczby "<<a<<" wynosi: "<<b;	
		return 0;
}
