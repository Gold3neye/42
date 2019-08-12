cat /etc/passwd | sed "1,10d" | sed -n "n;p" | sed "s/:.*//g" | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed "s/,/, /g" | sed "s/,.$/./g"
