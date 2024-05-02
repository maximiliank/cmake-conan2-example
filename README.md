# cmake-conan2-example

Cmake example using conan2 as dependency manager. It is required to have `conan>2` installed and on your `PATH`.

Via `CMakePresets.json` the conan scripts are setup with the following call:
```cmake
"CMAKE_PROJECT_INCLUDE_BEFORE": "${sourceDir}/cmake/Conan.cmake"
```

For `Debug` configuration, conan is configured to use `Release` builds via setting `CONAN_HOST_PROFILE` and `CONAN_BUILD_PROFILE`.