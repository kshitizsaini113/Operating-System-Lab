<div align="center">
  <img src="https://github.com/kshitizsaini113/Operating-System-Lab/blob/master/OperatingSystem.png">
</div>

# Operating System Lab


### Implementation tree
```
Operating-System-Lab
├── LAB 1
|   ├── file1.sh                          # Echo commands
|   ├── file2.sh                          # Linux commands using shell
|   ├── file3.sh                          # 4 function calculator
│   └── test.sh                           # 4 function calculator
|
├── LAB 2
|   ├── file1.sh                          # 4 function calculator (updated)
│   └── file2.sh                          # Multiplication without using *
|
├── LAB 3
|   ├── commandline.cpp                   # Using command line arguments in c++
│   └── obj                               # Executable file
|
├── LAB 4
|   ├── file1.cpp                         # Factorial using reccursion
|   ├── file1.sh                          # Compiling using shell
|   ├── file2.sh                          # Command line argument in shell
|   ├── linked.c                          # Linked list
|   ├── program.c                         # Basic Linked list
|   ├── sort.c                            # Insertion Sort
|   └── test.c                            # Testing shell in c
|
├── LAB 5
|   ├── file1.c                           # Using fork
|   ├── file2.c                           # Using process id to check process type
|   ├── file3.c                           # Child v/s Parent process
|   ├── file4.c                           # Child v/s Parent process
|   ├── file5.c                           # Triangle using *
|   ├── file6.c                           # *1 pattern using fork
|   └── test.c                            # Empty file created for tesing purpose
│
├── LAB 6
|   ├── file1.c                           # Using pipe command
|   ├── file2.c                           # Understanding pipe command
│   └── file3.c                           # Pipe using child and parent
│
├── LAB 7
|   ├── fcfs.cpp                          # First come first serve code
│   └── fcfs_at.cpp                       # First come first serve with arrival time code
│
├── LAB 8
|   ├── myfunction.h                      # Functions for sjf
|   ├── sjf.cpp                           # Shortest job first code
|   ├── sjf2.cpp                          # Sjf using myfunction.h
│   └── sjf_with_at.cpp                   # Shortest job first with arrival time
│
├── LAB 9
|   ├── round_robin.cpp                   # Round Robin Code
│   └── round_robin_gfg.cpp               # Round Robin code from geeks for geeks
│
├── Other
|   ├── semaphore.c                       # Semaphore
|   ├── semaphore2.c                      # Semaphore
|   ├── banker'salgorithm.cpp             # Banker's Algorithm
|   ├── paging.c                          # Paging Code
│   └── priority_scheduling.cpp           # Priority Scheduling code
│
├── practice
|   ├── file1.sh                          # Hello world program
|   ├── file2.sh                          # Understanding variables
|   ├── file3.sh                          # Empty file
|   ├── file4.sh                          # Arguments
|   ├── file5.sh                          # If-else
|   ├── priority.cpp                      # Incomplete priority scheduling code
│   └── sjf_with_at.cpp                   # SJF with arrival time
│
├── .gitignore                            # Gitignore file
│
├── OperatingSystem.png                   # Image asset
│
├── README.md                             # Readme file
│
├── a.out                                 # Output file
│
├── file1.cpp                             # Factorial code
│
└── file1.sh                              # Factorial using c++ code
```

Further codes required : **Priority Scheduling(premptive), sjf(premptive) and other codes related to Operating System...**


## Open for Contribution

1. Fork the repository and then clone it. For cloning command is:
```
$ git clone "https://github.com/<username>/Operating-System-Lab"
```

3. Do changes and stage them.
```
$ git add <filename>
```

4. Commit you changes with a commit message.
```
$ git commit -m "<message>"
```

5. Push changes to your forked repository
```
$ git push -u origin branchname
```
6. Create a pull request to the upstream repository.

## Synchronize forked repository with Main repository

1. Create upstream as our repository
```
$ git remote add main "https://github.com/kshitizsaini113/Operating-System-Lab"
```

2. Fetch changes from main repository
```
$ git fetch main
```

3. Merge changes after being fetched
```
$ git merge main/master
```

5. Push changes to your forked repository
```
$ git push -f origin master
```
