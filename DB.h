//-----------------------------------------------------
// Code to read from fixed length records (random access file)
// Author:  Daijon Roberts
// Last updated:  Jan. 24, 2023
//-----------------------------------------------------

#include <iostream>
#include <fstream>
using namespace std;

class DB
{
private:
    // constant variable
    int record_size;

    // instance variables
    // num unsorted files at bottom
    int num_overflow;
    // int sorted files 
    int num_records;
    // file ptr for open file
    fstream data_file_ptr;

    bool writeRecord(ofstream &Dout, const string name, const int rank, const string city, const string state, 
                     const int zip, const int employees);

public:
    DB(/* args */);
    ~DB();
};
