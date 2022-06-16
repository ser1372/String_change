#include <iostream>
#include <string>
 


void handle(std::string &s) {

	char &begin = s.front();
	char &end = s.back();
	begin = ' '; end = '.';

}
 
int main() {

std::string str;

while(str.length() < 2) {

	std::cout<<"Enter string least than of 2 symbols: ";
	std::getline(std::cin, str);

}


std::cout<<"\nBefore: "<<str;
handle(str);
std::cout<<"\nAfter: "<<str;


system("pause");
}