# Snake 🐍
## Description
  A classic snake game made in C++ using SFML library.
#### Developed only for MacOS
## How to use
### Must Have (dependencies)
- CMake 3.1 or above - https://cmake.org/download/
### Building
    cmake . -Bbuild && cmake --build ./build
### Run
    ./snake
### Game features
- The edges of the playing area can't be traversed.
- The food and extra food position is random but they can't appear in Snake's position.
- When Snake eats one item of food, one block is added to the tail and food spawns on random position.
- Speed of Snake depends on its length. The longer Snake is - the faster it is.
- Every 4 seconds the size of Snake is reduced by 1 block.
- If Snake's length is less than 2 blocks - the game is over.
- When Snake eats one item of food - the timer restarts.
- If Snake hits an edge of game area or one of its own blocks - the game is over.
- After each game the final score is saved and displayed.
- Best Scores screen is a list containing the top 10 results. It saves results between app launch.
- Extra food that gives more points.

![snake](https://user-images.githubusercontent.com/46691148/92309802-3d9a6580-efb1-11ea-86dc-2bdead7dc6fd.gif)

## License
Collision is an open-sourced software licensed under the
[MIT license](LICENSE).
