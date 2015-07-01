//
//  main.cpp
//  lab2
//
//  Created by 陳建維 on 2015/7/1.
//  Copyright (c) 2015年 陳建維. All rights reserved.
//

#include <iostream>
#include "main.h"


void BMI::setHeight(float x) {
    height = x/100;
}
void BMI::setMass(float y) {
    mass = y;
}
float BMI::getBMIValue() {
    float BMIValue = mass/(height*height);
    BMIValue = (float)((int)(BMIValue*100+0.5)*0.01);
    return BMIValue;
}
string BMI::getBMICategory() {
    if (getBMIValue() <= 0) {
        return "Unknown type";
    }
    if (getBMIValue() < 15) {
        return "Very severely underweight";
    }
    if (getBMIValue() < 16) {
        return "Severely underweight";
    }
    if (getBMIValue() < 18.5) {
        return "Underweight";
    }
    if (getBMIValue() < 25) {
        return "Normal";
    }
    if (getBMIValue() < 30) {
        return "Overweight";
    }
    if (getBMIValue() < 35) {
        return "Obese Class I (Moderately obese)";
    }
    if (getBMIValue() <40) {
        return "Obese Class II (Severely obese)";
    }
    if (getBMIValue() >= 40) {
        return "Obese Class III (Very severely obese)";
    }
    else
        return "Unknown type";
}


int main(int argc, const char * argv[]) {
    BMI data1;
    float x,y = 0;
    ifstream infile("file.in", ios::in);
    ofstream outfile("file.out", ios::out);
    while (infile >> x >> y) {
        data1.setHeight(x);
        data1.setMass(y);
        if (data1.getBMICategory() != "Unknown type") {
            outfile << data1.getBMIValue() << "\t" << data1.getBMICategory() <<endl;
        }
    }
    /*} (int i=0; i<6; i++) {
        infile >> x;
        infile >> y;
        data1.setHeight(x);
        data1.setMass(y);
        if (data1.getBMICategory() != "Unknown type") {
            outfile << data1.getBMIValue() << "\t" << data1.getBMICategory() <<endl;
        }*/
        //cout << data1.height << " " << data1.mass << endl;
        //std::cout << data1.getBMIValue() << "\t" << data1.getBMICategory() << endl;
    //}
    /*
    while (infile >> x >> y) {
        data1.setHeight(x);
        data1.setMass(y);
        outfile << data1.getBMIValue() << "\t\t\t" << data1.getBMICategory() <<endl;
    }
    */
    return 0;
}
