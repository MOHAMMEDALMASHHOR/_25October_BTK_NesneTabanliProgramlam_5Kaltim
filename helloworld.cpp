/* #include <iostream>
#include <vector>
#include <string>
using namespace std:
int main(){
    vector<string> msg {"Hello","C++","from","VS code","and the C++ extension!"};
    for (const string& word: msg)
    {
        cout << word << " ";
    }
    cout << endl;
} */
// Online C++ compiler to run C++ program online
/* #include <iostream>
class Vehicle{
public:
    std::string manufacturer;
    
};

int main() {
    Vehicle item1 = Vehicle();
    
    item1.manufacturer = "TOGG";
    std::cout << "Vehicle " << item1.manufacturer << std::endl;
    char c = getchar();

    return 0;
}
// Kapuslume
#include <iostream>
using std::string;
class Vehicle{
private:
    std::string manufacturer;
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
        manufacturer = value;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    char c = getchar();

    return 0;
} */

//Asiri Yukleme

// Online C++ compiler to run C++ program online
/* #include <iostream>
using std::string;
class Vehicle{
private:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    } 
    
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;
    char c = getchar();

    return 0;
}*/

//Inheritance

// Online C++ compiler to run C++ program online
/* #include <iostream>
using std::string;
class Vehicle{
private:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    std::cout<<"Vehicl: "<<car1.getManufacturer()<<std::endl;
    char c = getchar();

    return 0;
} */

//Protected (# in plantuml) to let us assign the features of the main class to the new calss that is inherting from the main class

// Online C++ compiler to run C++ program online
/* #include <iostream>
using std::string;
class Vehicle{
protected://this is it!!!!!!!!!!!!!!!!!!!!!
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
    Car(){
        std::cout<<"\nAn instance has been derived form the Car class"<<std::endl;
    }
    Car(string manufacturer, int year, string color):Car(){
        std::cout<<"\nAn instance has been derived form the Car class with 3 parameters."<<std::endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    std::cout<<"Vehicl: "<<car1.getManufacturer()<<std::endl;
    char c = getchar();

    return 0;
} */

//Using the inhertnace and the base which in cpp the same name of the main class

/* // Online C++ compiler to run C++ program online
#include <iostream>
using std::string;
class Vehicle{
protected:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
    Car(){
        std::cout<<"\nAn instance has been derived form the Car class"<<std::endl;
    }
    Car(string manufacturer, int year, string color):Vehicle(manufacturer,year,color)/*instead of that in C# we write Base(with the parameters){
        std::cout<<"\nAn instance has been derived form the Car class with 3 parameters."<<std::endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Car1 " << item2.getManufacturer() << std::endl;
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    
    Car car2 = Car("Volvo",2020,"Phantom Black");
    std::cout<<"Car2: "<<car2.getManufacturer()<<std::endl;
    char c = getchar();

    return 0;
} */

//Hierarchial hiyerarsik ALHARAMEH
// Online C++ compiler to run C++ program online
/* #include <iostream>
using std::string;
class Vehicle{
protected:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
    Car(){
        std::cout<<"\nAn instance has been derived form the Car class"<<std::endl;
    }
    Car(string manufacturer, int year, string color):Vehicle(manufacturer,year,color)/*instead of that in C# we write Base(with the parameters){
        std::cout<<"\nAn instance has been derived form the Car class with 3 parameters."<<std::endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
};
class Bus:public Vehicle{
public:
    Bus(string manufacturer,int year, string color):Vehicle(manufacturer,year,color){
        std::cout<<"An instance has been derived from Bus class with full parameters"<<std::endl;
    }
    void scheduling(){
        std::cout<<"Scheduled."<<std::endl;
    }
};
class SchoolBus :public Bus{
public:
    SchoolBus(string manufacturer,int year,string color):Bus(manufacturer,year,color){
        std::cout<<"An instance with full parameters has been derived from Schoolbus class"<<std::endl;
    }
    void getFare(){
        std::cout<<"getFar() method has been called."<<std::endl;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Car1 " << item2.getManufacturer() << std::endl; 
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    car1.openSunroof();
    
    Car car2 = Car("Volvo",2020,"Phantom Black");
    std::cout<<"Car2: "<<car2.getManufacturer()<<std::endl;
    Bus bus1 = Bus("Chovruleh",2019,"White");
    std::cout<<"Bus: "<<bus1.getManufacturer()<<std::endl;
    bus1.scheduling();
    SchoolBus schoolBus1 = SchoolBus("Chovruleh",2019,"White");
    std::cout<<"School Bus: "<<schoolBus1.getManufacturer()<<std::endl;
    schoolBus1.scheduling();
    
    std::cout<<"Scheduling method had been inherted form Bus class and has been called "<<std::endl;
    schoolBus1.getFare();
    
    char c = getchar();

    return 0;
} */

