#include "student.h"
#include <string>
void student::setName(std::string first, std::string last)
{
firstName = first;
lastName = last;

}

std::string student::fullName()
{
std::string fullname;
std::string str = "";
str.append(firstName).append(" ").append(lastName);
fullname = str;
return fullname;
}


