#ifndef KONAN_LIBKOTLIN64RECOMP_H
#define KONAN_LIBKOTLIN64RECOMP_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libkotlin64recomp_KBoolean;
#else
typedef _Bool           libkotlin64recomp_KBoolean;
#endif
typedef unsigned short     libkotlin64recomp_KChar;
typedef signed char        libkotlin64recomp_KByte;
typedef short              libkotlin64recomp_KShort;
typedef int                libkotlin64recomp_KInt;
typedef long long          libkotlin64recomp_KLong;
typedef unsigned char      libkotlin64recomp_KUByte;
typedef unsigned short     libkotlin64recomp_KUShort;
typedef unsigned int       libkotlin64recomp_KUInt;
typedef unsigned long long libkotlin64recomp_KULong;
typedef float              libkotlin64recomp_KFloat;
typedef double             libkotlin64recomp_KDouble;
typedef float __attribute__ ((__vector_size__ (16))) libkotlin64recomp_KVector128;
typedef void*              libkotlin64recomp_KNativePtr;
struct libkotlin64recomp_KType;
typedef struct libkotlin64recomp_KType libkotlin64recomp_KType;

typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Byte;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Short;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Int;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Long;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Float;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Double;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Char;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Boolean;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Unit;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_UByte;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_UShort;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_UInt;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_ULong;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_me_archinamon_fileio_File;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_ByteArray;
typedef struct {
  libkotlin64recomp_KNativePtr pinned;
} libkotlin64recomp_kref_kotlin_Array;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libkotlin64recomp_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libkotlin64recomp_KBoolean (*IsInstance)(libkotlin64recomp_KNativePtr ref, const libkotlin64recomp_KType* type);
  libkotlin64recomp_kref_kotlin_Byte (*createNullableByte)(libkotlin64recomp_KByte);
  libkotlin64recomp_KByte (*getNonNullValueOfByte)(libkotlin64recomp_kref_kotlin_Byte);
  libkotlin64recomp_kref_kotlin_Short (*createNullableShort)(libkotlin64recomp_KShort);
  libkotlin64recomp_KShort (*getNonNullValueOfShort)(libkotlin64recomp_kref_kotlin_Short);
  libkotlin64recomp_kref_kotlin_Int (*createNullableInt)(libkotlin64recomp_KInt);
  libkotlin64recomp_KInt (*getNonNullValueOfInt)(libkotlin64recomp_kref_kotlin_Int);
  libkotlin64recomp_kref_kotlin_Long (*createNullableLong)(libkotlin64recomp_KLong);
  libkotlin64recomp_KLong (*getNonNullValueOfLong)(libkotlin64recomp_kref_kotlin_Long);
  libkotlin64recomp_kref_kotlin_Float (*createNullableFloat)(libkotlin64recomp_KFloat);
  libkotlin64recomp_KFloat (*getNonNullValueOfFloat)(libkotlin64recomp_kref_kotlin_Float);
  libkotlin64recomp_kref_kotlin_Double (*createNullableDouble)(libkotlin64recomp_KDouble);
  libkotlin64recomp_KDouble (*getNonNullValueOfDouble)(libkotlin64recomp_kref_kotlin_Double);
  libkotlin64recomp_kref_kotlin_Char (*createNullableChar)(libkotlin64recomp_KChar);
  libkotlin64recomp_KChar (*getNonNullValueOfChar)(libkotlin64recomp_kref_kotlin_Char);
  libkotlin64recomp_kref_kotlin_Boolean (*createNullableBoolean)(libkotlin64recomp_KBoolean);
  libkotlin64recomp_KBoolean (*getNonNullValueOfBoolean)(libkotlin64recomp_kref_kotlin_Boolean);
  libkotlin64recomp_kref_kotlin_Unit (*createNullableUnit)(void);
  libkotlin64recomp_kref_kotlin_UByte (*createNullableUByte)(libkotlin64recomp_KUByte);
  libkotlin64recomp_KUByte (*getNonNullValueOfUByte)(libkotlin64recomp_kref_kotlin_UByte);
  libkotlin64recomp_kref_kotlin_UShort (*createNullableUShort)(libkotlin64recomp_KUShort);
  libkotlin64recomp_KUShort (*getNonNullValueOfUShort)(libkotlin64recomp_kref_kotlin_UShort);
  libkotlin64recomp_kref_kotlin_UInt (*createNullableUInt)(libkotlin64recomp_KUInt);
  libkotlin64recomp_KUInt (*getNonNullValueOfUInt)(libkotlin64recomp_kref_kotlin_UInt);
  libkotlin64recomp_kref_kotlin_ULong (*createNullableULong)(libkotlin64recomp_KULong);
  libkotlin64recomp_KULong (*getNonNullValueOfULong)(libkotlin64recomp_kref_kotlin_ULong);

  /* User functions. */
  struct {
    struct {
      struct {
        libkotlin64recomp_kref_me_archinamon_fileio_File (*file)(const char* path);
        const char* (*file_absolutePath)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        void (*file_appendBytes)(libkotlin64recomp_kref_me_archinamon_fileio_File file, libkotlin64recomp_kref_kotlin_ByteArray bytes);
        void (*file_appendText)(libkotlin64recomp_kref_me_archinamon_fileio_File file, const char* text);
        libkotlin64recomp_KBoolean (*file_canRead)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_canWrite)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_createNewFile)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_delete)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_exists)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_isDirectory)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_isFile)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KLong (*file_lastModified)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KLong (*file_length)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        void* (*file_list)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_kref_kotlin_Array (*file_list0)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_kref_kotlin_Array (*file_listFiles)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_kref_kotlin_Array (*file_listFiles0)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_mkdir)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KBoolean (*file_mkdirs)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        const char* (*file_name)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        const char* (*file_nameWithoutExtension)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        const char* (*file_parent)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_kref_me_archinamon_fileio_File (*file_parentFile)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        const char* (*file_path)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_kref_kotlin_ByteArray (*file_readBytes)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        const char* (*file_readText)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        libkotlin64recomp_KChar (*file_separator)();
        const char* (*file_toString)(libkotlin64recomp_kref_me_archinamon_fileio_File file);
        void (*file_writeBytes)(libkotlin64recomp_kref_me_archinamon_fileio_File file, libkotlin64recomp_kref_kotlin_ByteArray bytes);
        void (*file_writeText)(libkotlin64recomp_kref_me_archinamon_fileio_File file, const char* text);
      } kotlin64recomp;
    } root;
  } kotlin;
} libkotlin64recomp_ExportedSymbols;
extern libkotlin64recomp_ExportedSymbols* libkotlin64recomp_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBKOTLIN64RECOMP_H */