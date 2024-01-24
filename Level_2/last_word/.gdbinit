define rfr
	refresh
end

define main
	display argc
	display str
	display str[len]
	display len
	display word_start
	display word_end
end

# Start
set logging on
break 13
start "Zedro 42 Root  "
main
next
