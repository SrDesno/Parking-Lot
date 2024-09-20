#include <iostream>

//Se crea la clase "ParkingCard"
class ParkingCard{
  //Atributos de la clase "ParkingCard"
  private:
    int cardId;
    std::string personName;
  //Metodos de la clase "ParkingCard"
  public:
    ParkingCard();
    ParkingCard(int,std::string);
    int getCardId();
    void setCardId(int);
    std::string getPersonName();
    void setPersonName(std::string);
    double calculatePayment(Time,Time,double);
    int virtual calculateHoursToPay(Time,TIme);
    void virtual print();
};
