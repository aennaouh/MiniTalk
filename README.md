# MiniTalk # Minitalk

![Screen Shot 2022-12-23 at 7.43.23 PM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4640df3f-8dd5-47b8-ba99-0051c4e7c7d8/Screen_Shot_2022-12-23_at_7.43.23_PM.png)

![Screen Shot 2022-12-23 at 9.46.03 PM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/aadd197a-64b4-4744-9881-39bd03f885ba/Screen_Shot_2022-12-23_at_9.46.03_PM.png)

![Screen Shot 2022-12-23 at 9.38.48 PM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/1220e25a-22d4-461e-8e25-786bd2521b26/Screen_Shot_2022-12-23_at_9.38.48_PM.png)

![Screen Shot 2022-12-23 at 10.35.23 PM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4367d6b1-17b1-49c9-828c-c52cd61ca621/Screen_Shot_2022-12-23_at_10.35.23_PM.png)

s**ignals** 

These signals are used for various other purposes. In general, they will not affect your program unless it explicitly uses them for something.

**this file has alot of information about the SIGUSR** 

[https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html](https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html)

siguser this are used only for user- defined operations  

***function kill*** 

The `kill` function sends the signal signum to the process or process group specified by pid. Besides the signals listed in [Standard Signals](https://www.gnu.org/software/libc/manual/html_node/Standard-Signals.html), signum can also have a value of zero to check the validity of the pid.

The pid specifies the process or process group to receive the signal:

`pid > 0`The process whose identifier is pid. (On Linux, the signal is sent to the entire process even if pid is a thread ID distinct from the process ID.)`pid == 0`All processes in the same process group as the sender.`pid < -1`The process group whose identifier is -pid.`pid == -1`
