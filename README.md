# 🚤 River Game: Save the Day!

Welcome to the **River Crossing Puzzle**!  
Your mission? Get a human, a mouse, a cat, and a piece of cheese across the river safely... without anyone eating anyone else! 🧀🐭🐱

![River Game]()
---

## 🎮 What’s the Game?

This is a fun and challenging **console game** written in **C++**.  
You control a human trying to ferry themselves and their three mischievous companions across a river. But beware:

- The **cat** wants to eat the **mouse**! 🐱➡️🐭  
- The **mouse** wants to eat the **cheese**! 🐭➡️🧀  
- You only have **15 moves** to get everyone across safely. ⏱️

---

## 🕹️ How to Play

Once you start the game, you'll get a menu like this:

```
1. Move the human alone  
2. Move the human and the mouse  
3. Move the human and the cat  
4. Move the human and the cheese
```

Use the number keys to choose a move. BUT:

❌ You can’t leave the **cat and mouse** alone together  
❌ You can’t leave the **mouse and cheese** alone together  
✅ Only the human can row the boat!

Think carefully and plan your moves! 🧠



## 🧱 How It Works

The game uses simple **ASCII art** to show where each character is after every move. It even checks:

- Are any dangerous pairs alone together? 😱
- Are the characters on the correct side to be picked up? 🚫
- Did you win by getting everyone to the other side safely? 🎉

---

## ✅ Winning the Game

Win by moving everyone across without breaking the rules.  
There are some cool endings based on how many moves you took:

- 🏆 **Perfect win** in 7 moves? You’re a genius!
- 😢 15 moves and still not done? Better luck next time...

---

## 🛠️ How to Run

1. Make sure you have a **C++ compiler** (like g++) installed.
2. Compile the code:

   ```bash
   g++ river_game.cpp -o river_game
   ```

3. Run the game:

   ```bash
   ./river_game
   ```

Enjoy the puzzle! 🤓

---

## 📁 File Structure

```
📄 river_game.cpp   → Main game code  
📄 README.md        → This file (game instructions & info)
```

---

## 🙌 Made With Love

Built by someone who loves puzzles, programming, and storytelling.  
Let the cat, mouse, and cheese live in peace — thanks to you! 💖

