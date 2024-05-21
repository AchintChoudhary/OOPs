#include <iostream>
int main() {
char ch;
std::cout<<"Enter a character: ";
std::cin >> ch;
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
std::cout << "The entered character is an alphabet.";
if (ch >= 'a' && ch <= 'z') {
std::cout << "It is a lowercase letter.";
} else {
std::cout << "It is an uppercase letter.";
}
} else {
std::cout << "The entered character is a special character." ;
}
return 0;
}
