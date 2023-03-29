//
// Created by szymo on 29/03/2023.
//
#include "recipe.h"
#include <string>
#define POLISH 1
#define ITALIAN 2
#define UKRAINIAN 3
#define RUSSIAN 4
//case 1 : this->size.cups = i.size.cups;
//break;
//case 2 : this->size.grams = i.size.grams;
//break;
//case 3 : this->size.milliliters = i.size.milliliters;
//break;

using namespace std;

void test (){
    recipe *test = new recipe;

    test->setText("recipe text");
    test->setName("your name");

    vector<ingredients> *ingr = new vector<ingredients>;
    ingredients *temp = new ingredients(20.0, 1/*type*/, "name of ingr");
    ingr->push_back(*temp);
    ingredients *temp = new ingredients(20.0, 1/*type*/, "name of ingr");
    ingr->push_back(*temp);

    test->setListIngredients(*ingr);

    test->setCuisine(1);
}