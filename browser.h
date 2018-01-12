//
//  browser.h
//  Browser History
//
//  Created by Karen Kurpershoek on 7/17/17.
//  Copyright © 2017 Karen Kurpershoek. All rights reserved.
//
#include <string>
#ifndef Node_h
#define Node_h


class Node {
    
public:
    Node(); //constructor
    void set_link(Node * next_ptr) {link = next_ptr;} //accessor
    void addNode(std::string s);
    std::string getNode();
    Node * get_link() {return link;} //mutator
    
private:
    Node * link;
    std::string NodeString;

};

Node::Node() {
    NodeString = "empty";

}

void Node::addNode(std::string s) {
    NodeString = s;
}

std::string Node::getNode() {
    return NodeString; //return data stored in node
}

class linked_list {
public:
    linked_list() {head_ptr = NULL;}
    void add_Node(std::string newData);
    std::string get_prev();
    
    
private:
    Node * head_ptr;
};

void linked_list::add_Node(std::string newData) {
    Node * newOne = new Node; //allocate space for new node
    
    newOne->addNode(newData); //add data to new node
    newOne->set_link(head_ptr); //point new node to where head_ptr points to
    head_ptr = newOne; //have head_ptr point to new node
    
}

std::string linked_list::get_prev() {
    Node * cur = head_ptr; //access private data
    cur = cur->get_link(); //set cur to be first node
    Node * prev = cur->get_link(); //set prev to be the second node, i.e. previous page accessed
    head_ptr = prev; //have head_ptr point to second node i.e. prev
    delete cur; //delete the first node
    return prev->getNode(); //return the name of the last page visited
}















#endif


