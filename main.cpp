//
//  main.cpp
//  Browser History
//
//  Created by Karen Kurpershoek on 7/17/17.
//  Copyright © 2017 Karen Kurpershoek. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "browser.h"
#include "inputFile.h"

using namespace std;

int main () {
    inputFile weblog;
    linked_list mylist;
    
    weblog.openFile(); //open file for reading
    weblog.newPage(); //insert 50 most recent visited pages

    
    weblog.backButton(); //output last page visited
    weblog.backButton(); //output second to last page visited
    
    
}
