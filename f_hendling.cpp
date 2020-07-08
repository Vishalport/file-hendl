//============================================================================
// Name        : f_hendling.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<fstream>
#include <iostream>
using namespace std;

int main() {

	      // creat a file hendaling .

	ofstream Nfile;

	    // opning the file hear ..

	Nfile.open("vishal.h");

   string name;
   int age ;


   cout << "  enter name  : " ;
   getline (cin , name);

   cout << " enter age  :" ;
   cin >> age ;
       // write onythin in file heanding

    cout << " h!! \n\n";
    cout << " my name is" << name << endl ;
    cout << " i am " << age <<" year old ";

       // closing the file name .
    Nfile.close();





    // part 2nd
    // using the headra filr ( visha.h)


    string str;
    ifstream user
    user.open("vishal.h");
     cout << " \nREADING THE HEADR FILE ( VISHAL.H )\n\n" ;



     while(!user.eof()) {
    	 getline(user , str );

     cout << str << endl;

     }
     user.close();

	return 0;
}


