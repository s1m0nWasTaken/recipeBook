#define POLISH 1
#define ITALIAN 2
#define UKRAINIAN 3
#define RUSSIAN 4

#include <iostream>
#include "recipe.h"
#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"

/*
 * Overloading the "+" operator
 */
recipe *recipe::operator+(ingredients newIngredient)
{
    addIngredient(newIngredient);
    return this;
}


void recipe::addImage(std::string string)
{
    Image = string;
}

const std::string &recipe::getImage() const
{
    return Image;
}

void recipe::setImage(const std::string &image)
{
    Image = image;
}

const std::vector<ingredients> &recipe::getListIngredients() const
{
    return listIngredients;
}

void recipe::setListIngredients(const std::vector<ingredients> &listIngredients)
{
    recipe::listIngredients = listIngredients;
}


void recipe::removeImage()
{
    Image = "";
}

void recipe::showText()
{
    for (ingredients i: listIngredients)
    {
        std::cout << i.toString() << getIngredientName(i) << std::endl;
    }
    std::cout << storeText << std::endl;
};

std::string recipe::getIngredientName(ingredients ingredient)
{
    return ingredient.name;
}

const std::string &recipe::getName() const
{
    return Name;
}

void recipe::setName(const std::string &name)
{
    Name = name;
}

void recipe::addIngredient(ingredients i)
{
    listIngredients.push_back(i);
}

void recipe::deepCopy(recipe &i)
{
    Name = i.Name.c_str();
    Image = i.Image.c_str();

    for (const auto j: i.listIngredients)
    {
        ingredients temp = j;
        listIngredients.push_back(temp);
    }
}

void recipe::setCuisine(int type)
{
    switch (type)
    {
        case POLISH:
            cuisine.Polish = 1;
            break;
        case ITALIAN:
            cuisine.Italian = 1;
            break;
        case UKRAINIAN:
            cuisine.Ukrainian = 1;
            break;
        case RUSSIAN:
            cuisine.Russian = 1;
            break;
    }
}

bool recipe::getCuisine(int type)
{
    switch (type)
    {
        case POLISH:
            return (cuisine.Polish == 1) ? true : false;
            break;
        case ITALIAN:
            return (cuisine.Italian == 1) ? true : false;
            break;
        case UKRAINIAN:
            return (cuisine.Ukrainian == 1) ? true : false;
            break;
        case RUSSIAN:
            return (cuisine.Russian == 1) ? true : false;
            break;
    }

    return false;
}

void recipe::copy(recipe &i)
{
    Name = i.Name;
    Image = i.Image;
    listIngredients = i.listIngredients;
}

void recipe::setText(string input)
{
    storeText = input;
}

string recipe::getText()
{
    return storeText;
}
