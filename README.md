# st

### Introduction
This is a fork of [st](https://st.suckless.org/) with best predefined congifutaions.

[st](https://st.suckless.org/) is a simple terminal emulator for X which sucks less.

### Requirement
In order to build st you need the Xlib header files.

### Installation
Edit config.mk to match your local setup (st is installed into the ~/.local by default).

Afterwards enter the following command to build and install st:
```
git clone https://github.com/elementdavv/st.git
cd st
make clean install
```

### Running st
If you did not install st with make clean install, you must compile the st terminfo entry with the following command:
```
tic -sx st.info
```
See the man page for additional details.

### Configutaion
st use xresources for customization. Edit `xresources` to suit your needs then run following commands to apply.
```
xrdb -merge /path/to/xresources
```

st icon can be customized. Run following command to create new `icon.h` file then recompile project.
```
./netwmicon.sh /path/to/youricon.png > icon.h
```

### Patches activated
- alpha
- anygeometry
- blinking cursor
- boxdraw
- clipboard
- copyurl
- desktopentry
- disable bold italic fonts
- font2
- keyboard select
- ligatures
- netwmicon
- newterm
- open copied url
- rightclickpaste
- scrollback
- spoiler
- sync
- undercurl
- vertcenter
- xresources

### Keyboard shortcuts
|key                    |function               |
|:----------------------|:----------------------|
|shift + ctrl + pgup	|zoom in				|
|shift + ctrl + pgdown	|zoom out				|
|shift + ctrl + home	|zoom reset				|
|shift + ctrl + c		|copy					|
|shift + ctrl + v		|paste					|
|shift + ctrl + y		|paste selection		|
|shift + insert			|paste selection		|
|shift + ctrl + return	|new st instance		|
|alt + l				|copy url on screen		|
|alt + o				|open copied url		|
|shift + pageup			|scroll window up		|
|shift + pagedown		|scroll window down		|
|shift + ctrl + esc		|keyboard selection	mode|

### Mouse shortcuts
|mouse                  |function               |
|:----------------------|:----------------------|
|mouse scroll			|scroll window			|
|mouse right click		|paste					|

### Keyboard selection shortcuts
|key           |function                                                    |
|:-------------|:-----------------------------------------------------------|
|h, j, k, l    |move cursor left/down/up/right (also with arrow keys)		|
|!, \_, *       |move cursor to the middle of the line/column/screen			|
|Backspace, $  |move cursor to the beginning/end of the line				|
|PgUp, PgDown  |move cursor to the beginning/end of the column				|
|Home, End     |move cursor to the top/bottom left corner of the screen		|
|/, ?          |activate input mode and search up/down						|
|n, N          |repeat last search, up/down									|
|s             |toggle move/selection mode									|
|t             |toggle regular/rectangular selection type					|
|Return        |quit keyboard_select, keeping the highlight of the selection|
|Escape        |quit keyboard_select										|

### Credits
Thanks to [st](https://st.suckless.org/).
