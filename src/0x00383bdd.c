/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE2BB9C8E9C2B3FEAA50A8336C38FF0188480872CD7580655E34CEDF7FCDF0FF
 * Entry: 0x00383bdd, Ghidra index: 13631, label: FUN_00383bdd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383bdd(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00380fc4();
  *(undefined1 *)(iVar1 + 8) = 0x30;
  *(undefined1 *)(iVar1 + 9) = 0x40;
  *(code **)(iVar1 + 0x10) = FUN_003844c1;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x25) = 0;
  *(undefined1 *)(iVar1 + 0x26) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 0x23;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined2 *)(iVar1 + 0x32) = 1;
  *(ushort *)(iVar1 + 0x34) = (ushort)*(byte *)(iVar1 + 3);
  *(undefined2 *)(iVar1 + 0x36) = 0;
  FUN_00381379((undefined1 *)(iVar1 + 8));
  return;
}
