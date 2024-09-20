#include <iostream>

//Se crea la clase "Time"
class Time{
  //Atributos de la clase "Time"
  private:
    int hour, minute;
  //Metodos de la clase "Time"
  public:
    void Time();
    void Time();
    int getHour();
    void setHour(int);
    int getMinute();
    void setMinute(int);
    int elapsedTime(Time);
    bool operator>(Time);
    void print();
};