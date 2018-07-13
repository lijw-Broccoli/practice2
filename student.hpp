//
//  student.hpp
//  practice
//
//  Created by 李经纬 on 2018/7/10.
//  Copyright © 2018年 李经纬. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include <map>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Student
{
public:
    Student(const string &t_name);
    ~Student()
    {
        cout<<"~Student"<<endl;
    }
    void print();
public:
    string m_name;
    int m_ID;
    string m_sex;
    double m_chinese;
    double m_math;
    double m_english;
    static int m_sID;
    
};
class Count
{
public:
    Count(){}
    Count (const vector <Student*> &t_vec);
    ~Count();
    void sortChinese();
    void sortMath();
    void sortEnglish();
    void sortAllScore();
    void sortAvrgScore();
    
    int countMale();
    int countFemale();
    int countChinese();
    int countMath();
    int countEnglish();
    
    Student* getStudentInfo(int t_ID);
    
    vector<Student*>::iterator m_iter;
    
    vector <Student *> m_stuVec;
private:
    
    vector<string> m_sexVec;
    vector<double> m_chineseVec;
    vector<double> m_mathVec;
    vector<double> m_englishVec;
    vector<double> m_allScoreVec;
    vector<double> m_avrgScoreVec;
    
    map<int,Student*> m_stuMap;
    
};

#endif /* student_hpp */
