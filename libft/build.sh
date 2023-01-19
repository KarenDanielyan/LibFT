#!/bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFilenames=$(find . -type f -name "*.c")

# echo "Files:" $cFilenames

assembly="libft"
compilerFlags="-g -shared -fPIC -ggdb -fsanitize=address -Wall -Wextra -Werror -Wpedantic"
# -fms-extensions 
# -Wall -Werror
includeFlags="-I./"

echo "Building $assembly..."
gcc $cFilenames $compilerFlags -o ../bin/lib_$assembly.so $defines $includeFlags $linkerFlags 