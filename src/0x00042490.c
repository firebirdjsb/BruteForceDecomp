/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4144FDA6DE6ACEC7DD289D4AF418CB6823737A5221B687B0C195A1B3F6D42E46
 * Entry: 0x00042490, Ghidra index: 505, label: FUN_00042490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00042490(void)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0xffffffff;
  local_10 = 0;
  local_14 = 0x7f7fffff;
  local_c = 0;
  local_8 = 0;
  FUN_000120f0();
  FUN_0011dfa0();
  cVar2 = FUN_000416a0(local_2c,0);
  if (cVar2 != '\0') {
    FUN_000428c0(local_2c);
    *(undefined4 *)(unaff_EDI + 0x944) = local_18;
    *(undefined4 *)(unaff_EDI + 0x940) = local_1c;
    *(undefined4 *)(unaff_EDI + 0x948) = local_14;
    *(undefined1 *)(unaff_EDI + 0x950) = local_c;
    *(undefined4 *)(unaff_EDI + 0x94c) = local_10;
    *(undefined4 *)(unaff_EDI + 0x954) = local_8;
    FUN_00025730(unaff_EDI + 0x930,1,1);
    **(undefined4 **)(unaff_EDI + 0x1a8) = 1;
    iVar1 = *(int *)(unaff_EDI + 0x1a8);
    *(undefined4 *)(iVar1 + 0x34) = 0x3fc00000;
    *(undefined4 *)(iVar1 + 0x2c) = 0x3fc00000;
    *(byte *)(iVar1 + 0x30) = *(byte *)(iVar1 + 0x30) & 0xf9 | 1;
    *(undefined4 *)(unaff_EDI + 0x94c) = 0xc0a00000;
  }
  FUN_0001bc90();
  return cVar2 != '\0';
}
