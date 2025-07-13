#ifndef LIBKN64_LIBRARY_H
#define LIBKN64_LIBRARY_H

#include "kotlin/kn64ref.h"

inline KRefFile file(const char* path);

char fileSeparator();

class File {
public:
	explicit File(const char* path);
	explicit File(KRefFile file0);
	[[nodiscard]] KLong length() const;
	[[nodiscard]] const char* getParent() const;
	[[nodiscard]] File getParentFile() const;
	[[nodiscard]] const char* getAbsolutePath() const;
	[[nodiscard]] const char* getPath() const;
	[[nodiscard]] const char* getName() const;
	[[nodiscard]] const char* getNameWithoutExtension() const;
	[[nodiscard]] KLong lastModified() const;
	[[nodiscard]] KBool isFile() const;
	[[nodiscard]] KBool isDirectory() const;
	[[nodiscard]] KBool exists() const;
	[[nodiscard]] KBool canRead() const;
	[[nodiscard]] KBool canWrite() const;
	[[nodiscard]] KRefArray list0() const;
	[[nodiscard]] char** list() const;
	[[nodiscard]] KRefArray listFiles0() const;
	[[nodiscard]] KRefArray listFiles() const;
	[[nodiscard]] const char* toString() const;
	[[nodiscard]] KBool del() const; // Can't name the method "delete" because that's a taken keyword...
	[[nodiscard]] KBool mkdir() const;
	[[nodiscard]] KBool mkdirs() const;
	[[nodiscard]] KBool createNewFile() const;
	[[nodiscard]] KRefByteArray readBytes() const;
	void writeBytes(KRefByteArray bytes) const;
	[[nodiscard]] const char* readText() const;
	void appendText(const char* text) const;
	void appendBytes(KRefByteArray bytes) const;
	void writeText(const char* text) const;
private:
	KRefFile kRefFile;
};

#endif //LIBKN64_LIBRARY_H