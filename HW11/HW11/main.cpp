//
//  main.cpp
//  HW11
//
//  Created by Li M on 15/12/1.
//  Copyright (c) 2015年 Li M. All rights reserved.
//

#include "HWtree.h"
int main()
{
    double b[29]={0.00269567,
        0.00794675,
        0.010632,
        0.0127742,
        0.0150438,
        0.0171296,
        0.0188702,
        0.0201839,
        0.0211545,
        0.0219062,
        0.0225339,
        0.0230561,
        0.0234782,
        0.0238058,
        0.0240447,
        0.0242003,
        0.0242782,
        0.0242841,
        0.0242236,
        0.0241021,
        0.0239255,
        0.0236991,
        0.0234287,
        0.0231198,
        0.022778,
        0.0224089,
        0.0220182,
        0.0216113,
        0.0211939,};
    HWtree test(29,29,0.2,1,b);
    test.buildtree();
    test.buildHWtree();
    test.print_Tree();
}



