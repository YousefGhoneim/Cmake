#ifndef WRITEINFILE_H
#define WRITEINFILE_H
#include <string>
class WriteInFile {
public:
    static void write(const std::string& filename, const std::string& content);
};

#endif 
