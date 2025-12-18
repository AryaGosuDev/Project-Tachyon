#pragma once

#include <cstdint>

struct FrameRGBA {

	int width;
	int height;
	int strideBytes;
	uint8_t* pixels;
};

bool cudaRenderer(FrameRGBA& out);
