<!-- REPOSITORY README IN MARKDOWN -->
<!-- MADE BY ISHRAQ HASAN -->

# Exploring Modern C++ 🚣🏻‍♀ ➡️ 🌊 ++

This repository is purely for self-learning, and not suitable for use in any kind of scenario but educational. You can use, modify and fork as you please.

### 📂 About the directory names

`XX-YYYY_YYYY`

Here, `XX` represents a number, serially populated with each "mini-project". `YYYY_YYYY` represents a title that I use to identify which features I used. Title is in snake case, while the hyphen after the number is mandatory.

### 🌟 Features in C++

University covers C++98 and very minimal syntax of C++11, which is not suitable for modern industrially accepted C++ use. Here, I try to go through each feature of the language added since C++11, all through C++20. Things like `constexpr` and `iterator_list`, are what I am referring to, when I mean 'features'. I focus mostly on the OOP side of C++, and less on the functional aspect. Although I use some functional syntax because of personal bias.

### 💫 Stuff outside C++

I am also using some design patterns in various places in this repository, but I am not making any useful applications here, just exploring. Furthermore, I try not to overuse design patterns, because of [Maslow's Hammer](https://en.wikipedia.org/wiki/Law_of_the_instrument)

### 🔨 Build system

I am using the `clang` compiler in all examples. All directories contain a simple `Makefile`, as well as the directories: `src`, `build`, and `include`. Any `*.h` files go inside `include`, and `*.cc`(or `*.cpp`) go in `src`. The `build` directory contains the output.

For each directory starting with the number `XX`, compile as follows:

```
make clean
make
./build/$(echo "${PWD##*/}" | cut -d"-" -f1)
```

The last command simply takes the prefixed `XX` number of the current directory name.

<details>
<summary> What does the last command up there do? </summary>

#### 👓 Explanation

Assume we are in the `00-constexpr_fibonacci` directory. As `make` creates an executable called `00` inside the build folder, we need to run `./build/00`. To make this into a generalized command for all directories of this repo, we use the ✨fancy✨ stuff, i.e. running `echo "${PWD##*/}" | cut -d"-" -f1` inside this directory returns `00`.

</details>

---

<p align="center">
    <img alt="A quote by Bjarne Stroustrup" src="https://i.postimg.cc/4yPCTYdm/cplusplusquote.jpg" />
</p>

---
