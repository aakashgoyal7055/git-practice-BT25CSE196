# Git Commands I Used

These are the Git commands I used for this assignment and what each one does.

# Setting up

- `git config --global user.name "Aakash Goyal"` - tells Git my name for commits
- `git config --global user.email "aakashgoyal8755@gmail.com"` - tells Git my email for commits
- `git clone https://github.com/aakashgoyal7055/git-practice-BT25CSE196.git` - downloads my GitHub repo to my computer
- `cd git-practice-BT25CSE196` - goes into the repo folder

# Day to day

- `git status` - shows which files I changed or haven't added yet
- `git add <file>` - picks a file to include in my next commit
- `git commit -m "message"` - saves my changes with a short description
- `git push origin <branch>` - uploads my commits to GitHub
- `git pull origin main` - downloads the latest changes from GitHub
- `git log --oneline` - shows my commit history in a short list
- `git diff` - shows exactly what I changed in a file

# Branches

I made a separate branch for each exercise so my work stayed organized.

- `git checkout -b exercise-01` - creates a new branch and switches to it
- `git switch main` - goes back to the main branch
- `git merge exercise-01` - brings the branch's changes into main
- `git branch -d exercise-01` - deletes the branch once it's merged

## My commits

- Add Order class with static order counter
- Add sample output for exercise-01
- Add BankAccount with shared static interest rate
- Add input validation to setInterestRate
- Add README, git-commands.md and .gitignore

## The merge conflict I ran into

I wanted to see a conflict on purpose, so I changed the default interest rate in
`exercise-02/bank_interest.cpp` on two different branches. On one branch I set it to 5.0,
and on `main` I set it to 4.5. When I merged them, Git stopped and said:

CONFLICT (content): Merge conflict in exercise-02/bank_interest.cpp

Git had put markers in the file to show both versions:

HEAD
double BankAccount::interestRate = 4.5;

double BankAccount::interestRate = 5.0;
conflict-demo

I decided to keep 4.5, deleted the marker lines and the 5.0 line, and saved the file. Then I ran:

git add exercise-02/bank_interest.cpp
git commit -m "Resolve merge conflict in default interest rate"

After that `git status` was clean, and I recompiled the program to make sure it still worked.