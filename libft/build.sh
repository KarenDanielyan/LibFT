#!/bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFilenames=$(find . -type f -name "*.c")

# echo "Files:" $cFilenames

assembly="engine"
compilerFlags="-g -shared -Wall -Wextra -Werror -Wpedantic"
# -fms-extensions 
# -Wall -Werror
includeFlags="-Isrc"

echo "Building $assembly..."
gcc $cFilenames $compilerFlags -o ../bin/lib$assembly.so $defines $includeFlags $linkerFlags 