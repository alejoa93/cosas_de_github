#! /bin/bash

read -p "¿Desea modificar altura y velocidad? [Y/N]"
if [[ $REPLY =~ ^[Yy]$ ]]
    then
        echo "¿A qué altura estamos? (m)"
        read h0
        echo "¿Con qué velocidad lanzaremos?"
        read v0
    elif [[ $REPLY =~ ^[Nn]$ ]]
    then
        h0=8.5
        v0=20
    else
        echo "WROOOOONG"
        exit
fi
printf $h0"\n"$v0>inputs.txt

g++ main.cpp
./a.out<inputs.txt >datos.txt
rm inputs.txt
mkdir gif

python grafica.py
if test -f "movimiento.gif"
    then 
    rm movimiento.gif
fi

convert -delay 1 -loop 0 gif/gif_* movimiento.gif && rm -r gif