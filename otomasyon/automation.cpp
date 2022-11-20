#include"oop.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>


int main(){
    int switchController{};
    std::string name,surname,clas;
    int id,gender;
    std::string name_output,surname_output,clas_output;
    int id_output,gender_output;
    School eray;
    std::ofstream file;
    do
    {
        std::cout<<"press 1 for add a member\npress 2 for delete a member\npress 3 for wiew a member"<<std::endl;
        std::cin>>switchController;
        switch (switchController)
    {
    case 1:
    std::cout<<"Pleas enter member info"<<std::endl;
    std::cin>>id>>name>>surname>>clas>>gender;
    eray.settAll(id,name,surname,clas,gender);
    eray.getAll(id_output,name_output,surname_output,clas_output,gender_output);
    file.open("file.txt");
    file<<id_output<<std::setw(10)<<name_output<<std::setw(10)<<surname_output<<std::setw(10)<<clas_output<<std::setw(10)<<gender_output<<std::endl;
    file.close();
        break;
    case 2:

        break;
    case 3:

        break;    
    default:
        break;
    }
    } while (true);
    
    
    
}