// This is Tobsi's CHIP-8 Emulator (TC8E)
// TC8E sounds like TC 80.

//#include <iostream>
/* =====================================================================================================================
 * EMU DEV
 * =====================================================================================================================
 * */

#include "SDL.h"

#include "WindowRender.h"

//#include <string>

int main(int argc, char* argv[])
{
    WindowRender().WindowStartup("TC8E", 600, 400);

    return 0;
}

/** [ARTICLES ON DEVELOPING AN EMULATOR / CHIP-8 EMULATOR]
 * https://en.wikipedia.org/wiki/CHIP-8
 * http://www.multigesture.net/articles/how-to-write-an-emulator-chip-8-interpreter/
 * http://devernay.free.fr/hacks/chip8/C8TECH10.HTM
 * http://www.emulator101.com/welcome.html
 * http://www.emulator101.com/introduction-to-chip-8.html
 * https://austinmorlan.com/posts/chip8_emulator/
 *
 * // Wiki //
 * https://en.wikipedia.org/wiki/Bitwise_operation
 *
 * // CMake //
 * https://github.com/mbcrawfo/GenericMakefile
 *
 * // C/C++/SDL //
 * http://www.iso-9899.info/wiki/Main_Page
 * https://wiki.libsdl.org/FrontPage
 *
 * // CHIP-8 ROM PACK //
 * https://www.zophar.net/pdroms/chip8/chip-8-games-pack.html
 *
 * // CHIP-8 Specs //
 *
 * CHIP-8 8-bit registers (Labled V0 - VF. Each Register can hold any valu form 0x00 - 0xFF)
 * Mem: 4096 bytes of memory        0x000 - 0xFFF       0x000 - 0x1FF CHIP-8 Interoreter    0x050 - 0x0A0 16 characters (controller)    0x200 - 0xFFF
 * https://austinmorlan.com/posts/chip8_emulator/   16-bit Index Register
 *
 * */