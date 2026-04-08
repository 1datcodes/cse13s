if [ "$1" = "" ] # left brace "[" is actually treated as a command
then
    echo 'Usage: ./script filename'
    exit 1
fi # someone using ALGOL made it this way
