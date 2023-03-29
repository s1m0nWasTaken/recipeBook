#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H

#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"
#include "vector"
#include <string>

using namespace std;

class recipe : public Image, public recipeText
{
public:
    struct NationalCuisine
    {
        bool Polish: 1;
        bool Italian: 1;
        bool Ukrainian: 1;
        bool Russian: 1;
    };

    void showText();

    void setText(string input);

    recipe *operator+(ingredients);

    const std::string &getImage() const;

    void setImage(const std::string &image);

    const std::vector<ingredients> &getListIngredients() const;

    void setListIngredients(const std::vector<ingredients> &listIngredients);

    std::string getIngredientName(ingredients ingredient);

    const std::string &getName() const;

    void addIngredient(ingredients);

    void setName(const std::string &name);

    void setCuisine(int type);

    void deepCopy(recipe &i);

    void copy(recipe &i);

    bool getCuisine(int);

    string getText();

private:

    void addImage(std::string string) override;

    void removeImage() override;

private:
    std::string Name;
    std::string Image;
    std::vector<ingredients> listIngredients;
    NationalCuisine cuisine;
};


#endif //RECIPEBOOK_RECIPE_H
