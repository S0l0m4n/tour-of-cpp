X.3 - The Basics
================
Ex 2
----
A compiler converts source code into object files, which are program chunks that are machine-readable, that is, coded in the underlying instruction set of the target machine, e.g. an x86 processor. Often there will be references in the compiled object file to functions in other object files or external library functions, so the linker is used to construct the final program from all of the component object files and hard links to compiled libraries on the operating system. The output of the linker is what is run as the "executable" program.

Ex 4
----
Three C++ compilers are:
* the GCC C++ compiler (`g++`)
* the Microsoft Visual C++ compiler, MSVC (`cl`)
* the Clang C++ compiler (`clang++`)

Ex 7
----
An invariant is a property of an object (or operation etc.) that is expected to hold for all instances of said object.

For example, in C++, we can talk about a *class invariant*, which is a condition that holds for all instances of a class. We can define a `Point` class which defines a two-dimensional point `(x, y)` and require that `x` and `y` are always valid numbers. We can code this condition into the class, thereby creating an invariant.
