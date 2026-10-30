/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D90E1992B06AF5CF76CAC2BADEBA0BBFA91ACF2ECAC24E52A4DB9BFD8F122F22
 * Entry: 0x00382086, Ghidra index: 13582, label: FUN_00382086
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ee5c;
undefined4 * FUN_00382086(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1 + 3U & 0xfffffffc;
  KeRaiseIrqlToDpcLevel();
  if (DAT_0037ee5c < uVar3) {
    KfLowerIrql();
    puVar2 = (undefined4 *)ExAllocatePoolWithTag(param_1,param_2);
  }
  else {
    puVar2 = (undefined4 *)(-0x7ffff000 - DAT_0037ee5c);
    DAT_0037ee5c = DAT_0037ee5c - uVar3;
    KfLowerIrql();
    puVar4 = puVar2;
    for (uVar3 = param_1 + 3U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0xcccccccc;
      puVar4 = puVar4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = 0xcc;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar2;
}
