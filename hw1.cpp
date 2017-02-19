//hw1.cpp
//Kyle Tam
//Feb 7, 2017
//cpp file for hw1
#include "hw1.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using std::string;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::cout;
using std::cin;
using std::endl;
using std::getline;



int getIdFromFile(string fileName, istringstream &is,ostringstream &os ){
	
	ifstream input;
	input.open(fileName,ifstream::in);
	
		if(!input)
		return -1;
		
	string line;
	string getName;
	string name;
		while(getline(input,line)){
			
			istringstream lineStream(line);
			is>>name;
	//	cout<<"name wanted: "<<name<<endl;
			int getNumber;
			getline(lineStream,getName,' ');
	//	cout<<"name got: "<<getName<<endl;
				if(getName==name){
					//getline(lineStream,getNumber);
					lineStream>>getNumber;
		//cout<<"number got: "<<getNumber<<endl;
					os<<getNumber<<"\n";
					
					break;
				}
				
			//check eof
		//	if(input.eof())
		//	break;
			
			
				
			
			
			
		}
		if(getName!= name){
			os<<"error"<<"\n";
		}
	return 0;
}

void numberChase(string fileName, ostringstream &os){
	
	ifstream input(fileName, std::ifstream::binary);
	//input.open(fileName,std::ifstream::binary);
	  int a=0;
//cout<<fileName << endl;
		while(1==1){
					
			input.read(reinterpret_cast<char *>(&a), sizeof(int));
			
			
			//cout<< "Next Hop: " << a<<endl;
			os<<a<<"\n";
			
				if(a<0){
				break;
				}
			
			input.seekg(a*sizeof(int));
		//	cout<<"tellg says moo"<<input.tellg()<<endl;
		}
}
