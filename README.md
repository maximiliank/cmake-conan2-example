# cmake-conan2-example

[![Build](https://github.com/maximiliank/cmake-conan2-example/actions/workflows/ci.yml/badge.svg)](https://github.com/maximiliank/cmake-conan2-example/actions/workflows/ci.yml)

Cmake example using conan2 as dependency manager. It is required to have `conan>2` installed and on your `PATH`.

Via `CMakePresets.json` the conan scripts are setup with the following call:
```cmake
"CMAKE_PROJECT_INCLUDE_BEFORE": "${sourceDir}/cmake/Conan.cmake"
```

For `Debug` configuration, conan is configured to use `Release` builds via setting `CONAN_HOST_PROFILE` and `CONAN_BUILD_PROFILE`.

For the build commands you can have a look at the [workflow file](https://github.com/maximiliank/cmake-conan2-example/blob/main/.github/workflows/ci.yml).