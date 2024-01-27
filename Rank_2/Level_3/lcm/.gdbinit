define rfr
	refresh
end

define main
	display argc
	display a
	display b
end

define lcm
	display a
	display b
	display (a * b)
end

define gdc
	display a
	display b
	display (a % b)
end

set logging enabled on

# Start @ main
break 16
run 12 7
main

# Start @ gdc
# break 16
# run 12 7
# main
# step
# lcm
# step
# gdc
