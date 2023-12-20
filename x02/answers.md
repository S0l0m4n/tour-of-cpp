X.2 - The Structure of This Book
================================
Ex 2
----
C++ is a programming language that can be used to implement basically any conceivable program. This is because it is both close to the hardware, so it can be used to directly manipulate memory and implement efficient code, and it as has sufficient expressive power to implement software abstractions and complex data structures.

The main design aims for C++ were:
* to build a better C
* to support data abstractions via classes
* to enable OOP (object-oriented programming) by allowing relationships between classes to be specified

Some of the design rules to ensure that C++ was a better version of C:
* Zero-overhead rule: what you don't use, you don't pay for.
* It needed to be useful at the time it was created: it was backwards-compatible with C and was readily usable for the machines, programmers and problems at the time.
* It didn't try to be the perfect language because, besides the impossibility of achieving perfection, standards of perfection change.
* It uses dumb linkers so a new linker did not need to be written: immediately usable.
* No implicit violations of the type system were allowed.
* The same support was provided for both user-defined and built-in types.

Key aspects of C++:
* performance
* control over hardware
* object-oriented programming
* STL (Standard Template Library)
* multi-paradigm language
* compatibility with C
* large and active community and ecosystem
* cross-platform support
* popular for game development (Unreal Engine, Unity)
* bias for systems programming

Ex 4
----
C++ is especially suited to systems programming and it can be used equally for both low-level applications that need to directly access hardware and high-level applications manipulating complex data types. It supports both procedural and object-oriented programming styles.

Ex 5
----
### C++ (1985)
* 1. Classes: To implement data abstractions.
* 2. Derived classes: To define relationships between classes.
* 3. Strong typing: To catch user errors from misusing types and classes.
* 4. Overloading: Different implementations of a function for different types.
* 5. `new`: Improvement to `malloc` which can be overloaded, returns data of the correct type and of the correct size, and throws an exception if memory isn't available.

### C++98
* 1. STL: The main C++ library is incorporated into the first ISO C++ standard.
* 2. `bool`: Boolean data type.
* 3. Member templates: Define a class with a type parameter.
* 4. Namespaces: Allow for the same function names in different scopes.
* 5. Exception handling: Standardised with `try`, `catch`, and `throw` keywords.

### C++11
* 1. `auto`: Automatic type inference when declaring variables.
* 2. Range-based `for` loop: Simplified syntax when iterating over the entire range.
* 3. Lambda expressions: Define anonymous functions for functional programming.
* 4. Concurrency support: The `<thread>` library is introduced for multi-threading.
* 5. Move semantics: Allow efficient transfer of resources between objects.

Ex 6
----
In a statically typed language, a variable must be declared to be of a specific type at compile time and cannot change its type during the program. In a dynamically typed language, the type of a variable can change during the program and is normally not even declared, but rather inferred from its usage at run time.

A statically typed language is more likely to prevent the misuse of variables because likely errors are caught by the compiler. However, a dynamically typed language is more flexible and subsequently easier to use.

A statically typed language is normally faster than a dynamically typed one as compile-time optimisations can be made and there is no slowdown from run-time type checking.

Ex 7
----
The major components of the C++ standard library are:
* containers
* iterators
* algorithms
* function objects

Containers define objects which group together many elements, like vectors, lists and queues.

Iterators provide access to data in containers. Functions include `begin` and `end`.

Algorithms offer useful functions for manipulating variables. Different kinds of algorithms include:
* modifying (`transform`)
* non-modifying (`partition`)
* sorting (`sort`)
* searching (`binary_search`)
* numeric (`accumulate`)

Function objects allow a class to include a definition for the `operator()` member function. In this way, a class can be used with function-call syntax.

Ex 9
----
Some advantages of having a library as part of the standard include having a single implementation source for commonly used functions, encouraging the creation of "standard" recipes utilising library functions to solve common programming problems, and reducing the size of user programs.

Ex 10
-----
Real-world C++ applications include:
1. Operating systems (Windows, Unix-based systems)
2. Game development (Unreal Engine, Unity)
3. Graphics and animation (Adobe Photoshop, Autodesk Maya)
4. Web browsers (Google Chrome, Mozilla Firefox)
5. Database management systems (MySQL, PostgreSQL)
6. Embedded systems (automotive systems, IoT devices)
7. Telecommunication systems (network protocols, communication tools)
8. Financial software
9. Flight simulators
10. Computer-aided design (AutoCAD, Solidworks)
11. Scientific and engineering applications
12. Medical imaging software (MRI and CT scan software)
13. Virtual / augmented reality
14. Networking software
15. Industrial automation and control systems
16. Audio processing software (digital audio workstations)
17. Compiler development
18. Parallel computing / high-performance computing
19. Machine learning and artificial intelligence
20. Robotics software

Ex 12
-----
Top-ten list of helpful design and programming rules:
1. Define abstract data types for solving the problem.
2. Break your code up into functions.
3. Each function should have a single responsiblity and no side effects.
4. Ensure interfaces remain fixed and independent of implementation details.
5. Follow a specific coding style.
6. Document code (especially API functions).
7. Comments should describe what or why, not how.
8. Define variables with initial values and as close to where they are used as possible.
9. Place assertions in code and handle exceptions.
10. Major features should be designed first and the design submitted for discussion and approved before implementation commences.
