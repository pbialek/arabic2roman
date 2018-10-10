# Arabic 2 Roman

Simple app which converts arabic numbers to roman notation.

# Building

## Use cmake and make
If you want to test it all out through the common gtest procedure, first
**delete build/** (if present). Then...

In the project root:

    mkdir build
    cd build
    cmake ..

By now Makefiles should be created.
Then, to build executables and do all that linking stuff,

    make

To prepare all your tests, run this:

    cmake -Dtest=ON ..

To run all tests easily,

    make test

## Run executables
Then you can do ./myexecutable for the generated executable, e.g.:

    ./arabic2roman

and if you did cmake with test=ON:

    ./runUnitTests