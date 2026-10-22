/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47986E3C49BDB87637223D90DF1A99E094B39BD0DD69C8A3678BD8FA4599D0C4
 * Entry: 0x00383ffe, Ghidra index: 13638, label: FUN_00383ffe
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383ffe(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00380fc4();
  *(undefined1 *)(iVar1 + 8) = 0x1c;
  *(undefined1 *)(iVar1 + 9) = 0x43;
  *(code **)(iVar1 + 0x10) = FUN_00383fdc;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x3c);
  FUN_00381379((undefined1 *)(iVar1 + 8));
  return;
}