//CokBicimlilik Polymorphism
// Online C++ compiler to run C++ program online
/* #include <iostream>
using std::string;
class Vehicle{
protected:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    virtual void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    virtual void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    virtual void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
    Car(){
        std::cout<<"\nAn instance has been derived form the Car class"<<std::endl;
    }
    Car(string manufacturer, int year, string color):Vehicle(manufacturer,year,color)/*instead of that in C# we write Base(with the parameters){
        std::cout<<"\nAn instance has been derived form the Car class with 3 parameters."<<std::endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    void drive() override
    {
        std::cout<<"The Car Manufacutred By: "<<this->manufacturer<<std::endl;
    }
};
class Bus:public Vehicle{
public:
    Bus(string manufacturer,int year, string color):Vehicle(manufacturer,year,color){
        std::cout<<"An instance has been derived from Bus class with full parameters"<<std::endl;
    }
    void scheduling(){
        std::cout<<"Scheduled."<<std::endl;
    }
    void drive() override
    {
        std::cout<<"The Bus Manufactured By:"<<this->manufacturer<< " is being driven"<<std::endl;
    }
};
class SchoolBus :public Bus{
public:
    SchoolBus(string manufacturer,int year,string color):Bus(manufacturer,year,color){
        std::cout<<"An instance with full parameters has been derived from Schoolbus class"<<std::endl;
    }
    void getFare(){
        std::cout<<"getFar() method has been called."<<std::endl;
    }
    void drive() override
    {
        std::cout<<"The School Bus Manufactured By:"<<this->manufacturer<<" is being driven"std::endl;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Car1 " << item2.getManufacturer() << std::endl; 
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    car1.openSunroof();
    
    Car car2 = Car("Volvo",2020,"Phantom Black");
    std::cout<<"Car2: "<<car2.getManufacturer()<<std::endl;
    Bus bus1 = Bus("Chovruleh",2019,"White");
    std::cout<<"Bus: "<<bus1.getManufacturer()<<std::endl;
    bus1.scheduling();
    SchoolBus schoolBus1 = SchoolBus("Chovruleh",2019,"White");
    std::cout<<"School Bus: "<<schoolBus1.getManufacturer()<<std::endl;
    schoolBus1.scheduling();
    
    std::cout<<"Scheduling method had been inherted form Bus class and has been called "<<std::endl;
    schoolBus1.getFare();
    schoolBus1.stop();
    schoolBus1.drive();
    
    char c = getchar();

    return 0;
} */

//ToString() method

// Online C++ compiler to run C++ program online
#include <iostream>
using std::string;
class Vehicle{
protected:
    std::string manufacturer;
    int year;
    std::string color; 
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
       this-> manufacturer = value;
    }
    int getYear(){
        return year;
    }
    void setYear(int value){
        this->year = value;
    }
    string getColorr(){
        return color;
    }
    void setColor(string value){
        this->color = value;
    }
    virtual void start(){
        std::cout<<"Vehicle has been started."<<std::endl;
    }
    virtual void stop(){
        std::cout<<"Vehicle has been stoped"<<std::endl;
    }
    virtual void drive(){
        std::cout<<"Vehicle has beed started driving"<<std::endl;
    }
    Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle."<< std::endl;
    }
    Vehicle(string manufacturer, int year, string color):Vehicle(){
        std::cout <<"\nAn instance has been derived from Vehicle with 3 parameters.";
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    virtual string toString(){
        return "We made a polymorphism to the method toString() from the Object class";
    }
    
};
class Car : public Vehicle{
public:
    void openSunroof(){
        std::cout<<"Sunfrood has beeen opend"<<std::endl;
    }
    Car(){
        std::cout<<"\nAn instance has been derived form the Car class"<<std::endl;
    }
    Car(string manufacturer, int year, string color):Vehicle(manufacturer,year,color)/*instead of that in C# we write Base(with the parameters)*/{
        std::cout<<"\nAn instance has been derived form the Car class with 3 parameters."<<std::endl;
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
    void drive() override
    {
        std::cout<<"The Car Manufacutred By: "<<this->manufacturer<<std::endl;
    }
    string toString() override{
        return manufacturer + "-" + std::to_string(year) + "-" + color+ "\nto convert int to string we used include <string> laibary and we used to_string(int) method";
    }
};
class Bus:public Vehicle{
public:
    Bus(string manufacturer,int year, string color):Vehicle(manufacturer,year,color){
        std::cout<<"An instance has been derived from Bus class with full parameters"<<std::endl;
    }
    void scheduling(){
        std::cout<<"Scheduled."<<std::endl;
    }
    void drive() override
    {
        std::cout<<"The Bus Manufactured By:"<<this->manufacturer<< " is being driven"<<std::endl;
    }
};
class SchoolBus :public Bus{
public:
    SchoolBus(string manufacturer,int year,string color):Bus(manufacturer,year,color){
        std::cout<<"An instance with full parameters has been derived from Schoolbus class"<<std::endl;
    }
    void getFare(){
        std::cout<<"getFar() method has been called."<<std::endl;
    }
    void drive() override
    {
        std::cout<<"The School Bus Manufactured By:"<<this->manufacturer<<" is being driven"<<std::endl;
    }
};

int main() {
    Vehicle item1 = Vehicle();
    
    //item1.manufacturer = "TOGG";
    item1.setManufacturer("TOGG");
    //std::cout << "Vehicle " << item1.manufacturer << std::endl;
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    Vehicle item2 = Vehicle("Scoda",2019, "Blue");
    std::cout << "Car1 " << item2.getManufacturer() << std::endl; 
    Car car1 = Car();
    car1.setManufacturer("Toyota");
    car1.openSunroof();
    
    Car car2 = Car("Volvo",2020,"Phantom Black");
    std::cout<<"Car2: "<<car2.getManufacturer()<<std::endl;
    Bus bus1 = Bus("Chovruleh",2019,"White");
    std::cout<<"Bus: "<<bus1.getManufacturer()<<std::endl;
    bus1.scheduling();
    SchoolBus schoolBus1 = SchoolBus("Chovruleh",2019,"White");
    std::cout<<"School Bus: "<<schoolBus1.getManufacturer()<<std::endl;
    schoolBus1.scheduling();
    
    std::cout<<"Scheduling method had been inherted form Bus class and has been called "<<std::endl;
    schoolBus1.getFare();
    schoolBus1.stop();
    schoolBus1.drive();
    std::cout<<schoolBus1.toString()<<std::endl;
    car1.setColor("Yellow");
    car1.setYear(2023);
    std::cout<<car1.toString()<<std::endl;
    
    char c = getchar();

    return 0;
}