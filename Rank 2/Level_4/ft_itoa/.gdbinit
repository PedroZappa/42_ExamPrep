define rf
	refresh
end

define main
	display argc
	display intarr[i]
	display intarr
	display n
	display i
end

define ft_itoa
	display nbr
	display len
	display numstr
end

define ft_numlen
	display nbr
	display len
end

define ft_getnumstr
	display numstr
	display nbr
	display len
end

# Start @ main
fs cmd
break 16
run 420
main
next
rf
