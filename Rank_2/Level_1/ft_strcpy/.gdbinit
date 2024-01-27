# Define Helpers
define strcpy
	display s1
	display s2
	next
end

# Define Startup Commands
set logging enabled on

# Start at strcpy
set args Zedro
break 15
run
