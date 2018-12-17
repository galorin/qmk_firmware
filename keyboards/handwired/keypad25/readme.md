# keypad25 handwired

Custom handwired 25 key keypad.

http://www.keyboard-layout-editor.com/#/gists/cc770839ef896d568a55dd0b3d115656

Keyboard Maintainer: [Sarah](https://github.com/galorin)  
Hardware Supported: Custom handwired 25 key keypad  
Hardware Availability: Complete DIY.  STL files in-progress.

Make example for this keyboard (after setting up your build environment):

    make handwired/keypad25:default

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

In the current setup, this is a 25 keypad set up for Visual Studio macros.  The keymap and associated RGB keycolors are located here:

http://www.keyboard-layout-editor.com/#/gists/cc770839ef896d568a55dd0b3d115656

The first layer covers my personal preference and is a basic implementation.  Colors are not implemented yet.  The second layer is incomplete and not implemented yet.

Planned improvements:

 * Double-tap for the following
   * Start/restart debug
   * Comment/uncomment code
   * Copy/cut selection
 * Layer toggle/momentary
 * per-key, per-layer coloring
 * RGB underglow
 * Media shortcuts with coloring
 * Application shortcuts with coloring
 
 Reference tetris keyboard in QMK/keyboards.
