#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
from subprocess import check_output

import pytest

def test_path_paths():
    valid_path_string = os.environ['PATH']
    valid_path_list = valid_path_string.split(":")
    stdout_string = check_output(os.path.join("bin", "path"))
    test_path_list = stdout_string.split(b"\n")
    i = 0
    test_path_list_parsed = []
    for test_path in test_path_list:
        if len(test_path) > 0:
            test_path_list_parsed.append(test_path)
    for test_path in test_path_list_parsed:    # test each path in order to confirm that they are the same
        test_string = test_path.decode("utf-8")
        valid_string = valid_path_list[i]
        assert test_string == valid_string
        i += 1
    assert len(test_path_list_parsed) == len(valid_path_list)  # same number of paths detected
