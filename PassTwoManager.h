#ifndef ASSEMBLER_PASSTWOMANAGER_H
#define ASSEMBLER_PASSTWOMANAGER_H

#include <iostream>
#include <vector>
#include "PrimaryData.h"

using namespace std;

class PassTwoManager {

private:
    vector<string> objectCode;
public:
    vector<string> generateObjectCode(PrimaryData primaryData);
};


#endif