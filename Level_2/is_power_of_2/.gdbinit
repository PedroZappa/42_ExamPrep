define po2
	display /d n
	display /d i
end

# Start
set logging on
b 14
run
step
po2
