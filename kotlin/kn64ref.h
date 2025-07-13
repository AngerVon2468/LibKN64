#ifndef KN64REF_H
#define KN64REF_H

#include "libkotlin64recomp_api.h"

// Native C Types.

using KBool = libkotlin64recomp_KBoolean;
using KBoolean = KBool;
using KChar = libkotlin64recomp_KChar;
using KByte = libkotlin64recomp_KByte;
using KShort = libkotlin64recomp_KShort;
using KInt = libkotlin64recomp_KInt;
using KLong = libkotlin64recomp_KLong;
using KUByte = libkotlin64recomp_KUByte;
using KUShort = libkotlin64recomp_KUShort;
using KUInt = libkotlin64recomp_KUInt;
using KULong = libkotlin64recomp_KULong;
using KFloat = libkotlin64recomp_KFloat;
using KDouble = libkotlin64recomp_KDouble;
using KVec128 = libkotlin64recomp_KVector128;
using KNPtr = libkotlin64recomp_KNativePtr;
using KType = libkotlin64recomp_KType;

// Kotlin Types.

using KRefByte = libkotlin64recomp_kref_kotlin_Byte;
using KRefShort = libkotlin64recomp_kref_kotlin_Short;
using KRefInt = libkotlin64recomp_kref_kotlin_Int;
using KRefLong = libkotlin64recomp_kref_kotlin_Long;
using KRefFloat = libkotlin64recomp_kref_kotlin_Float;
using KRefDouble = libkotlin64recomp_kref_kotlin_Double;
using KRefChar = libkotlin64recomp_kref_kotlin_Char;
using KRefBool = libkotlin64recomp_kref_kotlin_Boolean;
using KRefBoolean = KRefBool;
using KRefUnit = libkotlin64recomp_kref_kotlin_Unit;
using KRefUByte = libkotlin64recomp_kref_kotlin_UByte;
using KRefUShort = libkotlin64recomp_kref_kotlin_UShort;
using KRefUInt = libkotlin64recomp_kref_kotlin_UInt;
using KRefULong = libkotlin64recomp_kref_kotlin_ULong;
using KRefByteArray = libkotlin64recomp_kref_kotlin_ByteArray;
using KRefArray = libkotlin64recomp_kref_kotlin_Array;

// Other Types.

using KRefFile = libkotlin64recomp_kref_me_archinamon_fileio_File;

// Library Symbols.

using LibKN64 = libkotlin64recomp_ExportedSymbols;

inline const LibKN64* lib = libkotlin64recomp_symbols();

// Kotlin Functions.

void kDisposePtr(KNPtr ptr);

void kDisposeStr(const char* str);

KBool kIsInstance(KNPtr ptr, const KType* type);

KRefByte kRefByte(KByte val);
KByte kByte(KRefByte val);

KRefShort kRefShort(KShort val);
KShort kShort(KRefShort val);

KRefInt kRefInt(KInt val);
KInt kInt(KRefInt val);

KRefLong kRefLong(KLong val);
KLong kLong(KRefLong val);

KRefFloat kRefFloat(KFloat val);
KFloat kFloat(KRefFloat val);

KRefDouble kRefDouble(KDouble val);
KDouble kDouble(KRefDouble val);

KRefChar kRefChar(KChar val);
KChar kChar(KRefChar val);

KRefBool kRefBool(KBool val);
KBool kBool(KRefBool val);

KRefUnit kRefUnit();

KRefUByte kRefUByte(KUByte val);
KUByte kUByte(KRefUByte val);

KRefUShort kRefUShort(KUShort val);
KUShort kUShort(KRefUShort val);

KRefUInt kRefUInt(KUInt val);
KUInt kUInt(KRefUInt val);

KRefULong kRefULong(KULong val);
KULong kULong(KRefULong val);

#endif //KN64REF_H