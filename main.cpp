#include <iostream>
#include "DString.h"

using namespace std;

int main(){
    DString aString("Some string!!", StrType::ASCII);
    DString aWideString(L"Area: π x r²", strType::WIDE);
    return 0;
}