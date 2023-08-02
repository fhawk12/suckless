# suckless

a set of suckless software

## ST

st is a simple terminal implementation for X.

### Install

```bash
git clone https://git.suckless.org/st
cd st
sudo make clean install
```

### Patch

#### [alpha](https://st.suckless.org/patches/alpha/)

_version_ [st-alpha-0.8.2.diff](https://st.suckless.org/patches/alpha/st-alpha-0.8.2.diff)

This patch allows users to change the opacity of the background. Note that you need an X composite manager (e.g. compton, xcompmgr) to make this patch effective.

#### [anysize](https://st.suckless.org/patches/anysize/)

_version_ [st-anysize-0.8.4.diff](https://st.suckless.org/patches/anysize/st-anysize-0.8.4.diff)

By default, st's window size always snaps to the nearest multiple of the character size plus a fixed inner border (set with borderpx in config.h). When the size of st does not perfectly match the space allocated to it (when using a tiling WM, for example), unsightly gaps will appear between st and other apps, or between instances of st.

This patch allows st to resize to any pixel size, makes the inner border size dynamic, and centers the content of the terminal so that the left/right and top/bottom borders are balanced. With this patch, st on a tiling WM will always fill the entire space allocated to it.

#### [blinking cursor](https://st.suckless.org/patches/blinking_cursor/)

_version_ [st-blinking_cursor-20211116-2f6e597.diff](https://st.suckless.org/patches/blinking_cursor/st-blinking_cursor-20211116-2f6e597.diff)

This patch allows the use of a blinking cursor.

To demonstrate the available cursor styles, try these commands:

```
echo -e -n "\x1b[\x30 q" # Blinking block
echo -e -n "\x1b[\x31 q" # Blinking block
echo -e -n "\x1b[\x32 q" # Steady block (default)
echo -e -n "\x1b[\x33 q" # Blinking underline
echo -e -n "\x1b[\x34 q" # Steady underline
echo -e -n "\x1b[\x35 q" # Blinking bar
echo -e -n "\x1b[\x36 q" # Steady bar
echo -e -n "\x1b[\x37 q" # Blinking st cursor
```

When drawing is triggered, the cursor does not blink.

#### [font2](https://st.suckless.org/patches/font2/)

_version_ [st-font2-0.8.5.diff](https://st.suckless.org/patches/font2/st-font2-0.8.5.diff)

This patch allows to add spare font besides default. Some glyphs can be not present in default font. For this glyphs st uses font-config and try to find them in font cache first. This patch append fonts defined in font2 variable to the beginning of font cache. So they will be used first for glyphs that absent in default font.

#### [w3m images](https://st.suckless.org/patches/w3m/)

_version_ [st-w3m-0.8.3.diff](https://st.suckless.org/patches/w3m/st-w3m-0.8.3.diff)

Support w3m images hack. Similar to the patch at the FAQ, but it's simpler, smaller, and doesn't disable double-buffering in st.

Same as the FAQ patch, the cursor line is deleted at the image, because st always renders full lines, even when most of it is empty.

#### [scrollback](https://st.suckless.org/patches/scrollback/)

_version_ [st-scrollback-20210507-4536f46.diff](https://st.suckless.org/patches/scrollback/st-scrollback-20210507-4536f46.diff)

_version_ [st-scrollback-mouse-20220127-2c5edf2.diff](https://st.suckless.org/patches/scrollback/st-scrollback-mouse-20220127-2c5edf2.diff)

Scroll back through terminal output using Shift+{PageUp, PageDown}.

#### [hidecursor](https://st.suckless.org/patches/hidecursor/)

_version_ [hidecursor](https://st.suckless.org/patches/hidecursor/st-hidecursor-0.8.3.diff)

Hide the X cursor whenever a key is pressed and show it back when the mouse is moved in the terminal window.

An alternative to this patch might be [xbanish](https://github.com/jcs/xbanish) or [unclutter](https://github.com/Airblader/unclutter-xfixes).

#### [rightclickpaste](https://st.suckless.org/patches/rightclickpaste/)

_version_ [st-rightclickpaste-0.8.2.diff](https://st.suckless.org/patches/rightclickpaste/st-rightclickpaste-0.8.2.diff)

Pressing right-click pastes from the primary-selection. If combined with the clipboard-patch right-click pastes from the clipboard. Middle-click does nothing.

#### [dracula](https://st.suckless.org/patches/dracula/)

_version_ [st-dracula-0.8.5.diff](https://st.suckless.org/patches/dracula/st-dracula-0.8.5.diff)

Dracula is a color scheme made by Zeno Rocha based on Solarized. This patch make the Dracula color scheme available for st

## DWM

dwm is a dynamic window manager for X. It manages windows in tiled, monocle and floating layouts. All of the layouts can be applied dynamically, optimising the environment for the application in use and the task performed.

### Install

```bash
git clone https://git.suckless.org/dwm
cd dwm
sudo make clean install
```

### Patch

#### [alpha](https://dwm.suckless.org/patches/alpha/)

_version_ [dwm-alpha-20230401-348f655.diff](https://dwm.suckless.org/patches/alpha/dwm-alpha-20230401-348f655.diff)

Allow dwm to have translucent bars, while keeping all the text on it opaque, just like the alpha-patch for st.

#### [default tag applications](https://dwm.suckless.org/patches/default_tag_apps/)

_version_ [dwm-default-tag-apps-20210327-61bb8b2.diff](https://dwm.suckless.org/patches/default_tag_apps/dwm-default-tag-apps-20210327-61bb8b2.diff)

This patch is for those who dedicate each tag to certain general tasks. Tag 1 might be the tag used for all terminal tasks, tag 2 might be for internet/browser things etc.

Setting a key to spawndefault will launch the default application set for the tag you are currently on. You can set the applications to be run for each tag in `config.h` as seen here:

```
*defaulttagapps[] = { "st", "librewolf", "onlyoffice-desktopeditors", "nautilus", NULL, "lutris", "krita", "ardour", "mirage" };
```

The example keyboard shortcut included is `Mod+s` but of course feel free to change it to whatever you want.

#### [hide vacant tags](https://dwm.suckless.org/patches/hide_vacant_tags/)

_version_ [dwm-hide_vacant_tags-6.3.diff](https://dwm.suckless.org/patches/hide_vacant_tags/dwm-hide_vacant_tags-6.3.diff)

This patch prevents dwm from drawing tags with no clients (i.e. vacant) on the bar.

#### [onlyquitonempty](https://dwm.suckless.org/patches/onlyquitonempty/)

_version_ [dwm-onlyquitonempty-20201204-61bb8b2.diff (version 2)](https://dwm.suckless.org/patches/onlyquitonempty/dwm-onlyquitonempty-20201204-61bb8b2.diff)

On the default keybinding of Mod-Shift-Q, it is possible to press it by accident, closing all your work. This patch makes it so dwm will only exit if no windows are open.

## Tabbed

### Install

```bash
git clone https://git.suckless.org/tabbed
or
git https://github.com/yaocccc/tabbed.git

cd tabbed
sudo make clean install
```

more information [https://github.com/yaocccc/tabbed](https://github.com/yaocccc/tabbed)

### Patch

- alpha

  the alpha patch allows tabbed to handle windows with transparency

- autohide

  hides the tab bar if only one tab is open

- awesomebar

  evenly divides tab bar space between the tabbed windows

- bar-height

  allows the height of the bar to be manually specified

- bottomtabs

  moves the tabs / bar to the bottom of the tabbed window

- center

  centers window titles in tabs

- clientnumber

  prints the position number of the client before the window title

