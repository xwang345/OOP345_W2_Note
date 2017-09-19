//
// Created by zhi on 2017-09-19.
//

#ifndef OOP345_WEEK2_NOTE_DSTRING_H
#define OOP345_WEEK2_NOTE_DSTRING_H

#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;
namespace sict {

    enum class member {
        ASCII,
        WIDE,
        UTF16,
        UTF32
    };

    class DString {
        const StrType strType;
        char *cStr;
        wchar16_t *c16str;
        wchar32_t* wchar32;
        char32_t char_32;

        void setASCIIstring(const char *){};

        void setWIDEstring(const wchar_t *){};

    public:
        DString(const void* pStr, StrType type){};

        ~DString(){};
    };
}

#endif //OOP345_WEEK2_NOTE_DSTRING_H
