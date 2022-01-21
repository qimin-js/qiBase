//
// Created by qimin on 2022/1/1.
//

#ifndef TRANS_TRANS_H
#define TRANS_TRANS_H

#include <string>
#include <sstream>
std::string int_to_string(int tar1){
    std::stringstream str;
    str << tar1;
    return str.str();
}
std::string float_to_string(float tar1){
    std::stringstream str;
    str << tar1;
    return str.str();
}
std::string double_to_string(double tar1){
    std::stringstream str;
    str << tar1;
    return str.str();
}
std::string char_to_string(char *tar1){
    std::stringstream str;
    str << tar1;
    return str.str();
}
const char * string_to_char(std::string tar1){
    return tar1.c_str();
}
int string_to_int(std::string &tar){
    int jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}
int string_to_int(char *tar){
    int jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}
float string_to_float(std::string &tar){
    float jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}
float string_to_float(char *tar){
    float jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}
double string_to_double(std::string &tar){
    double jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}
double string_to_double(char *tar){
    double jk;
    std::stringstream str(tar);
    str >> jk;
    return jk;
}

#endif //TRANS_TRANS_H
