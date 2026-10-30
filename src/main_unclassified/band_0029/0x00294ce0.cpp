/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F2574FE177C3DD317125DF089F8EB1C2FFEFACC92C74EC189FA46E5500C9C22
 * Entry: 0x00294ce0, Ghidra index: 9306, label: FUN_00294ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s__d_is_not_a_valid_tag_004047a8[];
int FUN_00294ce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  char *pcVar6;
  
  if ((param_1 < *(int *)(DAT_00469888 + 0x68)) || (0 < param_1)) {
    FUN_00295370(s__d_is_not_a_valid_tag_004047a8,param_1);
  }
  if ((unaff_ESI < *(int *)(DAT_00469888 + 0x68)) || (0 < unaff_ESI)) {
    FUN_00295370(s__d_is_not_a_valid_tag_004047a8);
  }
  iVar1 = DAT_00469888;
  pcVar6 = (char *)(param_1 * -0x12 + 0x3b96e1);
  iVar2 = 0;
  iVar3 = param_1 * -0x120 + 0x30;
  do {
    if ((param_1 < -6) || (pcVar6[-1] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + -0x30 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (*pcVar6 != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 1) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + -0x20 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[1] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 2) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + -0x10 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[2] != '\0')) {
      puVar5 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 3) * 0x10 + *(int *)(iVar1 + 100));
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 100) + iVar3);
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
      puVar4[2] = puVar5[2];
      puVar4[3] = puVar5[3];
    }
    if ((param_1 < -6) || (pcVar6[3] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 4) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + 0x10 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[4] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 5) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + 0x20 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[5] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 6) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + 0x30 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[6] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 7) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + 0x40 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    if ((param_1 < -6) || (pcVar6[7] != '\0')) {
      puVar4 = (undefined4 *)((iVar2 + unaff_ESI * -0x12 + 8) * 0x10 + *(int *)(iVar1 + 100));
      puVar5 = (undefined4 *)(iVar3 + 0x50 + *(int *)(iVar1 + 100));
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
    }
    iVar2 = iVar2 + 9;
    pcVar6 = pcVar6 + 9;
    iVar3 = iVar3 + 0x90;
  } while (iVar2 < 0x12);
  return param_1;
}
