//
//  myarray.cpp
//  myarray
//
//  Created by Ivan Yakovenko on 07/12/2018.
//  Copyright © 2018 Ivan Yakovenko. All rights reserved.
//

#include <iostream>
#include "myarray.hpp"
#include "myarrayPriv.hpp"

void myarray::HelloWorld(const char * s)
{
    myarrayPriv *theObj = new myarrayPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void myarrayPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

