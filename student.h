#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
class student
{
private:
std::string firstName;
std::string lastName;

public:
void setName(std::string, std::string);
std::string fullName();

};

#endif
