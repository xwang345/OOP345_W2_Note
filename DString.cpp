#include <iostream>
#include <cstring>
#include "DString.h"

using namespace std;

namespace sict{

    DString::DString(const void* pStr, StrType type): m_strType(type) { // in
        switch(m_strType) {
            case StrType::ASCII:
                //TODO wirte sth
                this -> setASCIIstring(static_cast cStr);
                break;
            case StrType::WIDE:
                //TODO wirte sth
                this -> setWIDEstring(static_cast pStr);
                break;
            default:
                break;
        }
        DString::~DString() {
            cout << "this is Dstring()" << endl;
        };

        DString::setASCIIstring(const char* pStr) {
            assert(m_strType == StrType::ASCII);
            int size = strlen(pStr);
            this -> m_theString.cstr new char[size +1];
            strcpy(this -> m_theString.cStr, pStr);
        }
        DString::setWIDEstring(const wchar_t* pStr) {
            assert(m_strType == StrType::WIDE);
            int size = wcslen(pStr);
            this -> m_theString.wcstr new rwchar_t[size +1];
            wcscpy(this -> m_theString.cStr, pStr);
        }

        DString::DString(const DString& other): m_strType(other.m_strType) {
            cout << this << "This is copy constructor. " << endl;
        }

       DString::DString(const DString&& other): m_strType(other.m_strType) {
            cout << this << "This is copy constructor. " << endl;
            this -> m_theString.cstr = other.m_theString.cstr;
            other.m_theString.cstr= nullptr;
        }
}