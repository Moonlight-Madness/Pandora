#ifndef BMP_H
#define BMP_H
#endif

#include <stdint.h>

typedef uint8_t   UCHAR;
typedef uint16_t  USHORT;
typedef uint32_t  ULONG;
typedef uint64_t  ULLONG;
typedef int8_t    CHAR;
typedef int16_t   SHORT;
typedef int32_t   LONG;
typedef int64_t   LLONG;

typedef struct
{
    USHORT  bfType;
    ULONG   bfSize;
    USHORT  bfReserved1;
    USHORT  bfReserved2;
    ULONG   bfOffBits;
} __attribute__((__packed__))
BMPFH;

typedef struct
{
    ULONG   biSize;
    LONG    biWidth;
    LONG    biHeight;
    USHORT  biPlanes;
    USHORT  biBitCount;
    ULONG   biCompression;
    ULONG   biSizeImage;
    LONG    biXPelsPerMeter;
    LONG    biYPelsPerMeter;
    ULONG   biClrUsed;
    ULONG   biClrImportant;
} __attribute__((__packed__))
BMPIH;

typedef struct RGBTRIPLE
{
    UCHAR  rgbtBlue;
    UCHAR  rgbtGreen;
    UCHAR  rgbtRed;
} __attribute__((__packed__))
RGBT;
