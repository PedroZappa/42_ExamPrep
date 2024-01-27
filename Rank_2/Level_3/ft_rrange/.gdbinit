define rfr
	refresh
end

define main
	display arr
	display/d arrlen
	display/d min
	display/d max
	display/d i
end

define ft_rrange
	display/d start
	display/d end
	display/d direction
	display/d arrlen
	display arr
	display/d arr[i]
	display/d i
	next
end

# Start
set logging enabled on
break 16
run -1 2
main
fs cmd
step
ft_rrange
next

