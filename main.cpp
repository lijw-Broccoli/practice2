//
//  main.cpp
//  practice
//
//  Created by 李经纬 on 2018/6/20.
//  Copyright © 2018年 李经纬. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <fstream>
#include "student.hpp"

using namespace std;

#define NUM 20

int main(int argc, const char * argv[])
{
   /* string t_name[NUM] = {"jace","jim","jack","jame","jhon",
                          "bace","bim","back","bame","bhon",
                          "nace","nim","nack","name","nhon",
                          "mace","mim","mack","mame","mhon"};
    
    vector<Student*> t_stuVec;
    for(int i=0; i<NUM;i++)
    {
        Student *t_student = new Student(t_name[i]);
        t_stuVec.push_back(t_student);
    }
    
    for(int i= 0; i<NUM; i++)
    {
        t_stuVec[i]->print();
        cout<<endl;
    }
    
    Count t_count(t_stuVec);
    
    cout<<"number of man is : "<<t_count.countMale()<<endl;
    cout<<"number of woman is : "<<t_count.countFemale()<<endl;
    
    cout<<"number of chinese score that is bigger than 60 is : "<< t_count.countChinese()<<endl;
    cout<<"number of math score that is bigger than 60 is : "<< t_count.countMath()<<endl;
    cout<<"number of english score that is bigger than 60 is : "<< t_count.countEnglish()<<endl;
    
    
    t_count.sortChinese();
    t_count.sortMath();
    t_count.sortEnglish();
    t_count.sortAllScore();
    t_count.sortAvrgScore();
    
    int t_ID;
    cin>>t_ID;
    if(t_count.getStudentInfo(t_ID)!=NULL)
    {
        (t_count.getStudentInfo(t_ID))->print();
    }else
    {
        cout<<"empty"<<endl;
    }
    
    
    for (int i=0; i<NUM; i++)
    {
        delete t_stuVec[i];
        t_stuVec[i] = NULL;
    }
    t_stuVec.clear();*/
//    int sum = 0;
////    for (int val = -100 ; val<=100; ++val)
////    {
////       // cout<<val<<endl;
////        sum += val;
////    }
//    int value;
//    while (cin >> value) {
//        sum += value;
//    }
//    cout<< sum <<endl;
    int currVal = 0, val = 0;
 
        if (cin>>currVal){
            int cnt = 1;
            while (cin>>val) {
                if (currVal == val)
                {
                    ++cnt;
                }else{
                    cout<< currVal <<"occurs "<<cnt<<" times"<<endl;
                    currVal = val;
                    cnt = 1;
                }
            }
            cout<< currVal <<"occurs "<<cnt<<" times"<<endl;
        }
    
    return 0;
}
