define main
	display argc
	display max
	display curr
	display sum
end

define is_prime
	display n
	display i
end

set logging enabled on
fs cmd

# Start: Inspecting is_prime
break 22
run 
main
step
is_prime
next
