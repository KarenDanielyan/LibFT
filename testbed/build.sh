#!/bin/bash
# Build script for testbed
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFilenames=$(find . -type f -name "*.c")

# echo "Files:" $cFilenames

assembly="testbed"
compilerFlags="-g -fPIC -Wall -Wextra -Werror -Wpedantic" 
# -Wall -Werror
includeFlags="-Isrc -I../libft/src/ -I../libft/"
linkerFlags="-L../bin/ -l_libft -lbsd -Wl,-rpath,."

echo "Building $assembly..."
echo gcc $cFilenames $compilerFlags -o ../bin/$assembly $includeFlags $linkerFlags
gcc $cFilenames $compilerFlags -o ../bin/$assembly $defines $includeFlags $linkerFlags