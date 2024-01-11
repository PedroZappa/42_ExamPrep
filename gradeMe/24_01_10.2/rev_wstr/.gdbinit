define main
	display argc
	display str
	display str[len]
	display *str
	display word_start
	display word_end
	display len
end

define ft_printword
	display str
	display *str
	display word_start
	display word_end
	display word
	display *word
	display word[word_start]
end

set logging enabled on
fs cmd

# Start in main
# break main
# run
# main
# next

# Start ft_printword
break ft_printword
run
step
ft_printword
next
