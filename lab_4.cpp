#include <iostream>
#include <string>
#include <sstream>
using namespace std; 


  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
   std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
 
 // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
int num1, num2, num3;
 std::cout << "Enter all three number" << std::endl;
 std::cin >> num1 >> num2 >> num3;





  // Multiply the three integers
int result = num1*num2*num3;




  // Output the result of the multiplication
std::cout << "sum = "<< result << std::endl; 


  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
string mystr;
cout << "What's your name?";
getline (cin,mystr);
cout << "How old are you?";
getline (cin,mystr); 
cout << "what school do you go to?";
getline (cin,mystr); 
cout << "huzama" << endl;
cout << "21" << endl;
cout << "St lawrence" << endl; 













  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

std::string myNumber = "1234"; // Convert this string to an integer 

string mystr1 ("1234"); 
int myint; 
stringstream(mystr1) >> myint;
cout << myint;

  
  std::cout << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}