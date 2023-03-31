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

void PorkChop()
{
    recipe *PorkChop = new recipe;

    PorkChop->setImage("C:\\College\\GitHub\\recipeBook\\recipeBook\\Borscht-Recipe-2-500x500.jpg");
    PorkChop->setText("Instructions\n"
                  "Marinating the meat\n"
                  "\n"
                  "    Divide the meat into four (or eight) cutlets of equal thickness.\n"
                  "    Trim the exterior of any fat and sinew. If you leave it, it will cause the meat to shrink and curl during frying.\n"
                  "    Place the meat on a cutting board, one cutlet at the time. Cover it with a layer of cling film (plastic wrap) and pound it with the flat side of a meat tenderizer. \n"
                  "\n"
                  "    The thickness will depend on individual preferences. Personally, I like them when they are roughly ¼ inch (5-6 mm) thick. Repeat with all the remaining cutlets.\n"
                  "    Pour the milk into a bowl, large enough to hold all the meat. \n"
                  "    Add in two garlic cloves (peeled and lightly crushed with a knife), thinly sliced onion, salt and pepper. If you have dried bay leaves and all-spice berries in your pantry, add them as well. Stir everything together with a fork.\n"
                  "    Place the cutlets into the milky bowl. If they’re not covered well enough, you can top up the milk.\n"
                  "    Cover the bowl with plastic wrap (cling film) and refrigerate for 3-4 hours, and ideally overnight. \n"
                  "Breading & Frying\n"
                  "\n"
                  "    Before continuing, pat the meat dry (using a paper towel), to remove any excessive moisture.\n"
                  "    Set up a breading station - for this process I use soup plates, but wide and shallow bowls are great too. Flour goes into one bowl, raw egg (whisked) into another, and the breadcrumbs into the last one.\n"
                  "    We’ll be working in batches: bread, fry, repeat. My cutlets are enormous, therefore I have to fry them one by one.\n"
                  "    Heat up the lard in a large frying pan (skillet) on medium-high heat.\n"
                  "    Firstly, dredge both sides of each cutlet in flour, then dip in the beaten egg mixture, allowing the excess egg to drip. Finally, dip it into the breadcrumbs, turning over to cover all sides. I’m using a fork for the whole process (it’s easier and cleaner).\n"
                  "    Sauté each cutlet for 3 to 4 minutes on each side. If it’s browning too quickly, reduce the heat. If the frying pan becomes too dry, add more lard. Repeat the process until you’re out of cutlets.\n"
                  "    To keep fried cutlets warm until you’re done with them all, you can cover them with aluminum foil, or keep them in a warm oven.\n"
                  "    Before serving, pat each cutlet with a paper towel to remove any excessive fat.\n"
                  "    Serve while hot, with a lemon wedge on the side (optional)");
    PorkChop->setName("Polish Pork Chop");

    vector<ingredients> *ingr = new vector<ingredients>;

    ingredients *temp = new ingredients(900.0, 2/*type*/, "Pork Chop");
    ingr->push_back(*temp);
    temp = new ingredients(2.0, /*type*/1, "Milk");
    temp->setAllergies(1);
    ingr->push_back(*temp);
    temp = new ingredients(2.0, /*type*/4, "Garlic Clover");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "Onion");
    ingr->push_back(*temp);
    temp = new ingredients(3.0, /*type*/4, "Dried bay leaves (optional)");
    ingr->push_back(*temp);
    temp = new ingredients(3.0, /*type*/4, "All-Spice berries (optional)");
    ingr->push_back(*temp);
    temp = new ingredients(28.3, 2/*type*/, "Salt");
    ingr->push_back(*temp);
    temp = new ingredients(14.0, 2/*type*/, "Black pepper");
    ingr->push_back(*temp);
    temp = new ingredients(1.25, 1/*type*/, "Flour");
    temp->setAllergies(3);
    ingr->push_back(*temp);
    temp = new ingredients(1.0, 1/*type*/, "Plain breadcrumbs");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "egg");
    temp->setAllergies(4);
    ingr->push_back(*temp);


    PorkChop->setListIngredients(*ingr);

    PorkChop->setCuisine(1);
}

