define main
	display argc
	display *str
	display str
	display str[strlen]
	display strlen
	display word_start
	display word_end
end

set logging enabled on
fs cmd

# start
break 16
run
main
next
