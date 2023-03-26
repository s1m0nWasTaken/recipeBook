#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H
#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"
#include "vector"


class recipe : Image, recipeText
{
public:
    struct NationalCuisine{
        bool Polish;
        bool Indian;
        bool Italian;
        bool Chinese;
        bool Russian;
        bool Ukrainian;
    };
    void showText();
    recipe* operator+(ingredients);

    const std::string &getImage() const;

    void setImage(const std::string &image);

    const std::vector<ingredients> &getListIngredients() const;

    void setListIngredients(const std::vector<ingredients> &listIngredients);

    std::string getIngredientName(ingredients ingredient);

private:
    void addImage(std::string string) override;

    void removeImage() override;

private:
    std::string Image;
    std::vector <ingredients> listIngredients;
};


#endif //RECIPEBOOK_RECIPE_H
