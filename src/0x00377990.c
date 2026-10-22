/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB0AD03511AFF19E53333C2AF491A75144208FF89FF6372C2E9F7E0799F1F422
 * Entry: 0x00377990, Ghidra index: 13459, label: FUN_00377990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040023_1_0040071c;
int FUN_00377990(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *unaff_ESI;
  
  uVar4 = unaff_ESI[0x6f] & 1;
  iVar2 = *unaff_ESI;
  iVar1 = uVar4 * 3 + 0x5d;
  iVar3 = unaff_ESI[iVar1];
  iVar5 = 0;
  while ((iVar3 != 0 && (unaff_ESI[0x70] == unaff_ESI[uVar4 * 3 + 0x5e]))) {
    unaff_ESI[iVar1] = 0;
    FUN_003782d0();
    uVar4 = unaff_ESI[0x6f];
    if (unaff_ESI[(uVar4 & 1) + 0x1f7] == 1) {
      FUN_0037834e();
      unaff_ESI[(uVar4 & 1) + 0x1f7] = 0;
    }
    *(uint *)((int)&PTR_LAB_00040023_1_0040071c + iVar2) =
         *(uint *)((int)&PTR_LAB_00040023_1_0040071c + iVar2) | 2;
    iVar1 = unaff_ESI[0x6f];
    unaff_ESI[0x6f] = iVar1 + 1U;
    uVar4 = iVar1 + 1U & 1;
    iVar1 = uVar4 * 3 + 0x5d;
    iVar3 = unaff_ESI[iVar1];
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}
