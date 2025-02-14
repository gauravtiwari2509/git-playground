# 🛠️ Git/GitHub Workshop Challenge Repository

<p align="center">
  <img src="assets/gitworkshop.jpg" />
</p>


Welcome to the **Git/GitHub Workshop Challenge Repository**! 
This repository is part of the hands-on workshop organized by **CLUB EXCEL** to help you practice your Git, GitHub, and debugging skills. By participating in this challenge, you'll learn how to collaborate on GitHub, fix bugs, and ensure code quality using automated tests.

## 🚀 About The Challenge

This repository contains a simple C project with some source code and automated test cases. However, there are **bugs in the source code**, and as a result, **all test cases are currently failing**. Your task is to use the skills you have learnt in this workshop to send a **Pull Request (PR)** that fixes the bugs so that all the test cases pass!

## :memo: Your tasks
- Use the **standard github workflow** to get a fork of this repo on your local development environment.
- Fix the bugs in the C files in [src](./src/) directory.
- Make sure your test cases pass! Run `make test` to verify.
- Once you are happy with the results: create a PR!

If the test cases pass, your PR should automatically merge with this repo.

## 🧩 Repository Structure

Here’s what you’ll find in this repository:
```
.
├── src/ # Source code files (with bugs!)
├── tests/ # Test cases for the source code
├── Makefile # Makefile to build and run tests
├── README.md # This file
└── .github/workflows/ # GitHub Actions workflow for automated testing
└── assets/ # banner image and other stuff
```

## :scroll: Rules
- The first to send a PR that **passes all test** cases **wins**!
- **Partially passing PRs will not qualify**. You must pass all the testcases since `make test` will not pass if any test case fails.
- PRs **should merge**. If due to some technical error a PR fails to auto-merge we will look for the **PR that passes all the test cases**.
- **Do not send spam PRs!**: Only 2000 action minutes are given for each repo. If we find a participant sending too many spammy PRs we might disqualify them.


## :clipboard: Notes
> [!WARNING]
> **Warning**: Do not modify any other files except the ones in the [src](./src/) folder. Do not modify `.h` files in the [src](./src/)

> [!NOTE]
> You can run tests locally. Simply run `make test` in your local dev environment.

> [!IMPORTANT]
> **DO NOT MODIFY TEST CASES**! Do not modify anything in the [tests](./tests/) directory or in the [.github/workflows](.github/workflows/) directory