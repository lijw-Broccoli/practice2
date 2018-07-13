//
//  student.cpp
//  practice
//
//  Created by 李经纬 on 2018/7/10.
//  Copyright © 2018年 李经纬. All rights reserved.
//

#include "student.hpp"

int Student::m_sID = 1000;

bool riseChinese(Student *t_stu1,Student *t_stu2)
{
    return t_stu1->m_chinese < t_stu2->m_chinese;
}
bool riseMath(Student *t_stu1,Student *t_stu2)
{
    return t_stu1->m_math < t_stu2->m_math;
}
bool riseEnglish(Student *t_stu1,Student *t_stu2)
{
    return t_stu1->m_english < t_stu2->m_english;
}
bool riseAllScore(Student *t_stu1,Student *t_stu2)
{
    double t_stuAllScore1 =t_stu1->m_chinese + t_stu1->m_math + t_stu1->m_english;
    double t_stuAllScore2 =t_stu2->m_chinese + t_stu2->m_math + t_stu2->m_english;
    return t_stuAllScore1 < t_stuAllScore2;
}
bool riseArvgScore(Student *t_stu1,Student *t_stu2)
{
    double t_stuAllScore1 =(t_stu1->m_chinese + t_stu1->m_math + t_stu1->m_english)/3;
    double t_stuAllScore2 =(t_stu2->m_chinese + t_stu2->m_math + t_stu2->m_english)/3;
    return t_stuAllScore1 < t_stuAllScore2;
}

bool isMale(const string &t_sex)
{
    return t_sex == "man";
}
bool isFemale(const string &t_sex)
{
    return t_sex == "woman";
}

bool isPass(double t_score)
{
    return t_score >= 60;
}
Student::Student(const string &t_name)
:m_name(t_name)
{
    m_sID++;
    m_ID = m_sID;
    
    //suijichangshengxueshengxinxi
    srand(time(NULL) * m_sID);
    
    m_chinese = rand()%100;
    m_math = rand()%100;
    m_english = rand()%100;
    
    if(rand()%2 == 1)
    {
        m_sex = "man";
    }else{
        m_sex = "woman";
    }
    
}

void Student::print()
{
    cout<<"name: "<< m_name <<" ID: "<<m_ID<<" sex: "<<m_sex<<" chinese: "<<m_chinese<<" math: "<<
    m_math<<" english: "<<m_english<<endl;
}

Count::Count(const vector<Student*> &t_vec)
{
    //kaipikongjian
    m_stuVec.resize(t_vec.size());
    //copy
    copy(t_vec.begin(),t_vec.end(),m_stuVec.begin());
    //fenliu
    vector<Student*>::iterator t_iter;
    for(t_iter=m_stuVec.begin(); t_iter!=m_stuVec.end(); t_iter++)
    {
        m_chineseVec.push_back((*t_iter)->m_chinese);
        m_mathVec.push_back((*t_iter)->m_math);
        m_englishVec.push_back((*t_iter)->m_english);
        m_allScoreVec.push_back((*t_iter)->m_chinese + (*t_iter)->m_math + (*t_iter)->m_english);
        m_avrgScoreVec.push_back(((*t_iter)->m_chinese + (*t_iter)->m_math + (*t_iter)->m_english)/3);
        m_sexVec.push_back((*t_iter)->m_sex);
        m_stuMap.insert(pair<int, Student*>((*t_iter)->m_ID, *t_iter));
    }
}
Count::~Count()
{
    m_chineseVec.clear();
    m_mathVec.clear();
    m_englishVec.clear();
    m_allScoreVec.clear();
    m_avrgScoreVec.clear();
    m_sexVec.clear();
    m_stuMap.clear();
}
void Count::sortChinese()
{
    sort(m_chineseVec.begin(), m_chineseVec.end());
    //sort(m_chineseVec.begin(), m_chineseVec.end(),riseChinese);
    vector<double>::iterator t_iter;
    for(t_iter=m_chineseVec.begin(); t_iter!=m_chineseVec.end();t_iter++)
    {
        cout<< *t_iter<<" ";
    }
    cout<<endl;
}

void Count::sortMath()
{
    sort(m_mathVec.begin(), m_mathVec.end());
    //sort(m_mathVec.begin(), m_mathVec.end(),riseMath);
    vector<double>::iterator t_iter;
    for(t_iter=m_mathVec.begin(); t_iter!=m_mathVec.end();t_iter++)
    {
        cout<< *t_iter<<" ";
    }
    cout<<endl;
}

void Count::sortEnglish()
{
    sort(m_englishVec.begin(), m_englishVec.end());
    //sort(m_englishVec.begin(), m_englishVec.end(),riseEnglish);
    vector<double>::iterator t_iter;
    for(t_iter=m_englishVec.begin(); t_iter!=m_englishVec.end();t_iter++)
    {
        cout<< *t_iter<<" ";
    }
    cout<<endl;
}
void Count::sortAllScore()
{
    sort(m_allScoreVec.begin(), m_allScoreVec.end());
    //sort(m_allScoreVec.begin(), m_allScoreVec.end(),riseAllScore);
    vector<double>::iterator t_iter;
    for(t_iter=m_allScoreVec.begin(); t_iter!=m_allScoreVec.end();t_iter++)
    {
        cout<< *t_iter<<" ";
    }
    cout<<endl;
}
void Count::sortAvrgScore()
{
    sort(m_avrgScoreVec.begin(), m_avrgScoreVec.end());
    //sort(m_avrgScoreVec.begin(), m_avrgScoreVec.end(),riseArvgScore);
    vector<double>::iterator t_iter;
    for(t_iter=m_avrgScoreVec.begin(); t_iter!=m_avrgScoreVec.end();t_iter++)
    {
        cout<< *t_iter<<" ";
    }
    cout<<endl;
}

int Count::countMale()
{
    return count_if(m_sexVec.begin(), m_sexVec.end(), isMale);
}
int Count::countFemale()
{
    return count_if(m_sexVec.begin(), m_sexVec.end(), isFemale);
}
int Count::countChinese()
{
    return count_if(m_chineseVec.begin(), m_chineseVec.end(), isPass);
}
int Count::countMath()
{
    return count_if(m_mathVec.begin(), m_mathVec.end(), isPass);
}
int Count::countEnglish()
{
    return count_if(m_englishVec.begin(), m_englishVec.end(), isPass);
}

Student* Count::getStudentInfo(int t_ID)
{
    map <int ,Student*>::iterator t_iter;
    t_iter = m_stuMap.find(t_ID);
    if(t_iter != m_stuMap.end())
    {
        return t_iter->second;
    }else
    {
        return 0;
    }
}
