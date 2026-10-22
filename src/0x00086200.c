/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7054E79DBBDB4D174519A4BF713C67DF46CFC955E937E4A6410070E603BC2CD
 * Entry: 0x00086200, Ghidra index: 1576, label: FUN_00086200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086200(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 7;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  FUN_00087940(unaff_ESI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined1 *)(unaff_ESI + 0x30) = *(undefined1 *)(unaff_EDI + 0x30);
  *(undefined1 *)(unaff_ESI + 0x31) = *(undefined1 *)(unaff_EDI + 0x31);
  *(undefined1 *)(unaff_ESI + 0x32) = *(undefined1 *)(unaff_EDI + 0x32);
  *(undefined1 *)(unaff_ESI + 0x33) = *(undefined1 *)(unaff_EDI + 0x33);
  *(undefined1 *)(unaff_ESI + 0x34) = *(undefined1 *)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  return;
}
