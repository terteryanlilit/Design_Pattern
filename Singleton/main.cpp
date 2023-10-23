#include <iostream>
#include "singleton.hpp"

int main() {
    Singleton& ins1 = Singleton::getInstance();
    Singleton& ins2 = Singleton::getInstance();
    std::cout << "Instance count: " << Singleton::count <<std::endl;
}





