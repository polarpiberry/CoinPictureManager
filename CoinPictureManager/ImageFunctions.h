#ifndef IMAGEFUNCTIONS_H
#define IMAGEFUNCTIONS_H

#include "Dependencies.h"

boolean isImage(std::string ext); //Determine if the file is an image

int createThumbnail(fs::path image_dir, int thumbnail_height, int max_pics); //Create a thumbnail image given the images in the directory at path with a maximum number of pictures max_pics

int createWebp(fs::path image_dir, int quality, boolean verbose); //Create WebP versions of each JPEG image file in image_dir

#endif