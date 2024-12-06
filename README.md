### Instructions **`Manual`** File:


# Speed-Typing Game

This project aims to increase your typing speed Octocats! 😄 Here, by me, the author of this project, I allow you to use it, play with my code, and enjoy some fun typing games! 🖥️✨

## Features

- **Random Sentences**: Each round, a random sentence is displayed, and you must type it as quickly as you can.
- **Time Challenge**: You have a time limit to type each sentence correctly. If you exceed the time, the game ends.
- **Score System**: You earn points for each correctly typed sentence. The faster you type, the more points you can accumulate.
- **Game Over**: If you type the sentence incorrectly, the game ends.

## How to Play

1. **Start the Game**: Run the program, and the game will display a random sentence that you need to type.
2. **Typing**: Type the sentence as quickly and accurately as you can. You have a **20-second time limit** for each sentence.
3. **Scoring**: For each correctly typed sentence within the time limit, you earn **10 points**.
4. **Game Over**: The game will stop if you either type a sentence incorrectly or exceed the time limit.

## Modify Time Limit (Optional)

If you'd like to change the time limit, simply modify the value of the `TIME_LIMIT` constant in the code (default is **20 seconds**). Change it to any value you prefer and run the game again!

```c
#define TIME_LIMIT 20  // Modify this line for different time limits
```

## Requirements

- **C Compiler**: The game is written in **C**, so you need a C compiler like **GCC** to compile and run it.

## How to Run

1. Clone this repository:

   ```bash
   git clone https://github.com/Click2Hack/Speed-Typing.git
   ```

2. Navigate to the project folder:

   ```bash
   cd Speed-Typing
   ```

3. Compile the code:

   ```bash
   gcc -o Typing_game Typing_game.c
   ```

4. Run the game:

   ```bash
   ./Typing_game
   ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

### Key Points in the Code and README:

1. **Modify the Time Limit**:
   - In the `README.md`, there's a section that explains how players can modify the time limit by changing the `TIME_LIMIT` value in the 6th line of  ###Code.
   - In the code, this is defined at the top:
     ```c
     #define TIME_LIMIT 20 // Modify this line to change the time limit in seconds
     ```

2. **Game Loop**:
   - The game presents random sentences, and players are given a time limit to type them correctly.
   - If they exceed the time or make a mistake, the game ends, and the score is displayed.

3. **Score System**:
   - For each correctly typed sentence, the player earns 10 points.

---

### Next Steps:
1. **Clone the Repository**: You can clone the repo from GitHub and modify the time limit in the code as described in the `README.md`.
   
2. **Enjoy the Game**: After compiling and running the program, test your typing speed!
Author says ~ There is nothing u can do , u can just do what u really can . So stop worrying about what u cannot and focus on what u can really do:). Love u octocats!!

### For support this project
** Please donate me🫰here **
**`☕Ko-fi page:`** [Ko-fi](https://ko-fi.com/putin)