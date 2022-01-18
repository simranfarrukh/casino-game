# Command Line Casino

A simple command-line casino game that stores a player's name and initial account balance. The player can bet any amount from the account balance for a number between 1 to 10. Winner gets double the betting amount. Loser loses the amount bet. After the betting round, you can choose to play again until all your account balance is exhausted.

## Requirements


```
cmake_minimum_required(VERSION 3.21)
project(command_line_casino)

set(CMAKE_CXX_STANDARD 14)

add_executable(command_line_casino main.cpp)
```

## Usage

```
Download the code files
Build and Run
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
