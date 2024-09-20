#include <iostream>

//Se crea la clase "SupplierParkingCard"
class SupplierParkingCard{
  //Atributos de la clase "SupplierParkingCard"
  private:
    std::string company;
  //Metodos de la clase "SupplierParkingCard"
  public:
    SupplierParkingCard();
    SupplierParkingCard(int,std::string,std::string);
    std::string getCompany();
    void setCompany();
    int calculateHoursToPay(Time,Time);
    void print();
};