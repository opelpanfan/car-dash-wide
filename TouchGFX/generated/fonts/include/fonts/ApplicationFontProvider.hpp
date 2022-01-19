/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId SENSOR_VALUES = 0;
    static const touchgfx::FontId SENSOR_LABEL = 1;
    static const touchgfx::FontId SENSOR_UNIT = 2;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId SENSOR_VALUES = 0; // bahnschrift_100_2bpp
    static const touchgfx::FontId SENSOR_LABEL = 1;  // bahnschrift_25_2bpp
    static const touchgfx::FontId SENSOR_UNIT = 1;   // bahnschrift_25_2bpp
    static const uint16_t NUMBER_OF_FONTS = 2;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
    {
    }
    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
