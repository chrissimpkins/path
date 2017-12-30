# path

[![Build Status](https://travis-ci.org/chrissimpkins/path.svg?branch=master)](https://travis-ci.org/chrissimpkins/path)

`path` is a command line executable for display of the system PATH as an ordered list. It is intended for Unix-like systems including Linux and macOS.

## Install

`path` is installed on the path `/usr/local/bin/path` using a standard make installation approach:

```text
$ make && sudo make install
```

Confirm that `/usr/local/bin` exists on your system PATH in order to use the application.

## Usage

The command line executable is simply called with:

```text
$ path
```

This request will stream an ordered, newline delimited list of your system PATH paths to the standard output stream. The list is in descending order from highest priority (top) to lowest priority (bottom).
.
## License

[MIT License](https://github.com/chrissimpkins/path/blob/master/LICENSE)