define rfr
	refresh
end

define main 
	display/d argc
	display str1
	display str2
end

# Start
set logging enabled on
break 7
run "abc" "2altrb53c.sse"
main
next
