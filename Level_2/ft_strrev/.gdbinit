define strrev
	display str
	display /d str[i]
	display temp
	display temp[len]
	display /d len
	display /d i
end

# Start
set logging on

b 9
run
step
strrev
