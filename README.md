# Linetech test

Hi,

Clone this repository. Answers for every question should be placed in separate directories, named the same as the task number. Hyperlink to your public clone of this repository, uploaded to any GIT platform, will be treated as an answer.

If you don’t know how to clone or you are not able to upload answers to (any) git-enabled platform, e.g. GitHub, GitLab. Then download the repository as a .zip file and send it back to us with answers, packed as .zip, to michal.modzelewski@linetech.pl

## Task 1

Write a program, in C++ language, that launches two separate threads, using std::async. The first thread will have to return the arithmetic average of the dataset, and the second one should return the median value. Threads should be running in parallel. When return values from threads are collected, the main thread has to compare them and write to standard output which of them is bigger. Input data is in “1/data.txt”.

## Task 2

Imagine there is a robotic arm, e.g. Universal Robots UR10, with a laser distance sensor attached to its end effector. Let assume that the robotic arm base link is at the origin of a coordinate system. Describe how to calculate distance from the point that was measured by the sensor, to the robotic arm base link.

## Task 3

Choose a method of communication, that is available in ROS (Robot Operating System), best suited for broadcasting sensor data, and one that is best for sharing long lasting (>30s) computational resurce. Explain your position.

## Task 4

Write template class definition in language C++17. Class should:

- have template type parameter n, assume that n will be always a trivial type,
- have private data member 'x' of type n,
- have public reference getter for 'x' member,
- can not be default constructable,
- have parametrized constructor,
- be copy and move assignable/constructable. 

## Disclaimer

If you cannot answer some of the above questions, don’t worry. We will consider each replay sent.



**Good luck**

***LT Team***



