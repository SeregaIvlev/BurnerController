// 4.18.0 0xc9782ec6
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_square_medium[]; // BITMAP_BLUE_BUTTONS_SQUARE_MEDIUM_ID = 0, Size: 230x60 pixels
extern const unsigned char image_blue_buttons_square_medium_pressed[]; // BITMAP_BLUE_BUTTONS_SQUARE_MEDIUM_PRESSED_ID = 1, Size: 230x60 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_square_medium, 0, 230, 60, 3, 4, 224, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_square_medium_pressed, 0, 230, 60, 3, 4, 224, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
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
