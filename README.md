# path

[![Build Status](https://travis-ci.org/chrissimpkins/path.svg?branch=master)](https://travis-ci.org/chrissimpkins/path)

`path` is a command line executable for display of all paths on the system PATH as an ordered list. It is intended for Unix-like systems including Linux and macOS.

![path](https://user-images.githubusercontent.com/4249591/34450807-036fe1b6-ece2-11e7-9841-69c175ecc5b3.png)

## Install

[Download the source code archive](https://github.com/chrissimpkins/path/releases/latest) and unpack it to a directory on your system.  Navigate to the root of the source archive that you unpacked.

Next, compile the executable from source and install with:

```text
$ make && sudo make install
```

`path` is installed on the file path `/usr/local/bin/path`. Confirm that `/usr/local/bin` exists on your system PATH in order to use the application.

## Usage

The command line executable is simply called with:

```text
$ path
```

This request will stream an ordered, newline delimited list of your system PATH directory paths to the standard output stream. The list is in descending order of priority from highest (top) to lowest (bottom).
.
## License

[MIT License](https://github.com/chrissimpkins/path/blob/master/LICENSE)