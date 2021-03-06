
#include <sstream>
#include <algorithm>
#include "HexaConverter.h"

int HexaConverter::hexToDecimal(string hexValue) {
    int decimalValue;
    stringstream ss;
    ss  << hexValue;
    ss >> hex >> decimalValue;

    return decimalValue;
}

string HexaConverter::decimalToHex(int decimalValue) {
    stringstream ss;
    ss << hex << decimalValue;
    string res ( ss.str() );
    transform(res.begin(), res.end(), res.begin(), ::toupper);
    return res;
}

string HexaConverter::stringToHex(string str) {
    string hex = "";
    for (int i = 0; i < str.size(); i++) {
        hex += decimalToHex(str[i]);
    }
    return hex;
}