#! /bin/sh
find . -print | awk 'END {print NR}'
