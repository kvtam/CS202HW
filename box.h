//Kyle Tam
// Feb 18, 2017
//CS 202
//HW 2: box.h

#ifndef FILE_BOX_H_INCLUDED
#define FILE_BOX_H_INCLUDED

#include <string>
#include <sstream>
class Box{
	public:
		//CTORS
		Box();
		Box(int w, int h);
		Box (int w, int h, bool fill);
		
		std::string	type() const;
		//ACCESSORS
		int	getWidth() const;
		int	getHeight() const;
		//MTORS
	void setWidth(int w);
	void setHeight(int h);
		//Print
	void print(std::ostringstream & os) const;
	void print() const;
		
	private:
		int _width;
		int _height;
		bool _isFilled =true;
};



#endif
