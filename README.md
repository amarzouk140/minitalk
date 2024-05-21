# Minitalk

Minitalk is a small data exchange program that uses UNIX signals to communicate between a server and a client. The server will be able to receive messages from the client, and the client can send strings to the server.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The purpose of this project is to understand and implement inter-process communication in UNIX systems using signals. The project includes a server and a client program where the client sends a string message to the server and the server prints it.

## Features

- Server can handle multiple messages from clients.
- Client sends string messages to the server.
- Communication is achieved using UNIX signals `SIGUSR1` and `SIGUSR2`.

## Requirements

- GNU Make
- GCC

## Installation

1. Clone the repository:

    ```sh
    git clone https://github.com/amarzouk140/minitalk.git
    cd minitalk
    ```

2. Compile the project:

    ```sh
    make
    ```

This will create two executables: `server` and `client`.

## Usage

1. **Start the server:**

    ```sh
    ./server
    ```

    The server will print its process ID (PID). Note this PID as it is required for the client to send messages.

2. **Send a message from the client:**

    ```sh
    ./client <server_pid> "Your message here"
    ```

    Replace `<server_pid>` with the PID printed by the server and `"Your message here"` with the message you want to send.

### Example

1. Open a terminal and start the server:

    ```sh
    $ ./server
    Server PID: 12345
    ```

2. Open another terminal and send a message from the client:

    ```sh
    $ ./client 12345 "Hello, Minitalk!"
    ```

    The server terminal should display:

    ```sh
    Received message: Hello, Minitalk!
    ```

## Project Structure

- **server.c:** Contains the server implementation.
- **client.c:** Contains the client implementation.
- **Makefile:** Makefile to compile the project.
- **libft:** Directory containing the Libft library used in the project.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvement, feel free to open an issue or create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
