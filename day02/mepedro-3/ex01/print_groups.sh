id -Gn $FT_USER | tr -d '\n' | sed 's/ /,/g' | tr -d '\n'
