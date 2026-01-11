#include <iostream>
#include "my_lib.h"
#include "config.h"


int main(){
    MyFunction();
    std::cout << "Hello World!" << std::endl;
    std::cout << "Project name: " << PROJECT_NAME << std::endl;
    std::cout << "Project version: " << PROJECT_VERSION << std::endl;

    return 0;
}
