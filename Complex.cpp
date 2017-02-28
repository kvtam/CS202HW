//Kyle Tam
// Feb 21, 2017
//CS 202 
//LAB 5 Complex Class
//Complex.cpp

#include "Complex.h"
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#define PI 3.14159265


/////////CTORS////////////
Complex::Complex(){
	_real=0;
	_imaginary=0;
}

Complex::Complex(double realValue){
	_real=realValue;
	_imaginary=0;
}

Complex::Complex(double realValue, double imValue){
	_real=realValue;
	_imaginary=imValue;
}
///////ACORS////////////
double Complex::getRealPart() const{
	return _real;
}

double Complex::getImPart() const{
	return _imaginary;
}

double Complex::getMagnitude() const{
	return std::sqrt(std::pow(_real,2)*std::pow(_imaginary,2));
}
Complex Complex::getConjugate(){
	
	return {_real,-_imaginary};
}


double Complex::getAngle_Deg() const{
	return (180/PI)*(atan2(_imaginary,_real));
}
double Complex::getAngle_Rads() const{
	return (atan2(_imaginary,_real));
}
/////MTORS/////////
void Complex::setImPart(const double & imValue){
	_imaginary=imValue;
}

void Complex::setRealPart(const double & realValue){
	_real=realValue;
}
void Complex::setComplex(const double & realValue, const double & imValue){
	_real = realValue;
	_imaginary= imValue;
}

////// UNINARY OPERATORS/////////
Complex& Complex::operator+=(const Complex & c){
	this->_real+=c.getRealPart();
	this->_imaginary+=c.getImPart();
	return *this;
}

Complex& Complex::operator-=(const Complex & c){
	this->_real-=c.getRealPart();
	this->_imaginary-=c.getImPart();
	return *this;
}

Complex& Complex::operator*=(const Complex & c){
	double temp= this->_real;
	this->_real=(this->_real*c.getRealPart())-(this->_imaginary*c.getImPart());
	this->_imaginary=(temp*c.getImPart())+(this->_imaginary*c.getRealPart());
	return *this;
}

Complex& Complex::operator/=( Complex  c){
	Complex temp = c;
	(*this) *=c.getConjugate();
	temp*=c.getConjugate();
	this->_real=this->_real/(temp.getRealPart());
	this->_imaginary=this->_imaginary/(temp.getRealPart());
	return *this;
}
	
////BINARY 
Complex& Complex::operator*(const Complex& c ){
	return (*this)*=c;
}
Complex& Complex::operator+(const Complex& c ){
	return (*this)+=c;
}
Complex& Complex::operator-(const Complex& c ){
	return (*this)-=c;
}
Complex& Complex::operator/(const Complex& c ){
	return (*this)/=c;
}
///////Extraction
std::string Complex::toString(){
	std::string temp= "";
	temp+= std::to_string(_real);
	if(_imaginary>0){
		temp+=" + "+std::to_string(_imaginary)+"i";
	}else if(_imaginary <0){
		temp+=" - "+std::to_string(_imaginary)+"i";
	}
	return temp;	
}

std::ostream& operator<<( std::ostream & os,  Complex &c){
	
	
	if(c.getImPart()>0)
	return os<<c.getRealPart()<<" + "<<c.getImPart()<<"i";
	if(c.getImPart()<0)
	return os<<c.getRealPart()<<" - "<<c.getImPart()<<"i";
	
	return  os<<c.getRealPart();
}
