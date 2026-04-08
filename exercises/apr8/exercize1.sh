echo $1 $2 $3
echo $@ # all params

for param in $@
do
    echo $param
done
