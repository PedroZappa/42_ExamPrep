#
##
### GDB Settings
##
#
set prompt (zdb) 
set editing on
# set verbose on
set tui border-kind acs
set tui active-border-mode bold-standout
set tui border-mode reverse
set trace-commands on
set logging enabled on
set follow-fork-mode child
# set detach-on-fork off

show follow-fork-mode

set print pretty on
# set print elements 2
set print array on

#
##
### Microshell
### Custom Commands
define main
	display argc
	display *argv@argc
	display *envp
	display i
end

define exec
	display **argv
	display **env
	display i
	display has_pipe
	display fd[2]@2
	display pid
	display status
end
