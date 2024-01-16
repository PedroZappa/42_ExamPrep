define rfr
	refresh
end

define main
	display /d argc
	display **strs
	display str
end

define ft_split
	display **strs
	display str
	display str[i]
	display str_count
	display str_len
	display word_start
	display i
end

define ft_strncpy
	display *dst
	display dst[i]
	display *src
	display src[i]
	display i
	display n
end

# Start from start
break 15
run "Zedro yo 42"
main
step
ft_split
next

# Start at ft_strncpy
# break ft_strncpy
# run "  Zedro yo 42"
# step
# ft_strncpy
# next
