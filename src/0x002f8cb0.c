/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D77D91A8F7D7CE9FF9D5205EFACE6DA3D9C54CE2561EE4C18B71D45A30C5A5B6
 * Entry: 0x002f8cb0, Ghidra index: 10963, label: FUN_002f8cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7d18;
extern uint32_t DAT_00412ad8;
extern uint32_t DAT_00412adc;
extern uint32_t PTR_DAT_003b7d10;
extern uint32_t PTR_DAT_003b7d14;
void FUN_002f8cb0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)PTR_DAT_003b7d10;
  puVar4 = (undefined4 *)PTR_DAT_003b7d14;
  if (DAT_003b7d18 == DAT_00412adc) {
    puVar1 = (undefined4 *)FUN_002f8e00(DAT_003b7d18 << 4);
    puVar4 = (undefined4 *)PTR_DAT_003b7d10;
    puVar5 = puVar1;
    for (uVar2 = DAT_003b7d18 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = puVar1 + DAT_003b7d18 * 2;
    puVar5 = (undefined4 *)PTR_DAT_003b7d14;
    puVar6 = puVar4;
    for (uVar2 = DAT_003b7d18 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    DAT_003b7d18 = DAT_003b7d18 * 2;
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (DAT_003b7d18 != 0x40) {
      FUN_002f8e70(PTR_DAT_003b7d10);
    }
  }
  PTR_DAT_003b7d14 = (undefined *)puVar4;
  PTR_DAT_003b7d10 = (undefined *)puVar1;
  iVar3 = (param_2 + 0x1fU & 0xffffffe0) +
          (((DAT_00412ad8 >> 5) - (param_2 + 0x1fU >> 5)) + 1 & 0x1f) * 0x20;
  DAT_00412ad8 = DAT_00412ad8 + iVar3;
  *(int *)(PTR_DAT_003b7d14 + DAT_00412adc * 4) = iVar3;
  *(undefined4 *)(PTR_DAT_003b7d10 + DAT_00412adc * 4) = param_1;
  DAT_00412adc = DAT_00412adc + 1;
  return;
}
