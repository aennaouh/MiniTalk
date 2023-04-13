# MiniTalk # Minitalk

Minitalk use it to send message bit by bit by shifting left the message to be sent by one each time. And by using some bitwise operator like "&" to get the last bit of the number it will use it as the message.

s**ignals** 

These signals are used for various other purposes. In general, they will not affect your program unless it explicitly uses them for something.

**this file has alot of information about the SIGUSR** 

[https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html](https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html)

siguser this are used only for user- defined operations  

***function kill*** 

The `kill` function sends the signal signum to the process or process group specified by pid. Besides the signals listed in [Standard Signals](https://www.gnu.org/software/libc/manual/html_node/Standard-Signals.html), signum can also have a value of zero to check the validity of the pid.

The pid specifies the process or process group to receive the signal:

`pid > 0`The process whose identifier is pid. (On Linux, the signal is sent to the entire process even if pid is a thread ID distinct from the process ID.)`pid == 0`All processes in the same process group as the sender.`pid < -1`The process group whose identifier is -pid.`pid == -1`

The function **`void handler(int sig, siginfo_t *c_pid, void *content)`** is a signal handler function, which is called by the operating system when a specific signal is delivered to a process. The three parameters of this function are as follows:

1. **`int sig`**: This is the signal number that triggered the call to the handler. It can be used to determine which signal caused the handler to be called.
2. **`siginfo_t *c_pid`**: This is a pointer to a **`siginfo_t`** struct, which contains additional information about the signal, such as the process ID of the sender (if the signal was sent by another process), or the status of a child process that caused a **`SIGCHLD`** signal to be generated.

The

```
handler
```

function is a user-defined signal handler that is called when a specific signal (specified by the

```
sig
```

argument) is received by a process. The

```
siginfo_t
```

struct, passed as the

```
pid
```

argument, contains information about the signal, such as the process ID of the sending process and the value of any data sent with the signal.
The

```
counter
```

argument is a pointer to void, this argument can be used to pass any additional data to the signal handler. It's the responsibility of the programmer to cast it to the appropriate data type.
