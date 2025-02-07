# Evaluative Lab 3

## Learning objectives

* Defining and calling functions
* Thinking recursively to solve problems.

## Before you start

* Remember, the `char` datatype is an encoding of integer values. In the ASCII encoding that C uses, `a` has a value one less than `b`, `b` has a value one less than `c`, and so on.
* This lab is to assess your understanding of recursion. Non-recursive solutions will receive a zero.

## Starting point

The given starter code contains *skeletons* of four functions. It compiles but does not produce expected results at this point. Make sure you understand the given code.

Use the shortcut Ctrl + Shift + V to render the README.md file.

DO NOT CHANGE THE MAIN FUNCTION.

## Tasks

### Task 0

Fill out the `Author` and `BITS_ID` fields in the comments at the top of the file. Update the `Date` to today's date.

### Task 1

Read the description (`@brief`) of the `repeat` function and the given examples.

Implement the function `repeat` based on this.

Run your code, select option `repeat` and test your function.

### Task 2

Implement and test the function `enumerate` as done above.

### Task 3

Implement and run the function `double_enumerate` as done above.

### Run against the given test cases

How do you know if your program is correct? We have some *test cases* that do this for you.
Go to the terminal and run the command

```sh
python3 autograder.py <BITSID>.c Lab04-tests.json
```

Your goal is to make *all* test cases pass before you submit your lab.

Try for other inputs as well. Your solution will be evaluated with other test cases.

## Preparing the submission

1. First, make sure the .c file is renamed properly and works as expected (Your ID should end with a `G`).

2. Make sure you have only ONE `.c` file in your working folder.

3. Run the following command in the terminal to make the program to prepare submission an executable:

   ```sh
   chmod u+x prepare_submission
   ```

4. Execute that program to produce the submission file `YOURBITSID.tar.gz`:

   ```sh
   ./prepare_submission
   ```

   The command will only work on CC lab machines with Ubuntu.

5. Upload the created `YOURBITSID.tar.gz` file to the appropriate assignment on <https://quanta.bits-goa.ac.in/>.

   Be sure to not write anything in the 'Save As' option on the submission form while uploading your solution (`tar.gz` file) on quanta.

   Also, check that the correct `tar.gz` file has been uploaded before logging out from quanta.

   Also, ensure that your submission is not in a draft form.
