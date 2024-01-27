define rfr
	refresh
end

define main
	display/d argc
	display **argv
	display/s *str
	display/d word_start
	display/d word_end
	display/d len
	display/d flag
end


# Start
# run "Zedro 42 Root"
# start 'Zedro 42 Root'
# set args "Zedro 42 Root"
# set args 'Zedro 42 Root'
break 20
fs cmd
start
main
next
show args
