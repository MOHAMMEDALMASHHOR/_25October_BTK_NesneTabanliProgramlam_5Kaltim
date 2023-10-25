# _25October_BTK_NesneTabanliProgramlam_5Kaltim
A program to explain the expration inhertance  and Polymorphism in the OOP with C++ program
@startuml Inheritance
title Vehicle

class Vehicle{
    #manufacturer : String
    #year:int
    #color:String
    --
    +getManufacturer()
    +getYear()
    +getColor()
    --
    +setManufacturer()
    +setYear()
    +setColor()
    --
    +Vehicle()
    +Vehicle(manufacturer, year, color)
    --
    +start()
    +stop()
    +drive()
    +toString()
}

class Car {
    +openSunrootf()
}

class Truck {
    +transport()
}

class Bus {
    +scheduling()
}

class SchoolBus {
    +getFare()
}

Bus -u-|> Vehicle : <<extends>>
Truck -u-|> Vehicle : <<extends>>
Car -u-|> Vehicle : <<extends>>
SchoolBus -u-|> Bus : <<extends>>

hide empty member

@enduml
