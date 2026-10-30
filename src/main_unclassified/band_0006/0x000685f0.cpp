/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F00DC98C68B848A68315939F6B1CB88CF411B84CF8C7FE31A47B2414F412FFB1
 * Entry: 0x000685f0, Ghidra index: 1148, label: FUN_000685f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000685f0(void)

{
  undefined4 uVar1;
  uint3 in_ECX;
  undefined4 *unaff_ESI;
  undefined4 uStack_4;
  
  *unaff_ESI = 0;
  unaff_ESI[8] = 0xf;
  uStack_4 = (uint)in_ECX;
  unaff_ESI[7] = 0;
  uVar1 = FUN_0001f4d0((int)&uStack_4 + 3);
  FUN_0001f4e0(uVar1);
  *(undefined1 *)(unaff_ESI + 1) = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0x80;
  unaff_ESI[0x11] = 0xf;
  uStack_4 = uStack_4 & 0xffffff;
  unaff_ESI[0x10] = 0;
  uVar1 = FUN_0001f4d0((int)&uStack_4 + 3);
  FUN_0001f4e0(uVar1);
  *(undefined1 *)(unaff_ESI + 10) = 0;
  unaff_ESI[0x29] = 0xf;
  unaff_ESI[0x28] = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3c] = 0;
  unaff_ESI[0x3d] = 0;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x40] = 0;
  unaff_ESI[0x41] = 0;
  unaff_ESI[0x42] = 0;
  unaff_ESI[0x53] = 0xf;
  unaff_ESI[0x52] = 0;
  *(undefined1 *)(unaff_ESI + 0x4e) = 0;
  unaff_ESI[0x57] = 0;
  FUN_00068800();
  unaff_ESI[0x136] = 0;
  unaff_ESI[0x137] = 0;
  unaff_ESI[0x138] = 0;
  unaff_ESI[0x13c] = 0;
  unaff_ESI[0x13d] = 0;
  unaff_ESI[0x13e] = 0;
  unaff_ESI[0x145] = 0xf;
  unaff_ESI[0x144] = 0;
  *(undefined1 *)(unaff_ESI + 0x140) = 0;
  func_0x00068990();
  return;
}
