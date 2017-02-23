#include <iostream>
#include "Complex.h"
using std::cout;
using std::endl;





int main(){
	Complex c1=Complex(4,3);
	Complex c2=Complex(1,7);
	Complex c3=Complex(5);
	Complex c4=Complex(7,-6);
	Complex c5=Complex(15,20);
	Complex c6=Complex(10,0.5);
	Complex temp=Complex(15,-20);
	Complex c7 = Complex(4,4);
	

	temp*=c5;
	c5*=c5.getConjugate();

	c1=c1.getConjugate();
	c3=c3.getConjugate();
	c2/=c4;
	c6=c6.getConjugate();
	cout<<c1.getRealPart()<<" "<<c1.getImPart()<<endl;
	cout<<"real part "<<c2.getRealPart()<<" IM part "<<c2.getImPart()<<endl;
	cout<<c5.getRealPart()<<" "<<c5.getImPart()<<endl;
	cout<<c6.getRealPart()<<" "<<c6.getImPart()<<endl;
	cout<<temp.getRealPart()<<" "<<temp.getImPart()<<endl;
	cout<<c7.getAngle_Deg()<<endl;

	
	
	
	
	
	
	
	return 0;
	
}
