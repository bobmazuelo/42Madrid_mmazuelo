#!/bin/sh
cat -e /etc/passwd | grep -v "#" | awk "NR%2==0" | sed 's/:.*//' | rev | sort -r | sed -n $FT_LINE1 $FT_LINE2\p | xargs | sed 's/ /, /g' | tr -d '\n'
