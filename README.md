# LibKN64
Is it LibKotlinNintendo64, or LibKotlinNative64? You may never know...
This project is made to provide a semblance of a standard library & utils to mods for [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp),
as they do not (at the time of writing) have access to the C Standard Library.

The implementation of all functions and classes is delegated to a Kotlin/Native library (hence the name),
which can be found at [this GitHub repository](https://github.com/AngerVon2468/Kotlin64Recomp).

## Building
* Clone or download this repo and open with your [IDE of choice](#note2) (CLion or VSCode is recommended, however VSCode has not been tested).
* Clone or download [the Kotlin delegate](https://github.com/AngerVon2468/Kotlin64Recomp) and open with your [IDE of choice](#note1) (IntelliJ is recommended).
* After the project has been set up, run the gradle task `kotlin64recompBinaries`.
* From the root directory of the project, go to `build/bin/kotlin64recomp/releaseShared/`.
* Copy all files within to the `kotlin/` directory of this project.
* Build with CMake.
* You'll find the library in whatever folder you use for build. In CLion it will most likely be `cmake-build-debug/`, in VSCode it will most likely be `build/`.

###### Note1
An IDE is not strictly required, you _could_ just use a terminal and run `./gradlew kotlin64recompBinaries` after setup.
###### Note2
You could _probably_ do this in terminal, but I'm unaware of the commands to do so.