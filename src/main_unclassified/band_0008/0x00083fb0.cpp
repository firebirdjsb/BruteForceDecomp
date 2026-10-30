/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D1BCDC56F1A5B3570BBED0C67755598941E83B09993ACAC6EC504FE4F0BAC57
 * Entry: 0x00083fb0, Ghidra index: 1540, label: FUN_00083fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401f68;
extern char s_character__d_0040dbe8[];
void FUN_00083fb0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int unaff_ESI;
  char local_20;
  char local_1f [31];
  
  iVar3 = DAT_00401f68;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    pcVar7 = &local_20;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    FUN_002eaa19(&local_20,0x20,s_character__d_0040dbe8,iVar6);
    pcVar7 = &local_20;
    cVar2 = local_20;
    while (cVar2 != '\0') {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar1;
    }
    uVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_0008408d;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    }
    iVar4 = FUN_00077da0(3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    }
LAB_0008408d:
    uVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_000840d8;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    }
    iVar4 = FUN_00077da0(3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    }
LAB_000840d8:
    uVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_00084128;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    }
    iVar4 = FUN_00077da0(3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    }
LAB_00084128:
    uVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_00084178;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    }
    iVar4 = FUN_00077da0(3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    }
LAB_00084178:
    uVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_000841c4;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x10;
    }
    iVar4 = FUN_00077da0(3);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    }
LAB_000841c4:
    if (3 < iVar6) {
      return;
    }
  } while( true );
}
