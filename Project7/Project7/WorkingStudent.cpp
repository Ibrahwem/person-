#include "WorkingStudent.h"

WorkingStudent::WorkingStudent(bool same_ins, string ins, int AVR, float SAL, long ID, int Age) :employee(Age,ID,SAL), Student(ins, AVR,Age,ID)
{

}
