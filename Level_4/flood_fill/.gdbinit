define rfr
	refresh
end

define main
	display size
	display zone
	display area
end

define make_area
	display zone
	display/d size
	display new
end

define flood_fill
	display **tab
	display *tab
	display/d size
	display/d begin
end

define fill
	display **tab
	display *tab
	display/d size
	display/d curr
	display/c to_fill
end

# Start
break flood_fill
run
flood_fill
step
next
fill
next
rfr
