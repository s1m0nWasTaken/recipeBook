//
// Created by szymo on 26/03/2023.
//

#ifndef RECIPEBOOK_IMAGE_H
#define RECIPEBOOK_IMAGE_H

#include <string>

/*
 * Abstract Class
 */
class Image
{
public:
    virtual void addImage(std::string) = 0;

    virtual void removeImage() = 0;
};


#endif //RECIPEBOOK_IMAGE_H
