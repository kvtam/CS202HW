//Kyle Tam
// Feb 18, 2017
//CS 202
//HW 2: box.cpp
#include "box.h"
#include <string>
#include <sstream>
#include <iostream>

///////////CTORS///////////////
Box::Box(){
	_width    = 1;
	_height	  =	1;
	_isFilled;
}

Box::Box(int w, int h){
	_width	  =	w;
	_height	  =	h;
	_isFilled;
}

Box::Box(int w, int h, bool fill){
	_width	  =	w;
	_height	  =	h;
	_isFilled = fill;
}

////////MEMBER FUNCTS/////////
std::string Box::type() const{
	if(_isFilled)
	return "Filled";
	
	return "Hollow";
	
}
///////ACORS/////////////
int Box::getWidth() const {
	return _width;
}

int Box::getHeight() const {
	return _height;
}
/////MTORS/////////
void Box::setWidth(int w){
	_width = w;
}

void Box::setHeight(int h){
	_height = h;
}

/////PRINTER//////////
void Box::print(std::ostringstream & os) const{

	
	if(_isFilled){ //if the box is filled
		for(int row=1; row<=_height;row++){  ///for each row print column astrix
			for(int column=1;column <= _width; column++){
				os<< "x";
			}
			os<<"\n";
		}
	}else{
		for(int row=1; row<=_height;row++){  ///for each row print column astrix
			
			for(int column=1;column <= _width; column++){
				if(row==1||column==1||column==_width||row==_height){ //if the row is first or last print all x
					os<<"x";
				}else{
					os<<" ";
				}
			}
			os<<"\n";
		}
	}


}
void Box::print() const{

	
	if(_isFilled){ //if the box is filled
		for(int row=1; row<=_height;row++){  ///for each row print column astrix
			for(int column=1;column <= _width; column++){
			std::cout<< "x";
			}
			std::cout<<"\n";
		}
	}else{
		for(int row=1; row<=_height;row++){  ///for each row print column astrix
			
			for(int column=1;column <= _width; column++){
				if(row==1||column==1||row==_height){
				std::cout<<"x";
				}else{
				std::cout<<" ";
				}
			}
			std::cout<<"\n";
		}
	}


}


