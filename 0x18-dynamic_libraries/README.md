The concept of a library is powerful because it allows an end user to link functions via their object file’s during either run-time or compile time — this differs depending on the type of library you create.

Static library is a collection of object files, while dynamic or shared library is a collection of functions compiled and stored in an executable with purpose of being linked by other programs at run-time.

Dynamic libraries provide a means to use code that can be loaded anywhere in the memory. Once loaded, the library code can be used by any number of programs. This way the size of programs using dynamic library and the memory footprint can be kept low as a lot of code is kept common in form of a shared library.
