define main
	display argc
	display str
	display str[i]
	display space_flag
	display word_count
	display word_max
	display len
	display i
end

# Start @ after taking 'len'
set logging on
fs cmd
break 36
run "  Zedr0  .  "
main
next

