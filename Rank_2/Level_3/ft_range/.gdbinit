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

define ft_range
	display/d start
	display/d end
	display/d count
	display/d start_n
	display arr
	display/d arr[i]
	display i
	next
end

# Start
set logging enabled on
break 20
run 1 -2
main
fs cmd
step
ft_range
next
