/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BC1C1B15A3DFC004594F2403197F30435B4BE459C6473F3260AE3111F820BB7
 * Entry: 0x0034c68a, Ghidra index: 12965, label: FUN_0034c68a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0034c68a(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0034c58a(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return puVar1;
}
