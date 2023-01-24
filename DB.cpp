//-----------------------------------------------------
// Code to read from fixed length records (random access file)
// Author:  Daijon Roberts
// Last updated:  Jan. 24, 2023
//-----------------------------------------------------

#include "DB.h"

DB::DB(/* args */)
{
}

DB::~DB()
{
}

bool DB::writeRecord(ofstream &Dout, const string name, const int rank, const string city, const string state, 
                     const int zip, const int employees){
    
    Dout << setw(80) << left << name
         << setw(5) << left << rank
         << setw(40) << left << city
         << setw(5) << left << state
         << setw(10) << left << zip
         << setw(15) << left << employees; 
}
