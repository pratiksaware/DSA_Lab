#include<iostream>
#pragma once
#include<string>
using namespace std;

class student
{
    private:
    
    int roll_num;
    string name;
    float sgpa;
    
    
    public:
    student(int ROLL_NO, string NAME, float SGPA){
        roll_num = ROLL_NO;
        name = NAME;
        sgpa = SGPA;
    }

    void display(){
        cout<<"STUDENT NAME:\t"<< name<<"\t ROLL NO:\t"<<roll_num<<"\tSGPA:\t"<<sgpa;
    }
    void bubble_sort(){
        fo
        
    }
};