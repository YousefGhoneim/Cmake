#include "WriteInFile.h"
#include <fstream>
#include <string>
void WriteInFile::write(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    file << content;
    file.close();
}
