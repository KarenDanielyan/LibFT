#!/bin/bash
# Build script for test
set echo on

mkdir -p ../bin

# Get a list of all the .c files.
cFilenames=$(find . -type f -name "*.c")

# echo "Files:" $cFilenames

assembly="test"
compilerFlags="-g -fPIC -Wall -Wextra -Werror -Wpedantic" 
# -Wall -Werror
includeFlags="-I./ -I../libft/"
linkerFlags="-L../bin/ -l_libft -lbsd -Wl,-rpath,."

echo "Building $assembly..."
echo gcc $cFilenames $compilerFlags -o ../bin/$assembly $includeFlags $linkerFlags
gcc $cFilenames $compilerFlags -o ../bin/$assembly $defines $includeFlags $linkerFlags