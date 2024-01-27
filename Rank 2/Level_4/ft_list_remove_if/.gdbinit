define rfr
	refresh
end

define main
	display argc
	display *lst
	display n
end

define add_node
	display *list
	display /s data
	display *curr
	display /s curr->data
	display *curr->next
end

define create_list
	display data
	display *new_elem
	display /s new_elem->data
	display *new_elem->next
end 

define ft_list_remove_if
	display **begin_list
	display *begin_list
	display /s data_ref
	display *curr
	display /s curr->data
	display *curr->next
end

# Start at main
# fs cmd
# break main
# run Zedr0 42 Go Zed 42 33
# main

# Start at add_node
# fs cmd
# break 47
# run Zedr0 42 "Let's Go"
# main
# step
# add_node
# rfr

# Start @ ft_list_remove_if
fs cmd
break ft_list_remove_if
run Zedr0 42 "Let's Go"
ft_list_remove_if
next
rfr
