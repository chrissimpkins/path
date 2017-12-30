# path

[![Build Status](https://travis-ci.org/chrissimpkins/path.svg?branch=master)](https://travis-ci.org/chrissimpkins/path)

`path` is a command line executable for display of all paths on the system PATH as an ordered list. It is intended for Unix-like systems including Linux and macOS.

![path](https://user-images.githubusercontent.com/4249591/34450807-036fe1b6-ece2-11e7-9841-69c175ecc5b3.png)

## Install

### Build Dependencies

Please confirm that `make` is installed to use the following instructions for installation of `path`. 

macOS users must install XCode with the command line developer tools in order to compile `path` from source. You can install XCode from the App Store.

Most Linux users can install `make` with the respective Linux distro package manager if it is not available by default.

### Download path source code

[Download an archive of the `path` source code](https://github.com/chrissimpkins/path/releases/latest) and unpack it to a directory on your system.  Navigate to the root of the source code archive that you unpacked.

### Compile the executable

Next, compile the executable from the source code and install with:

```text
$ make && sudo make install
```

`path` is installed on the file path `/usr/local/bin/path`. Confirm that `/usr/local/bin` exists on your system PATH in order to use the application.

## Usage

`path` is executed with a simple command line request:

```text
$ path
```

This request will stream an ordered, newline delimited list of your system PATH directory paths to the standard output stream. The list is in descending order of priority from highest (top) to lowest (bottom).

## License

[MIT License](https://github.com/chrissimpkins/path/blob/master/LICENSE)