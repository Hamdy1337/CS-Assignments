//Made by Mohamed Mansour 900222990 on 26/3/2023

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
person::person(){// we initialize using the default constructor the protected variable of the class
  name = "";
  id =0;
  age = 0;}

string person::get_name(){
  return name;}

//getter for name

int person::get_id(){
  return id;}

//getter for id

int person::get_age(){
  return age;}

//getter for age

void person::set_name(string x){
  name = x;}

//setter for name

void person::set_id(int x){
  id = x;}

//setter for id

void person::set_age(int x){
  age = x;}

//setter for age


