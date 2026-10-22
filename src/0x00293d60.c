/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A666ACB19FF06DD7163039CD513D448E40C0C15A00E34BDF619A462DA913EE3
 * Entry: 0x00293d60, Ghidra index: 9271, label: FUN_00293d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
undefined4 * FUN_00293d60(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_00294b90(0,0x18);
  iVar2 = FUN_00295560();
  puVar3 = (undefined4 *)FUN_00294b90(0,iVar2 << 5);
  puVar4 = puVar3;
  iVar5 = iVar2;
  if (0 < iVar2) {
    do {
      puVar4[4] = 0xfffffffa;
      *puVar4 = 0xfffffffa;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 8;
    } while (iVar5 != 0);
  }
  iVar5 = DAT_00469888;
  puVar1[2] = puVar3;
  puVar1[3] = iVar2;
  puVar1[4] = 0;
  puVar1[5] = 0xfffffffd;
  *puVar1 = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 **)(iVar5 + 0x50) = puVar1;
  puVar1[1] = 0;
  *(int *)(iVar5 + 0x78) = *(int *)(iVar5 + 0x78) + ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4) + 1
  ;
  return puVar1;
}
