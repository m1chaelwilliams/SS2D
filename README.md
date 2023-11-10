# SS2D
### Sphere's Simple 2D
An easy-to-use object oriented framework for Raylib 2D game development.

#### WARNING
This library has only been tested on Windows. The provided Makefile is only configured for Windows.
SS2D is very early in production. Use at your own risk.

[Features](features)  
[Install](install)  
[How to Use](how-to-use)  
[Dependencies](dependencies)  

## Features

 - Sprite class
 - Scene class

## Install

### Build from Source

Clone the repository. In the root directory, run:
`make library`
This will generate a `libss2d.a` in `build/ss2d/`.

To build the sample program, run:
`make test`
This will generate `test.exe` in `build/test`.

### How to Use

SS2D is dependent on Raylib, so it will require a copy of `libraylib.a`, `raylib.h`, and `raymath.h`.

After creating your project structure and writing a simple driver program, build with the following command:
`g++ <source file(s)> -o <output name> -I<include dir> -L<lib dir> -lraylib -lopengl32 -lgdi32 -lwinmm -lss2d`

Here's a copyable version with some dummy values:
```
g++ main.cpp -o build/program.exe -Iinclude -Llib -lraylib -lopengl32 -lgdi32 -lwinmm -lss2d
```

Congrats, your exe should have been built!

## Dependencies

 - [Raylib](https://raylib.com)