define main
	display/d argc
	display/d num
	display/d i
end

define ft_atoi
	display str
	display *str
	display/d num
	display/d neg
end

define ft_putnbr
	display/d nb
end

# Start
set logging enabled on
break 15
run 42
main
step
ft_atoi
next
