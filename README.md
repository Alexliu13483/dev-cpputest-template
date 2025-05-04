# Programming C with CPPUTEST Template

This project demonstrates how to write and test C code using the [CppUTest](https://cpputest.github.io/) framework. It includes a simple "Hello, World!" example with unit tests.

## Project Structure

```
.gitignore          # Specifies files to ignore in version control
README.md           # Project documentation
includes/           # Header files
    helloworld.h    # Declaration of the printHelloWorld function
src/                # Source files
    helloworld.c    # Implementation of the printHelloWorld function
tests/              # Unit tests and test-related files
    hello_world_test.cpp  # Unit test for the printHelloWorld function
    Makefile        # Build and test automation
```

## Prerequisites

- A C/C++ compiler (e.g., `gcc` and `g++`)
- [CppUTest](https://cpputest.github.io/) installed on your system
- Make utility (`make`)

## Building and Running Tests

1. Navigate to the `tests` directory:
   ```sh
   cd tests
   ```

2. Build the project and run the tests:
   ```sh
   make
   ```

   This will:
   - Compile the source file `src/helloworld.c` into an object file.
   - Compile the test file `tests/hello_world_test.cpp` and link it with the object file and CppUTest libraries.
   - Run the resulting test executable.

3. Clean up build artifacts:
   ```sh
   make clean
   ```

## Code Overview

### `src/helloworld.c`
This file contains the implementation of the `printHelloWorld` function, which returns the string `"Hello, World!"`.

### `tests/hello_world_test.cpp`
This file contains a unit test for the `printHelloWorld` function using the CppUTest framework. The test verifies that the function returns the expected string.

### `tests/Makefile`
The `tests/Makefile` automates the build and test process. It compiles the source and test files, links them with the CppUTest libraries, and runs the tests.

## Example Output

When you run the tests, you should see output similar to the following:

```
.
OK (1 tests, 1 ran, 0 checks, 0 ignored, 0 filtered out, 0 ms)
```

## License

This project is open-source and available under the MIT License.

## References

- [CppUTest Documentation](https://cpputest.github.io/)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)

