#include<iostream>
#include<string>
class Student
{
public:
	Student(int idİnput,std::string nameİnput,int classİnput,int ageİnput,std::string genderİnput);
	~Student();

private:
	int id{};
	std::string name{};
	int clas{};
	int age{};
	std::string gender{};
};

Student::Student(int idİnput,std::string nameİnput,int classİnput,int ageİnput,std::string genderİnput):id(idİnput),name(nameİnput),clas(classİnput),age(ageİnput),gender(genderİnput)
{

}

Student::~Student()
{
}
int main() {

}