/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B3FF80689F3C982F5B7A01766EA66D89AF6ACCFBD44B6AAE0B4D52A21DE618D
 * Entry: 0x0033e9b3, Ghidra index: 12618, label: FUN_0033e9b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0033e9b3(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0033e970(param_1,param_2);
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
