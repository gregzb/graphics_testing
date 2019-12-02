#pragma once
#include <vector>
#include "PixelData.hpp"

class ImageBuffer {
private:
  int width, height;
  std::vector<PixelData> buffer;
public:
  ImageBuffer(int width, int height);
}
