#include <iostream>

using std::string;

// using namespace std;

namespace olamide {
    int number = 2;
    string myname = "olamide";
}

namespace okikiola {
    int number= 4;
    string myname = "okikiola";
}

using namespace olamide;

int main(){

std::cout << "Hello my name is "<< myname << " and my age is :"<< number << std::endl;
}