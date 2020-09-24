//
// Created by VarMoon on 24.09.2020.
//

#ifndef CALCULATORREINFORED_NUMBERCORE_H
#define CALCULATORREINFORED_NUMBERCORE_H

#include <string>



class NumberCore {
private:
    std::string value;

    bool sign = false;

    bool floating = false;

    int floating_pos = 0;

public:

    std::string getValue() const {
        return this->value;
    }

    void setValue(const std::string &value) {
        NumberCore::value = value;
    }

    bool isSign() const {
        return sign;
    }

    void setSign(bool sign) {
        NumberCore::sign = sign;
    }

    bool isFloating() const {
        return floating;
    }

    void setFloating(bool floating) {
        NumberCore::floating = floating;
    }

    int getFloatingPos() const {
        return floating_pos;
    }

    void setFloatingPos(int floating_pos) {
        NumberCore::floating_pos = floating_pos;
    }

    long size() {
        return this->value.size();
    }

    bool isNegative() const {
        return sign;
    }

    bool isPositive() const {
        return !sign;
    }

};


#endif //CALCULATORREINFORED_NUMBERCORE_H
