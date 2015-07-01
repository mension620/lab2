//
//  main.h
//  lab2
//
//  Created by 陳建維 on 2015/7/1.
//  Copyright (c) 2015年 陳建維. All rights reserved.
//

#ifndef lab2_main_h
#define lab2_main_h

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class BMI {
public:
    void setHeight(float x);
    void setMass(float y);
    float getBMIValue();
    string getBMICategory();
private:
    float height;
    float mass;
};


#endif
