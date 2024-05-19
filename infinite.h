/*
 * copyright (c) 2024 wuyuchen
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
*/

#include <iostream>

class infinite {
    public:

        template<typename T>
        bool operator>(T val) {
            return true;
        }

        template<typename T>
        bool operator<(T val) {
            return false;
        }

        template<typename T>
        bool operator>=(T val) {
            return true;
        }

        template<typename T>
        bool operator<=(T val) {
            return false;
        }

        template<typename T>
        bool operator==(T val) {
            return false;
        }

        template<typename T>
        bool operator!=(T val) {
            return true;
        }

        template<typename T>
        infinite& operator+(T val) {
            return *this;
        }

        template<typename T>
        infinite& operator-(T val) {
            return *this;
        }

        template<typename T>
        infinite& operator*(T val) {
            return *this;
        }

        template<typename T>
        infinite& operator/(T val) {
            return *this;
        }

        template<typename T>
        infinite& operator%(T val) {
            return *this;
        }

        infinite& operator++() {
            return *this;
        }

        infinite& operator--() {
            return *this;
        }

        infinite operator++(int) {
            return *this;
        }

        infinite operator--(int) {
            return *this;
        }

        infinite& operator+=(infinite val) {
            return *this;
        }

        infinite& operator-=(infinite val) {
            return *this;
        }

        infinite& operator*=(infinite val) {
            return *this;
        }

        infinite& operator/=(infinite val) {
            return *this;
        }

        infinite& operator%=(infinite val) {
            return *this;
        }


        friend std::ostream& operator<<(std::ostream& os, infinite& val) {
            os << "infinite";
            return os;
        }
};