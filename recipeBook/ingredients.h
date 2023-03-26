//
// Created by szymo on 26/03/2023.
//

#ifndef RECIPEBOOK_INGREDIENTS_H
#define RECIPEBOOK_INGREDIENTS_H


#include <string>

class ingredients
{
public:
    ingredients(double size, int type);

    ~ingredients();

    std::string toString();
    union sizeOfPortion
    {
        int cups;
        double grams;
        float milliliters;
    };

private:
    int type;
    std::string name;
    sizeOfPortion size;

friend class recipe;
};



#endif //RECIPEBOOK_INGREDIENTS_H
