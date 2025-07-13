#include "libkn64.h"

#define l_kn_root lib->kotlin.root.kotlin64recomp

KRefFile file(const char* path) {
	return l_kn_root.file(path);
}

char fileSeparator() {
	return l_kn_root.file_separator();
}

File::File(const char* path): kRefFile(file(path)) {}

File::File(const KRefFile file0): kRefFile(file0) {}

KLong File::length() const {
	return l_kn_root.file_length(this->kRefFile);
}

const char* File::getParent() const {
	return l_kn_root.file_parent(this->kRefFile);
}

File File::getParentFile() const {
	return File(l_kn_root.file_parentFile(this->kRefFile));
}

const char* File::getAbsolutePath() const {
	return l_kn_root.file_absolutePath(this->kRefFile);
}

const char* File::getPath() const {
	return l_kn_root.file_path(this->kRefFile);
}

const char* File::getName() const {
	return l_kn_root.file_name(this->kRefFile);
}

const char* File::getNameWithoutExtension() const {
	return l_kn_root.file_nameWithoutExtension(this->kRefFile);
}

KLong File::lastModified() const {
	return l_kn_root.file_lastModified(this->kRefFile);
}

KBool File::isFile() const {
	return l_kn_root.file_isFile(this->kRefFile);
}

KBool File::isDirectory() const {
	return l_kn_root.file_isDirectory(this->kRefFile);
}

KBool File::exists() const {
	return l_kn_root.file_exists(this->kRefFile);
}

KBool File::canRead() const {
	return l_kn_root.file_canRead(this->kRefFile);
}

KBool File::canWrite() const {
	return l_kn_root.file_canWrite(this->kRefFile);
}

KRefArray File::list0() const {
	return l_kn_root.file_list0(this->kRefFile);
}

char** File::list() const {
	return static_cast<char**>(l_kn_root.file_list(this->kRefFile));
}

KRefArray File::listFiles0() const {
	return l_kn_root.file_listFiles0(this->kRefFile);
}

KRefArray File::listFiles() const {
	return l_kn_root.file_listFiles0(this->kRefFile);
}

const char* File::toString() const {
	return l_kn_root.file_toString(this->kRefFile);
}

KBool File::del() const {
	return l_kn_root.file_delete(this->kRefFile);
}

KBool File::mkdir() const {
	return l_kn_root.file_mkdir(this->kRefFile);
}

KBool File::mkdirs() const {
	return l_kn_root.file_mkdirs(this->kRefFile);
}

KBool File::createNewFile() const {
	return l_kn_root.file_createNewFile(this->kRefFile);
}

KRefByteArray File::readBytes() const {
	return l_kn_root.file_readBytes(this->kRefFile);
}

void File::writeBytes(const KRefByteArray bytes) const {
	l_kn_root.file_writeBytes(this->kRefFile, bytes);
}

const char* File::readText() const {
	return l_kn_root.file_readText(this->kRefFile);
}

void File::appendText(const char* text) const {
	l_kn_root.file_appendText(this->kRefFile, text);
}

void File::appendBytes(const KRefByteArray bytes) const {
	l_kn_root.file_appendBytes(this->kRefFile, bytes);
}

void File::writeText(const char* text) const {
	l_kn_root.file_writeText(this->kRefFile, text);
}