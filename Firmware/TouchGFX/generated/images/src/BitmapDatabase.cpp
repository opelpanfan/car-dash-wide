// 4.20.0 0x25fe5e66
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_indbatt[]; // BITMAP_INDBATT_ID = 0, Size: 62x34 pixels
extern const unsigned char image_indbatt_extra_data[];
extern const unsigned char image_inddtc[]; // BITMAP_INDDTC_ID = 1, Size: 62x34 pixels
extern const unsigned char image_inddtc_extra_data[];
extern const unsigned char image_indect[]; // BITMAP_INDECT_ID = 2, Size: 62x34 pixels
extern const unsigned char image_indect_extra_data[];
extern const unsigned char image_indfuel[]; // BITMAP_INDFUEL_ID = 3, Size: 62x34 pixels
extern const unsigned char image_indfuel_extra_data[];
extern const unsigned char image_indhigh[]; // BITMAP_INDHIGH_ID = 4, Size: 62x34 pixels
extern const unsigned char image_indhigh_extra_data[];
extern const unsigned char image_indleft[]; // BITMAP_INDLEFT_ID = 5, Size: 62x34 pixels
extern const unsigned char image_indleft_extra_data[];
extern const unsigned char image_indlow[]; // BITMAP_INDLOW_ID = 6, Size: 62x34 pixels
extern const unsigned char image_indlow_extra_data[];
extern const unsigned char image_indoil[]; // BITMAP_INDOIL_ID = 7, Size: 62x34 pixels
extern const unsigned char image_indoil_extra_data[];
extern const unsigned char image_indpark[]; // BITMAP_INDPARK_ID = 8, Size: 62x34 pixels
extern const unsigned char image_indpark_extra_data[];
extern const unsigned char image_indright[]; // BITMAP_INDRIGHT_ID = 9, Size: 62x34 pixels
extern const unsigned char image_indright_extra_data[];
extern const unsigned char image_needel[]; // BITMAP_NEEDEL_ID = 10, Size: 26x230 pixels
extern const unsigned char image_needel_extra_data[];
extern const unsigned char image_race_dash_wide[]; // BITMAP_RACE_DASH_WIDE_ID = 11, Size: 1280x480 pixels
extern const unsigned char image_race_dash_wide_extra_data[];

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_indbatt, image_indbatt_extra_data, 62, 34, 12, 4, 38, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 3, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_inddtc, image_inddtc_extra_data, 62, 34, 53, 19, 3, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 12, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indect, image_indect_extra_data, 62, 34, 29, 3, 4, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 23, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indfuel, image_indfuel_extra_data, 62, 34, 19, 12, 17, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 21, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indhigh, image_indhigh_extra_data, 62, 34, 31, 6, 15, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 2, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indleft, image_indleft_extra_data, 62, 34, 17, 10, 40, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 14, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indlow, image_indlow_extra_data, 62, 34, 31, 4, 10, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 3, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indoil, image_indoil_extra_data, 62, 34, 15, 25, 23, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 2, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indpark, image_indpark_extra_data, 62, 34, 27, 7, 2, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 19, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_indright, image_indright_extra_data, 62, 34, 5, 10, 40, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 14, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_needel, image_needel_extra_data, 26, 230, 6, 2, 12, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 153, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 },
    { image_race_dash_wide, image_race_dash_wide_extra_data, 1280, 480, 458, 72, 334, ((uint8_t)touchgfx::Bitmap::L8) >> 3, 335, ((uint8_t)touchgfx::Bitmap::L8) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase