# suckless

a set of suckless software

## st

st is a simple terminal implementation for X.

### Install

```bash
git clone https://git.suckless.org/st
cd st
sudo make clean install
```

### Patch

patch -- apply a diff file to an original

usage: `patch < path/to/patch.diff`

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

