#!/bin/sh

# IMAGEMAGICK AND INKSCAPE NEED TO BE INSTALLED
echo 'unsigned long icon[] = {'
identify -format '%w, %h,\n' "$1" | sed 's/^/	/'
convert -background none "$1" RGBA: | hexdump -ve '"0x%08x, "' | fmt | sed 's/^/	/'
echo "};"
