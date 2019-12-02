#include <vector>
#include "PixelData.hpp"

ImageBuffer::ImageImageBuffer(int width, int height) {
  this->width = width;
  this->height = width;

  buffer.reserve(width * height);

}
