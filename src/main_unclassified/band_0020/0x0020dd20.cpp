/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5C194C90998A92DD36F5C54E5CE954254F22FB236546F4C47245A0D3A7CF663
 * Entry: 0x0020dd20, Ghidra index: 7394, label: FUN_0020dd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020dd20(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(undefined4 *)(in_EAX + 0x2c) = 0xf;
    *(undefined4 *)(in_EAX + 0x28) = 0;
    *(undefined1 *)(in_EAX + 0x18) = 0;
    *(undefined4 *)(in_EAX + 0x34) = 0;
    FUN_001fc7f0();
  }
  return;
}
