   #ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
public:

    std::string getName() const;
    void setName(const std::string &newName);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    double getAverage() const;
    void setAverage(double newAverage);

private:
    std::string name;
    int studentNumber = 0;
    double average = 0;
};

#endif /* STUDENT_H */