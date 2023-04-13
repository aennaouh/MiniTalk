# MiniTalk # Minitalk



s**ignals** 

These signals are used for various other purposes. In general, they will not affect your program unless it explicitly uses them for something.

**this file has alot of information about the SIGUSR** 

[https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html](https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html)

siguser this are used only for user- defined operations  

***function kill*** 

The `kill` function sends the signal signum to the process or process group specified by pid. Besides the signals listed in [Standard Signals](https://www.gnu.org/software/libc/manual/html_node/Standard-Signals.html), signum can also have a value of zero to check the validity of the pid.

The pid specifies the process or process group to receive the signal:

`pid > 0`The process whose identifier is pid. (On Linux, the signal is sent to the entire process even if pid is a thread ID distinct from the process ID.)`pid == 0`All processes in the same process group as the sender.`pid < -1`The process group whose identifier is -pid.`pid == -1`
