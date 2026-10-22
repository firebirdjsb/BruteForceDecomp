/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7316EC661FC9FE3F11000E61EC0FA4C6203787F15EF364C6294C9B85B40F50C9
 * Entry: 0x0008a130, Ghidra index: 1654, label: FUN_0008a130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008a130(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[0x15] = 7;
  unaff_EDI[0x14] = 0;
  *(undefined2 *)(unaff_EDI + 0x10) = 0;
  unaff_EDI[0x18] = 0;
  unaff_EDI[0x1a] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[1] = in_EAX;
  FUN_0008b820(unaff_EDI);
  unaff_EDI[0xe] = param_2;
  if (unaff_EDI[9] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[10] = 0;
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[7] = 0;
  unaff_EDI[0x16] = 0;
  unaff_EDI[2] = param_1;
  *(byte *)(unaff_EDI + 0x1b) = *(byte *)(unaff_EDI + 0x1b) & 0x82 | 2;
  return;
}
