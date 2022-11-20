#include<iostream>
#include<string>
class School
{
private:
int id;
std::string name;
std::string surname;
std::string clas;
int gender;
public:
void settAll(int id_input,std::string name_input,std::string surname_input,std::string clas_input,int gender_input){
    id=id_input;
    name=name_input;
    surname=surname_input;
    clas=clas_input;
    gender=gender_input;
}
void getAll(int &id_output,std::string &name_output,std::string &surname_output,std::string &clas_output,int &gender_output){
    id_output=id;
    name_output=name;
    surname_output=surname;
    clas_output=clas;
    gender_output=gender;
}


};

