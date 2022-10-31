In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

Standard output is a place to which a program can send information (e.g., text). The program never “knows” where the information it sends to standard output is going (Figure 5-3). The information can go to a printer, an ordinary file, or the screen. The following sections show that by default the shell directs standard output from a command to the screen 1 and describe how you can cause the shell to redirect this output to another file.

Standard input is a place a program gets information from; by default, the shell directs standard input from the keyboard. As with standard output, the program never “knows” where the information comes from. The following sections explain how to redirect standard input to a command so it comes from an ordinary file instead of from the keyboard.

In addition to standard input and standard output, a running program has a place to send error messages: standard error. By default, the shell directs standard error to the screen. Refer to page 292 (bash) and page 389 (tcsh) for more information on redirecting standard error.
