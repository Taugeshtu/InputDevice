### Info
Basically ZMK builds a custom firmware from keymap definition.
Build process - via github actions; see [[#Implementation]]

https://www.youtube.com/watch?v=O_urj-rF3bQ - ZMK bootstrap
This video contains some bit about bluetooth stack configuring, explore

### Implementation
https://github.com/Taugeshtu/zmk-shield-InControl

Numbers hack: 
- customized [Mod-Morph](https://zmk.dev/docs/behaviors/mod-morph) behaviors
- default == shifted number
- when modifier == modifier (unless shift) + number

Upper layer:
- customized [Hold-Tap](https://zmk.dev/docs/behaviors/hold-tap)
- tap == one-shot into layer
- hold == "while held" layer

Numpad:
- customized [Sticky Layer](https://zmk.dev/docs/behaviors/sticky-layer)
- Calc key == stick up layer
- Numpad keys == key + re-stick the layer
- Any other keys - drop the sticky

### Tools
Keymap editor: https://nickcoutsos.github.io/keymap-editor/
Keymap drawer: https://keymap-drawer.streamlit.app/
ZMK cheat sheet: https://peccu.github.io/zmk-cheat-sheet/

Helpers: https://github.com/urob/zmk-helpers (seems to be a way to simplify .keymap files, which isn't all too hot)