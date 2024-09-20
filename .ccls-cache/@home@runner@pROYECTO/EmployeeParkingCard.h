#include <iostream>

//Se crea la clase "EmployeeParkingCard"
class EmployeeParkingCard{
  //Atributos de la clase "EmployeeParkingCard"
  private:
    std::string storeName;
  //Metodos de la clase "EmployeeParkingCard"
  public:
    EmployeeParkingCard();
    EmployeeParkingCard(int,std::string,std::string);
    void setStoreName(std::string);
    std::string getStoreName();
    int calculateHoursToPay(Time,Time);
    void print();
};