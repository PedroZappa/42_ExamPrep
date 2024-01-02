define last_word
	display str
	display ret
	display /d record
end

# Start
set logging on
b 9
start
last_word
