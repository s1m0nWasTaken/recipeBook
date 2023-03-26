#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

//#include <iostream>
//#include "recipe.h"
//#include "ingredients.h"

//int main()
//{
//    recipe sut;
//    ingredients *name = new ingredients(1.5, 2, "test");
//    sut = *(sut + *name);
//    sut.replaceText("we are testing does it work");
//    sut.showText();
//}
