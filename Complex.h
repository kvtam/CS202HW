//Kyle Tam
// Feb 21, 2017
//CS 202 
//LAB 5 Complex Class
//Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	public:
		////CTORS////
		Complex();
		Complex(double realValue);
		Complex(double realValue, double imValue);
		////ACORS////
		double getRealPart() const;
		double getImPart() const;
		double getMagnitude() const; 
		Complex getConjugate(); 
		double getAngle_Deg() const;
		double getAngle_Rads() const;
		////MTORS////
		void setRealPart(const double  &realValue);
		void setImPart(const double  &imValue);
		void setComplex(const double & realValue, const double & imValue);
		///Binary Operators////
		Complex& operator+(const Complex & c);
		Complex& operator-(const Complex & c);
		Complex& operator*(const Complex & c);
		Complex& operator/(const Complex & c);
		//Unairy Operators////
		Complex& operator+=(const Complex & c);
		Complex& operator-=(const Complex & c);
		Complex& operator*=(const Complex & c);
		Complex& operator/=( Complex  c);
		////Insertion/////
		Complex& operator<<(const Complex & c);
		///Comparison////
		bool operator==(const Complex & c);
		bool operator!=(const Complex & c);
		
	private:
		double _real;
		double _imaginary;
		
};
#endif
