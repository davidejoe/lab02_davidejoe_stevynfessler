#include <iostream>
using namespace std;

int main() {
  
  int rows, columns;
  
  cout <<"Enter number of rows and columns:\n";
  cin >> rows >> columns;
  cout >> "\n";
  if((rows >= 0) && (columns >= 0)) {
    for( int a = 0; a < rows; a++){
      
      for( int b = 0; b < columns; b++)
	cout << "X.";
     
      cout << "\n";
    }

  }
    else
      cout << "Enter a positive integer for rows and columns\n";
    

    return 0;
  }
