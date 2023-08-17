#include "Print.h"
#include "WriteInFile.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Invalid number of arguments.\n";
        return 1;
    }

    std::string option = argv[1];

    if (option == "-c") {
        Print::printHelloWorld();
    } else if (option == "-f") {
        WriteInFile::write("helloWorld.txt", "helloWorld");
        std::cout << "File created: helloWorld.txt\n";
    } else {
        std::cout << "Invalid option.\n";
    }

    return 0;
}
