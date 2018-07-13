#include <iostream>
#include <string>
#include "test.h"
using namespace std;
Person::person()
{
   m_name = "jim";
   m_age = 20;
   cout<<"Person()"<<endl;
}
Person::person(const string &t_name,int t_age)
  :m_name(t_name),m_age(t_age)
  {
    cout<<"person(...)"<<endl;
  }
void Person::print()
{
  cout<<"name: "<< m_name<<" age: "<<m_age<<endl;
}
string Person::getName()
{
   return m_name;
}
int Person::getAge()
{
   return m_age;
}
int main()
{
  cout<<"hell world!"<<endl;
  return 0;
}
