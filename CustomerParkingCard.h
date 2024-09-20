#include <iostream>

//Se crea la clase "CustomerParkingCard"
class CustomerParkingCard{
  //Atributos de la clase "CustomerParkingCard"
  private:
  //Metodos de la clase "CustomerParkingCard"
  public:
    CustomerParkingCard();
    CustomerParkingCard(int,std::string);
    int calculateHoursToPay(Time,Time);
    void print();
};