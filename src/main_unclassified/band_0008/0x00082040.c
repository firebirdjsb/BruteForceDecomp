/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3310D01DF0FAF7E0D0C22BEC3E23751EDC3B95BD3C9C92356D28603B91C483E7
 * Entry: 0x00082040, Ghidra index: 1528, label: FUN_00082040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401fe4;
int * FUN_00082040(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*in_ECX + 0x210))();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = &DAT_00401fe4;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
    } while ((int)piVar3 < 0x402000);
    uVar4 = 0;
    iVar5 = 0;
    while( true ) {
      if (*(int *)(iVar2 + 0x14) == 0) {
        return piVar3;
      }
      if ((uint)(*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 4) <= uVar4) {
        return piVar3;
      }
      piVar3 = (int *)(*(int *)(iVar2 + 0x14) + iVar5);
      if (*(int *)(*(int *)(iVar2 + 0x14) + iVar5) == iVar1) break;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    }
    piVar3 = (int *)FUN_00077da0(1);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = piVar3[2];
    }
  }
  return piVar3;
}
