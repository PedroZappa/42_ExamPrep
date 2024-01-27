define main
	display/s str
	display/d str_base
end

define atoi
	display/s str
	display/d str_base
	display/d digit
	display/d num
	display/d neg
end

define tlwr
	display/c c
	next
end

define gdgt
	display/c c
	display/d base_len
	display/d n_digit
	next
end

# Start
set logging enabled on
break ft_atoi_base:21
fs cmd
run 2F 16
main
step
atoi
