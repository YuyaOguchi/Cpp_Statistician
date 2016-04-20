//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 2, Project 3
//  1/13/2016
//  Statistician class with overloading operator
class statistician {
private:
    int size;
    double total;
    double highest;
    double lowest;
    double mean;
    double last;

public:
    statistician();
    void next_number(double);
    void dump_numbers();
    void erase();
    void sizes();
    void dump();
    void lastelement();
    void summation();
    void meanval();
    void smallestelem();
    void largestelem();
    statistician operator+(const statistician& s1);

};
