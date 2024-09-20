#include <iostream>

//Se crea la clase "ParkingRegister"
class ParkingRegister{
  //Atributos de la clase "ParkingRegister"
  private:
    int cardId;
    Time entryTime;
  //Metodos de la clase "ParkingRegister"
  public:
    ParkingRegister();
    ParkingRegister(int, Time);
    int getCardId();
    void setCardId();
    Time getEntryTime();
    void setEntryTime(Time);
    void print();
};