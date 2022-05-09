#!/bin/sh
# Author:	Miguel Mazuelo
# User:		mmazuelo
# Email:	mmazuelo@student.42madrid.com

# Colours
redColour="\e[0;31m\033[1m"
greenColour="\e[0;32m\033[1m"
blueColour="\e[0;34m\033[1m"
yellowColour="\e[0;33m\033[1m"
turquoiseColour="\e[0;36m\033[1m"
purpleColour="\e[0;35m\033[1m"
grayColour="\e[0;37m\033[1m"
endColour="\033[0m\e[0m"

# Variables

#arch=$(uname -snrvmo)  #uname -a
#pcpu=$(grep 'physical id' /proc/cpuinfo | uniq | wc -l)

echo -e "${redColour}uname${endColour}"
