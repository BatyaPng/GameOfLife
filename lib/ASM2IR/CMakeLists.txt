cmake_minimum_required(VERSION 3.14)

project(ASM2IR)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")


set(SOURSES ${CMAKE_SOURCE_DIR}/lib/App/app.c
            ${CMAKE_SOURCE_DIR}/lib/App/sim.c
            ${CMAKE_SOURCE_DIR}/lib/ASM2IR/AsmReader.cpp
            ${CMAKE_SOURCE_DIR}/lib/ASM2IR/main.cpp
    )

add_custom_target(ASM2IR ALL
  COMMAND clang++ -std=c++20 -o execAsm
  -I${CMAKE_SOURCE_DIR}/include/App -I${CMAKE_SOURCE_DIR}/include/ASM2IR ${SOURSES} -lSDL2 -I/usr/lib/llvm-14/include -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -L/usr/lib/llvm-14/lib /usr/lib/llvm-14/lib/libLLVM-14.so  
COMMENT "Generating ASM to IR" VERBATIM
                  )


