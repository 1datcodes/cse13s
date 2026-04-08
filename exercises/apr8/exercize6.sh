ls exercize6.sh

if [[ "$?" -ne "00" ]] # -ne is "not equals to" and NUMERICALLY compares parameters
then
    echo "file doesn't exist"
fi
