define rfr
	refresh
end

define strspn
	display s
	display /d s[i]
	display accept
	display /d accept[n]
	display /d n
	display /d i
end

# Start
set logging on
b 10
run
step
strspn
