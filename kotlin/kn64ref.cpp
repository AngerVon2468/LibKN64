#include "kn64ref.h"

void kDisposePtr(const KNPtr ptr) {
	lib->DisposeStablePointer(ptr);
}

void kDisposeStr(const char* str) {
	lib->DisposeString(str);
}

KBool kIsInstance(const KNPtr ptr, const KType* type) {
	return lib->IsInstance(ptr, type);
}

KRefByte kRefByte(const KByte val) {
	return lib->createNullableByte(val);
}

KByte kByte(const KRefByte val) {
	return lib->getNonNullValueOfByte(val);
}

KRefShort kRefShort(const KShort val) {
	return lib->createNullableShort(val);
}

KShort kShort(const KRefShort val) {
	return lib->getNonNullValueOfShort(val);
}

KRefInt kRefInt(const KInt val) {
	return lib->createNullableInt(val);
}

KInt kInt(const KRefInt val) {
	return lib->getNonNullValueOfInt(val);
}

KRefLong kRefLong(const KLong val) {
	return lib->createNullableLong(val);
}

KLong kLong(const KRefLong val) {
	return lib->getNonNullValueOfLong(val);
}

KRefFloat kRefFloat(const KFloat val) {
	return lib->createNullableFloat(val);
}

KFloat kFloat(const KRefFloat val) {
	return lib->getNonNullValueOfFloat(val);
}

KRefDouble kRefDouble(const KDouble val) {
	return lib->createNullableDouble(val);
}

KDouble kDouble(const KRefDouble val) {
	return lib->getNonNullValueOfDouble(val);
}

KRefChar kRefChar(const KChar val) {
	return lib->createNullableChar(val);
}

KChar kChar(const KRefChar val) {
	return lib->getNonNullValueOfChar(val);
}

KRefBool kRefBool(const KBool val) {
	return lib->createNullableBoolean(val);
}

KBool kBool(const KRefBool val) {
	return lib->getNonNullValueOfBoolean(val);
}

KRefUnit kRefUnit() {
	return lib->createNullableUnit();
}

KRefUByte kRefUByte(const KUByte val) {
	return lib->createNullableUByte(val);
}

KUByte kUByte(const KRefUByte val) {
	return lib->getNonNullValueOfUByte(val);
}

KRefUShort kRefUShort(const KUShort val) {
	return lib->createNullableUShort(val);
}

KUShort kUShort(const KRefUShort val) {
	return lib->getNonNullValueOfUShort(val);
}

KRefUInt kRefUInt(const KUInt val) {
	return lib->createNullableUInt(val);
}

KUInt kUInt(const KRefUInt val) {
	return lib->getNonNullValueOfUInt(val);
}

KRefULong kRefULong(const KULong val) {
	return lib->createNullableULong(val);
}

KULong kULong(const KRefULong val) {
	return lib->getNonNullValueOfULong(val);
}