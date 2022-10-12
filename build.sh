#!/bin/bash

gcc "$1" -o app-test -lpthread  -I /usr/include/postgresql -lpq


