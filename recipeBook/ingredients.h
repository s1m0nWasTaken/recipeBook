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
        int item;
    };

    struct Allergies
    {
        bool milk;
        bool nuts;
        bool wheat;
        bool egg;

        Allergies()
        {
            milk = 0;
            nuts = 0;
            wheat = 0;
            egg = 0;
        }
    };

    bool getAllergies(int);

    void setAllergies(int);

private:
    int type;
    std::string name;
    sizeOfPortion size;
    Allergies allergies;

    friend class recipe;
};


#endif //RECIPEBOOK_INGREDIENTS_H
