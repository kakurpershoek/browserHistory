//
//  inputFile.h
//  Browser History
//
//  Created by Karen Kurpershoek on 7/17/17.
//  Copyright © 2017 Karen Kurpershoek. All rights reserved.
//

#include <fstream>
#include <iostream>
#include "browser.h"

linked_list List;

class inputFile {
public:
    inputFile(); //constructor
    void openFile(); //open input file for reading
    void newPage();
    void backButton();
    
private:
    std::ifstream in;
    std::string line;
    
};

inputFile::inputFile () {
    line = "empty";
}

void inputFile::openFile() {
    in.open("weblog_unique.txt");
    if (in.fail()) {
        std::cout << "Failed to open text" << std::endl;
        abort();
    }
}

void inputFile::newPage() {
    //fill in first 50 nodes of linked list
    for (int i = 0; i <= 50; i++) {
        while (getline(in, line)) {
            getline(in, line);
            if (in.fail()) break;
            List.add_Node(line);
        }
    }
    //after we reach 50 nodes, delete last node and insert new node to front of list
    while (getline(in, line)) {
        Node * temp;
        getline(in, line);
        if (in.fail()) break;
        for (int j = 0; j <= 50; j++) {
            temp->get_link();
        }
        free(temp);
        List.add_Node(line);
        
    }
    in.clear();

}

void inputFile::backButton() {
    //access List member function that outputs name of previous page visited
    std::cout << List.get_prev() << std::endl;
}


