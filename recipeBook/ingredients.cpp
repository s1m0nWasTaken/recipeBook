//
// Created by szymo on 26/03/2023.
//

#include "ingredients.h"

ingredients::ingredients(double size, int type, std::string name) : type(type), name(name)
{
    addAmount(size);
}


ingredients::~ingredients()
{

}

ingredients::ingredients(const ingredients &i)
{
    type = i.type;
    name = i.name.c_str();
    switch (type)
    {
        case 1 :
            this->size.cups = i.size.cups;
            break;
        case 2 :
            this->size.grams = i.size.grams;
            break;
        case 3 :
            this->size.milliliters = i.size.milliliters;
            break;
        case 4:
            this->size.item = i.size.item;
            break;
    }

    allergies = i.allergies;
}

std::string ingredients::toString()
{
    std::string temp;
    temp = temp.append("Amount to add ");
    switch (type)
    {
        case 1 :
            temp = temp.append(std::to_string(size.cups));
            temp = temp.append(" cups");
            break;
        case 2 :
            temp = temp.append(std::to_string(size.grams));
            temp = temp.append(" grams");
            break;
        case 3 :
            temp = temp.append(std::to_string(size.milliliters));
            temp = temp.append(" milliliters");
            break;
        case 4 :
            temp = temp.append(std::to_string(size.item));
            temp = temp.append(" ");
            temp = temp.append(name);
            break;
    }

    return temp;
};

void ingredients::addAmount(double amount)
{
    switch (type)
    {
        case 1 :
            this->size.cups = amount;
            break;
        case 2 :
            this->size.grams = amount;
            break;
        case 3 :
            this->size.milliliters = amount;
            break;
        case 4 :
            this->size.item = amount;
            break;

    }
}

double ingredients::getAmount()
{
    switch (type)
    {
        case 1 :
            return (double) this->size.cups;
            break;
        case 2 :
            return (double) this->size.grams;
            break;
        case 3 :
            return (double) this->size.milliliters;
            break;
        case 4 :
            return (double) this->size.item;
            break;
    }

    return 0;
}

bool ingredients::getAllergies(int type)
{
    switch (type)
    {
        case 1:
            return allergies.milk;
        case 2:
            return allergies.nuts;
        case 3:
            return allergies.wheat;
        case 4:
            return allergies.egg;
    }

    return false;
}

void ingredients::setAllergies(int pi)
{
    switch (pi)
    {
        case 1:
            allergies.milk = true;
            break;
        case 2:
            allergies.nuts = true;
            break;
        case 3:
            allergies.wheat = true;
            break;
        case 4:
            allergies.egg = true;
            break;
    }
}


