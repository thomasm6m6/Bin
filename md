#!/bin/sh

#sed 's/\\\(["\\]\)/\1/g'
pandoc -f gfm -t markdown_mmd -o - | lowdown -M 'title=' -t term
