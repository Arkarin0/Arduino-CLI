# Providing Build Flags using CLI

This section explains how we can compile a Sketch for multiple board using the Arduino CLI arguments.
And provide compile time flags to the sketched.

This flags can then be evaluated by the sketch using the `#ifdef` and `#ifndef` pragmas.

We will configure an example build and compile the Sketch for the `Arduino Mega`, `Teensy 3.6`  and `Teensy 4.1`.

References:

+ [Getting started](https://github.com/arduino/arduino-cli/blob/master/docs/getting-started.md)
+ [Add Teensy as 3rd Party](https://www.pjrc.com/teensy/td_download.html)
+ add Flags [forum](https://forum.arduino.cc/t/arduino-cli-pass-flags-to-sketch/680474) and [`--build-property`](https://arduino.github.io/arduino-cli/0.35/commands/arduino-cli_compile/#options)

## Special Handling for Teensy Boards

Teensy boards do not support the `build.extra_flags` argument for `--build-property` property.
To add custom Flags we need to override the internal flags that the maufacturer passes to the compiler.

To do that we must provide the CPU type to the compiler by setting `--build-property "build.flags.defs=-D%PROCESSORTTYPE% -DMyFlag"` where `%PROCESSORTTYPE%` is the type of the processor used on the board.

To provide custom flags to the compiler when using the IDE you need to edit the `platform.txt` files. A description on how to do that can be found [here](https://ecampusontario.pressbooks.pub/rwsnotes/back-matter/advanced-arduino-ide-configuration/).

more information can be found here:

+ list of [%PROCESSORTTYPE%](https://ecampusontario.pressbooks.pub/rwsnotes/back-matter/advanced-arduino-ide-configuration/) flags and a simple workarround
+ [`build.extra_flags` support](https://forum.pjrc.com/threads/72556-Request-for-Arduino-IDE-quot-extra_flags-quot-support) and a [workaround](https://github.com/ssilverman/QNEthernet/blob/d46986e6fef40e9be2e88db56d50239bb0d1b80c/README.md#configuring-macros-using-the-arduino-ide)
