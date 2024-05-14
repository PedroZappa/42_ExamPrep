set trace-commands on
set logging enabled on
set print array on

define rfr
	refresh
end

define mchk
	monitor leak_check full reachable any
end

# Start at main
break main
start
rfr
