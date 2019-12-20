# Advanced Student Class
Create a `Student` class that has four data members: an `std::string` `name_`, an `int` `id_`, an `int[]` `grades_`, and an `int` `num_grades_`. The grades array will have a capacity of 10 elements.

Create a default constructor that sets `name_` to "Stu Dent", `id` to 123456789, `grades_` empty, and `num_grades_` to 0.

Create a non-default constructor that receives an `std::string` and an `int` for the student's name and id, respectively. Remember to set `num_grades_` to 0 as well.

Create accessor and mutator functions for `name_`, `id_`, and `num_grades_`.

Create a function called `add_grade` that receives an `int` and adds it to the `grades_` array if there is space. The grade should not be added to the array if it exceeds 10 and displays the error message: `Array full, unable to add grade`.

Create another function called `calculate_grade` that returns the average of the grades as a `double`. Take note that if the user added fours grades, then the function should return the average of those four grades only.

Finally create a function called `print_student` that prints the student's name and all their grades.

The `main.cpp` has already been created for you. It creates a `Student` object, adds grades to it, calls the `print_student` function, then prints the student's total grade. You do not need to modify `main.cpp`.

Place your class in `student.hpp`. Member functions that take more than five lines or use complex constructs should have their function prototype in `student.hpp` and implementation in `student.cpp`.

## Sample Output:
```
Lonnie Hansen 965137824
Test Grades:
95
88
92
77
84
Total grade = 87.20
```

# Submission checklist
1. Created function prototype and stored in `.hpp` file.
1. Created function implementation and stored in `.cpp` file (see [reference](https://github.com/ILXL-guides/function-file-organization)).
1. Call function in the driver
1. Compiled and ran the driver (`main`).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (`make test`).
1. Followed advice from the stylechecker (`make stylecheck`).
1. Followed advice from the formatchecker to improve code readbility (`make formatcheck`).

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex02-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd labex02-tuffy
```

You also need to navigate into the problem you want to answer. To access the files needed to answer problem 1, for example, you need to issue the following command.

```
cd prob01
```

When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in `prob01`, you can issue the following commands to go to the parent folder then go into another problem you want to answer; `prob02` for example.

```
cd ..
cd prob02
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code saved in `student.cpp` and `main.cpp`, and into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cpp student.cpp -o main
./main
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission
1. When everything runs correctly,  let's copy your code into the Github repository. The first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type . (period) to add all modified files.

    ```
    git add main.cpp student.hpp student.cpp
    ```
1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area.

    ```
    git commit
    ```
1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```
    When you're done, make sure you type `git commit` again.    
1. Git will ask you to describe what you have added to the staging area. By default, you will use a command-line based editor called *nano*. Go ahead and provide a description then press <kbd>Ctrl</kbd> + <kbd>x</kbd> to exit. Press <kbd>Y</kbd> to confirm that you want to make changes and then press <kbd>Enter</kbd>.
1. Lets push all changes to the Github repository using git's `push` command. Provide your Github username and password when you are asked.

    ```
    git push
    ```
1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message in the text area such as "finished lab exercise" and click on `Save changes`. Finally click on `Submit assignment` to inform your instructor that you are done.
