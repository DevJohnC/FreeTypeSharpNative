//
// Created by John Carruthers on 7/5/23.
//

#ifndef FREETYPEBINDING_FTFACE_H
#define FREETYPEBINDING_FTFACE_H

#include <freetype/freetype.h>

extern "C" FT_Long FTFace_Get_NumFaces(FT_Face face);

extern "C" FT_Long FTFace_Get_FaceIndex(FT_Face face);

extern "C" FT_Long FTFace_Get_FaceFlags(FT_Face face);

extern "C" FT_Long FTFace_Get_StyleFlags(FT_Face face);

extern "C" FT_Long FTFace_Get_NumGlyphs(FT_Face face);

extern "C" FT_String* FTFace_Get_FamilyName(FT_Face face);

extern "C" FT_String* FTFace_Get_StyleName(FT_Face face);

extern "C" FT_Int FTFace_Get_NumFixedSizes(FT_Face face);

extern "C" FT_Bitmap_Size* FTFace_Get_AvailableSizes(FT_Face face);

extern "C" FT_Int FTFace_Get_NumCharmaps(FT_Face face);

extern "C" FT_CharMap* FTFace_Get_Charmaps(FT_Face face);

extern "C" FT_Generic FTFace_Get_Generic(FT_Face face);

extern "C" FT_BBox FTFace_Get_BBox(FT_Face face);

extern "C" FT_UShort FTFace_Get_UnitsPerEm(FT_Face face);

extern "C" FT_Short FTFace_Get_Ascender(FT_Face face);

extern "C" FT_Short FTFace_Get_Descender(FT_Face face);

extern "C" FT_Short FTFace_Get_Height(FT_Face face);

extern "C" FT_Short FTFace_Get_MaxAdvanceWidth(FT_Face face);

extern "C" FT_Short FTFace_Get_MaxAdvanceHeight(FT_Face face);

extern "C" FT_GlyphSlot FTFace_Get_Glyph(FT_Face face);

extern "C" FT_Size FTFace_Get_Size(FT_Face face);

extern "C" FT_CharMap FTFace_Get_Charmap(FT_Face face);

#endif //FREETYPEBINDING_FTFACE_H
