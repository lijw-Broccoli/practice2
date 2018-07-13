#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  Person();
  Person(const string &t_name, int t_age);
  void print();
private:
  string m_name;
  int m_age;
}
