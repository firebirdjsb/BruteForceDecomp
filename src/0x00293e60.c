/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5E9B6BA5EE7A314664A71A6D63855952DFBE6B18A7BAFA3E16715AE54831E14
 * Entry: 0x00293e60, Ghidra index: 9273, label: FUN_00293e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00293e60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_EBX;
  int local_10;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  iVar3 = FUN_00293e00();
  puVar4 = (undefined4 *)FUN_00294b90(0,iVar3 << 5);
  puVar6 = puVar4;
  iVar7 = iVar3;
  if (0 < iVar3) {
    do {
      puVar6[4] = 0xfffffffa;
      *puVar6 = 0xfffffffa;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (iVar7 != 0);
  }
  *(undefined4 **)(unaff_EBX + 8) = puVar4;
  *(int *)(unaff_EBX + 0xc) = iVar3;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  puVar6 = puVar1;
  local_10 = iVar2;
  if (0 < iVar2) {
    do {
      if (puVar6[4] != -6) {
        puVar5 = (undefined4 *)FUN_00293c90(puVar6);
        puVar4 = puVar6;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(int *)(unaff_EBX + 0x10) = *(int *)(unaff_EBX + 0x10) + 1;
      }
      local_10 = local_10 + -1;
      puVar6 = puVar6 + 8;
    } while (local_10 != 0);
  }
  *(int *)(DAT_00469888 + 0x78) =
       *(int *)(DAT_00469888 + 0x78) +
       (((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4))
  ;
  FUN_00294b90(puVar1,0);
  return;
}
