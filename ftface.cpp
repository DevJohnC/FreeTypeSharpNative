//
// Created by John Carruthers on 7/5/23.
//

#include "ftface.h"

extern "C" FT_Long FTFace_Get_NumFaces(FT_Face face) {
    return face->num_faces;
}

extern "C" FT_Long FTFace_Get_FaceIndex(FT_Face face) {
    return face->face_index;
}

extern "C" FT_Long FTFace_Get_FaceFlags(FT_Face face) {
    return face->face_flags;
}

extern "C" FT_Long FTFace_Get_StyleFlags(FT_Face face) {
    return face->style_flags;
}

extern "C" FT_Long FTFace_Get_NumGlyphs(FT_Face face) {
    return face->num_glyphs;
}

extern "C" FT_String* FTFace_Get_FamilyName(FT_Face face) {
    return face->family_name;
}

extern "C" FT_String* FTFace_Get_StyleName(FT_Face face) {
    return face->style_name;
}

extern "C" FT_UShort FTFace_Get_UnitsPerEm(FT_Face face) {
    return face->units_per_EM;
}

FT_Int FTFace_Get_NumFixedSizes(FT_Face face) {
    return face->num_fixed_sizes;
}

FT_Bitmap_Size* FTFace_Get_AvailableSizes(FT_Face face) {
    return face->available_sizes;
}

FT_Int FTFace_Get_NumCharmaps(FT_Face face) {
    return face->num_charmaps;
}

FT_CharMap* FTFace_Get_Charmaps(FT_Face face) {
    return face->charmaps;
}

FT_Generic FTFace_Get_Generic(FT_Face face) {
    return face->generic;
}

FT_BBox FTFace_Get_BBox(FT_Face face) {
    return face->bbox;
}

FT_Short FTFace_Get_Ascender(FT_Face face) {
    return face->ascender;
}

FT_Short FTFace_Get_Descender(FT_Face face) {
    return face->descender;
}

FT_Short FTFace_Get_Height(FT_Face face) {
    return face->height;
}

FT_Short FTFace_Get_MaxAdvanceWidth(FT_Face face) {
    return face->max_advance_width;
}

FT_Short FTFace_Get_MaxAdvanceHeight(FT_Face face) {
    return face->max_advance_height;
}

FT_GlyphSlot FTFace_Get_Glyph(FT_Face face) {
    return face->glyph;
}

FT_Size FTFace_Get_Size(FT_Face face) {
    return face->size;
}

FT_CharMap FTFace_Get_Charmap(FT_Face face) {
    return face->charmap;
}
