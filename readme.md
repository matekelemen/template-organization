## Description

An example of separating declarations from implementations for templates with limited template parameters.

## Layout

All C++ files are located in *src*.
- A shared library (unimaginatively named *library*) is built from *src/sources*.
- An executable is built for each source file in *src/drivers*.

## Build

Linux only. Execute *configure_and_build*, which outputs all generated files to *build*.
