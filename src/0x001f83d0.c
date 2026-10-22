/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BFFCDB3114A86888272C4E08F2EC3B3B25BEEE13CF7F0FD35A953A61B7CB08F
 * Entry: 0x001f83d0, Ghidra index: 7063, label: FUN_001f83d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001f83d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)XAPILIB__LocalAlloc(0,unaff_ESI + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = 0x1060001;
    puVar1[1] = puVar1 + 6;
    puVar1[5] = unaff_ESI;
  }
  *param_2 = puVar1;
  return (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
}
