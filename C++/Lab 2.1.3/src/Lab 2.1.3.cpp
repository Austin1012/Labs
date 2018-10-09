//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int sys;
  float m, ft, in;

  cout << "Which system would you like to input? (1 for imperial and 0 for metric):";
  cin >> sys;

  	  if (sys == 1){
  		  cout << "Feet: ";
  			cin >> ft;
  		  cout << "Inches: ";
  		  	cin >> in;
  		  	  if (in >= 12){
  		  		  cout << "Please try to use the lowest measurement possible, 12 inches is 1 foot.";
  		  	  }
  		  m = (ft * 0.3048) + (in * 0.0254);
  		  cout <<  m << "m" << endl;
  	  }
  	  else if(sys == 0){
  		  cout << "Meters: ";
  			cin >> m;
  			ft = m * 3.28084;
  			in = (ft - (int) ft) * 12;
  			ft = (int) ft;

  		  cout << ft <<  "'" << in << '"' ;

  	  }
  	  else{
  		  cout << "Please input 1 or 0";
  	  }



	return 0;
}