void Lasagna()
{
    recipe *Lasagna = new recipe;

    Lasagna->setImage("C:\\College\\GitHub\\recipeBook\\recipeBook\\Borscht-Recipe-2-500x500.jpg");
    Lasagna->setText("  Cook sausage, ground beef, onion, and garlic in a Dutch oven over medium heat until well browned. Stir in crushed tomatoes, tomato sauce, tomato paste, and water. Season with sugar, 2 tablespoons parsley, basil, 1 teaspoon salt, Italian seasoning, fennel seeds, and pepper. Simmer, covered, for about 1 1/2 hours, stirring occasionally.\n"
                   "\n"
                   "    Bring a large pot of lightly salted water to a boil. Cook lasagna noodles in boiling water for 8 to 10 minutes. Drain noodles, and rinse with cold water. In a mixing bowl, combine ricotta cheese with egg, remaining 2 tablespoons parsley, and 1/2 teaspoon salt.\n"
                   "\n"
                   "    Preheat the oven to 375 degrees F (190 degrees C).\n"
                   "\n"
                   "    To assemble, spread 1 1/2 cups of meat sauce in the bottom of a 9x13-inch baking dish. Arrange 6 noodles lengthwise over meat sauce. Spread with 1/2 of the ricotta cheese mixture. Top with 1/3 of the mozzarella cheese slices. Spoon 1 1/2 cups meat sauce over mozzarella, and sprinkle with 1/4 cup Parmesan cheese. Repeat layers, and top with remaining mozzarella and Parmesan cheese. Cover with foil: to prevent sticking, either spray foil with cooking spray or make sure the foil does not touch the cheese.\n"
                   "\n"
                   "    Bake in the preheated oven for 25 minutes. Remove the foil and bake for an additional 25 minutes. Rest lasagna for 15 minutes before serving.");
    Lasagna->setName("Lasagna");

    vector<ingredients> *ingr = new vector<ingredients>;

    ingredients *temp = new ingredients(1, 4/*type*/, "clove garlic");
    ingr->push_back(*temp);
    temp = new ingredients(0.5, /*type*/4, "Beef");
    ingr->push_back(*temp);
    temp = new ingredients(14.0, /*type*/3, "Vegetable stock");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/1, "Spaghetti sauce");
    ingr->push_back(*temp);
    temp = new ingredients(4, /*type*/4, "Lasagna noodles");
    ingr->push_back(*temp);
    temp = new ingredients(340.0, /*type*/2, "Cottage cheese");
    temp->setAllergies(1);
    ingr->push_back(*temp);
    temp = new ingredients(114.0, 2/*type*/, "Shredded mozzarella cheese");
    temp->setAllergies(1);
    ingr->push_back(*temp);
    temp = new ingredients(14.0, 2/*type*/, "Black pepper");
    ingr->push_back(*temp);
    temp = new ingredients(1.25, 1/*type*/, "Flour");
    temp->setAllergies(3);
    ingr->push_back(*temp);
    temp = new ingredients(1.0, 1/*type*/, "Plain breadcrumbs");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "egg");
    temp->setAllergies(4);
    ingr->push_back(*temp);
    temp = new ingredients(10.0, 1/*type*/, "Vegetable Stock");
    ingr->push_back(*temp);

    Lasagna->setListIngredients(*ingr);

    Lasagna->setCuisine(2);

}

