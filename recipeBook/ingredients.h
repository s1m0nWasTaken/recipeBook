#ifndef RECIPEBOOK_INGREDIENTS_H
#define RECIPEBOOK_INGREDIENTS_H


#include <string>

class ingredients
{
public:
    ingredients(double size, int type, std::string);

    ~ingredients();

    ingredients(const ingredients &i);

    void addAmount(double amount);
    double getAmount();

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
