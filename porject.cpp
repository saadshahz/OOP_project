#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class vehicle
{
private:
  int mileage;
  int price;

public:
  vehicle()
  {
    mileage = 0;
    price = 0;
  }
  vehicle(int mil, int pri)
  {
    mileage = mil;
    price = pri;
  }
  void display()
  {
    cout << "Mileage : " << mileage << endl;
    cout << "Price : " << price << endl;
  }
};
class car : public vehicle
{
private:
  float cost;
  float warranty;
  int capacity;
  string fuelType;

public:
  car()
  {
    cost = 0;
    warranty = 0;
    capacity = 0;
    fuelType = "";
  }
  car(int mil, int pri, float cost, float war, int cap, string typ) : vehicle(mil, pri)
  {
    cost = cost;
    warranty = war;
    capacity = cap;
    fuelType = typ;
  }
  void display()
  {
    vehicle::display();
    cout << "Cost : " << cost << endl;
    cout << "Warranty : " << warranty << endl;
    cout << "Seating Capacity : " << capacity << endl;
    cout << "Fuel Type : " << fuelType << endl;
  }
};
class bike : public vehicle
{
private:
  int no_of_cylinder;
  int no_of_gear;
  string cooling_type;
  string wheel_type;
  float tank_size;

public:
  bike(int mil, int pri, int cyl, int gear, string cool_type, string wheel, float tank) : vehicle(mil, pri)
  {
    no_of_cylinder = cyl;
    no_of_gear = gear;
    cooling_type = cool_type;
    wheel_type = wheel;
    tank_size = tank;
  }
  void display()
  {
    vehicle::display();
    cout << "No of Cylinder : " << no_of_cylinder << endl;
    cout << "No of Gear : " << no_of_gear << endl;
    cout << "Cooling type : " << cooling_type << endl;
    cout << "Wheel Type : " << wheel_type << endl;
    cout << "Tank Size : " << tank_size << endl;
  }
};
class Honda : public bike
{
private:
  string make_type;

public:
  Honda(string make, int mil, int pri, int cyl, int gear, string cool_type, string wheel, float tank) : bike(mil, pri, cyl, gear, cool_type, wheel, tank)
  {
    make_type = make;
  };
  void display()
  {
    bike::display();
    cout << "Make type : " << make_type << endl;
  }
};
class Yamaha : public bike
{
private:
  string make_type;

public:
  Yamaha(string make, int mil, int pri, int cyl, int gear, string cool_type, string wheel, float tank) : bike(mil, pri, cyl, gear, cool_type, wheel, tank)
  {
    make_type = make;
  };
  void display()
  {
    bike::display();
    cout << "Make type : " << make_type << endl;
  }
};

class Audi : public car
{
private:
  string model;

public:
  Audi()
  {
    model = "";
  }
  Audi(string mod, int mil, int pri, float cost, float war, int cap, string typ) : car(mil, pri, cost, war, cap, typ)
  {
    model = mod;
  }
  void display()
  {
    car::display();
    cout << "Model Type" << model << endl;
  }
};
class Ford : public car
{
private:
  string model;

public:
  Ford()
  {
    model = "";
  }
  Ford(string mod, int mil, int pri, float cost, float war, int cap, string typ) : car(mil, pri, cost, war, cap, typ)
  {
    model = mod;
  }
  void display()
  {
    car::display();
    cout << "Model Type" << model << endl;
  }
};
void car_data_get()
{
  string modle_name;
  int mileage;
  int price;
  float cost;
  int warranty;
  int capacity;
  int fuelType;

  cout << "Enter the model of Car : " << modle_name << endl;
  cout << "Enter the Mileage of Car : " << mileage << endl;
  cout << "Enter the Price of Car : " << price << endl;
  cout << "Enter the Own Cost of Car : " << cost << endl;
  cout << "Enter the Warranty of Car : " << warranty << endl;
  cout << "Enter the capacity of Car : " << capacity << endl;
  cout << "Enter the fuel Type of Car : " << fuelType << endl;
}
int main()
{
  
  return 0;
}