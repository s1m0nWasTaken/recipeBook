//
// Created by szymo on 26/03/2023.
//

#include "ingredients.h"

ingredients::ingredients(double size, int type, std::string name) : type(type), name(name)
{
    switch(type)
    {
        case 1 : this->size.cups = size;
            break;
        case 2 : this->size.grams = size;
            break;
        case 3 : this->size.milliliters = size;
            break;
    }
}

ingredients::~ingredients()
{

}

std::string ingredients::toString() {
    std::string temp;
    temp = temp.append("Amount to add ");
    switch(type)
    {
        case 1 : temp = temp.append(std::to_string(size.cups));
            temp = temp.append(" cups");
            break;
        case 2 : temp = temp.append(std::to_string(size.grams));
            temp = temp.append(" grams");
            break;
        case 3 : temp = temp.append(std::to_string(size.milliliters));
            temp = temp.append(" milliliters");
            break;
    }

    return temp;
};