void Borsch()
{
    recipe *Borsch = new recipe;
    Borsch->setImage("C:\\College\\GitHub\\recipeBook\\recipeBook\\Borscht-Recipe-2-500x500.jpg");
    Borsch->setText(" Start by rinsing and possible scrubbing the beets to remove any dirt and set aside.\n"
                   "    Peel the carrots and half the cabbage and set aside.\n"
                   "    Slowly add your peeled carrots to the food processor, dice and set aside.\n"
                   "    Slowly peel the potato, cube and set aside.\n"
                   "    Slowly add the cabbage chunks to the food processor shred, and set aside.\n"
                   "    Peel each beet and then cut into fours and place 2 at a time in your food processor shred, and set aside,\n"
                   "    In a pot place the oil and cook the onion till translucent.\n"
                   "    Pour in the vegetable or beef stock and place the bay leaves.\n"
                   "    Add in the tiny cubed potato, tomato, tomato paste along with shredded beets, cabbage, carrots and sugar.\n"
                   "    Simmer for 20 minutes, adding in 1 tbsp of seasoning salt.\n"
                   "    Taste to see if more seasoning salt is needed, if so add 1 tsp at a time, then add in your pepper and balsamic vinegar.\n"
                   "    Add in your fresh dill and allow this all simmer to cooked, roughly 5 more minutes.\n"
                   "    Remove the bay leaf, and ladle the hot soup into bowls and serve with sour cream and some crusty bread. Enjoy!");

    Borsch->setName("Ukrainian Borsch");

    vector<ingredients> *ingr = new vector<ingredients>;
    ingredients *temp = new ingredients(4.0, /*type*/4, "Medium Beets");
    ingr->push_back(*temp);
    temp = new ingredients(10.0, /*type*/4, "Vegetable Stock");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "Potatoe");
    ingr->push_back(*temp);
    temp = new ingredients(0.5, /*type*/4, "Green Cabbage");
    ingr->push_back(*temp);
    temp = new ingredients(4.0, /*type*/4, "Carrots");
    ingr->push_back(*temp);
    temp = new ingredients(14.7, /*type*/3, "Sunflower Oil");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "Onion");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "Diced tomato");
    ingr->push_back(*temp);
    temp = new ingredients(21.25, /*type*/2, "Tomato paste");
    ingr->push_back(*temp);
    temp = new ingredients(21.25, /*type*/2, "Red wine vinegar");
    ingr->push_back(*temp);
    temp = new ingredients(21.25, /*type*/2, "White sugar");
    ingr->push_back(*temp);
    temp = new ingredients(3.0, /*type*/4, "Bay leaf");
    ingr->push_back(*temp);
    temp = new ingredients(0.25, /*type*/1, "Dill");
    ingr->push_back(*temp);

    Borsch->setListIngredients(*ingr);

    Borsch->setCuisine(3);
}

void Blini()
{
    recipe *Blini = new recipe;

    Blini->setImage("C:\\College\\GitHub\\recipeBook\\recipeBook\\Borscht-Recipe-2-500x500.jpg");
    Blini->setText("   Combine flour, salt, and baking powder in a bowl.\n"
                   "\n"
                   "    Whisk 3/4 cup plus 2 tablespoons milk, egg, and 1 tablespoon melted butter together in a separate bowl. Mix into the flour mixture until the batter is fully combined.\n"
                   "\n"
                   "    Heat 1 tablespoon butter in a large skillet over medium-low heat. Cooking several blini at a time, drop batter, one tablespoon at a time, onto the heated skillet. Cook until bubbles form, 1 1/2 to 2 minutes. Flip and continue cooking until brown, about 1 minute more. Move to a paper towel-lined plate to help soak up excess butter.\n"
                   "\n"
                   "    Repeat with the remaining batter.");
    Blini->setName("Blini (Russian pancakes");

    vector<ingredients> *ingr = new vector<ingredients>;

    ingredients *temp = new ingredients(900.0, 2/*type*/, "Pork Chop");
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/1, "Flour");
    temp->setAllergies(3);
    ingr->push_back(*temp);
    temp = new ingredients(30.0, /*type*/2, "Salt");
    ingr->push_back(*temp);
    temp = new ingredients(14, /*type*/2, "Baking powder");
    ingr->push_back(*temp);
    temp = new ingredients(0.75, /*type*/1, "Milk");
    temp->setAllergies(1);
    ingr->push_back(*temp);
    temp = new ingredients(1.0, /*type*/4, "egg");
    temp->setAllergies(4);
    ingr->push_back(*temp);



    Blini->setListIngredients(*ingr);

    Blini->setCuisine(4);



}