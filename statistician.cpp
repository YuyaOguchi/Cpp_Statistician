//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 2, Project 3
//  1/13/2016
//  Statistician class with overloading operator
#include <iostream>
#include "statistician.h"
using namespace std;

statistician::statistician() {
    size = 0;
    total = 0;
    highest = 0;
    lowest = 0;
    mean = 0;
    last = 0;
}

statistician statistician::operator+(const statistician& s1){
    statistician temp;
    temp.size = size + s1.size;
    temp.total = total + s1.total;
    if (highest < s1.highest){
        temp.highest = s1.highest;
    }
    if (lowest < s1.lowest){
        temp.lowest = s1.lowest;
    }
    temp.mean = total/size;
    temp.last = s1.last;
    return temp;
}

void statistician::next_number(double x) {
    size ++;
    total = total + x;
    if (highest < x){
        highest = x;
    }
    if (lowest > x){
        lowest = x;
    }
    mean = total/size;
    last = x;
}

void statistician::sizes(){
    cout << "size of set is " << size << endl;
}

void statistician::lastelement(){
    cout << "last element is " << last << endl;
}

void statistician::summation(){
    cout << "sum of set is " << total << endl;
}

void statistician::meanval(){
    cout << "Mean value is " << mean << endl;
}

void statistician::smallestelem(){
    cout << "Smallest element is " << lowest << endl;
}

void statistician::largestelem(){
    cout << "Largest element is " << highest << endl;
}

int main()
{
   statistician s;
   s.next_number(1.1);
   s.next_number(-2.4);
   s.next_number(.8);

   statistician s1;
   s1.next_number(1.5);
   s1.next_number(-2.7);
   s1.next_number(.1);

   s = s+s1;

   s.sizes();
   s.lastelement();
   s.summation();
   s.meanval();
   s.smallestelem();
   s.largestelem();
}
