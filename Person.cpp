//
//  Person.cpp
//  Assignment 3
//
//  Created by Mohamed Mansour on 25/03/2023.
//
#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"

using namespace std;

Person::Person() {}

//default constructor of Person

Person::Person(string name, int id, int age)
    : name(name), id(id), age(age) {}

//Parametarized constructor of Person
Person::~Person() {}

void Person::setName(string name) {
    this->name = name;
}

void Person::setID(int id) {
    this->id = id;
}

void Person::setAge(int age) {
    this->age = age;
}

//Setters definitions

string Person::getName() const {
    return name;
}

int Person::getID() const {
    return id;
}

int Person::getAge() const {
    return age;
}
//getters definitions
