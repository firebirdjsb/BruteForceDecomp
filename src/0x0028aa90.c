/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07CC81083278903F9199B335767F7590DAD41C8E4B7C93EE2FF2BB80A00DFC43
 * Entry: 0x0028aa90, Ghidra index: 9170, label: FUN_0028aa90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004043b4;
extern uint32_t *DAT_00469888;
void FUN_0028aa90(undefined4 param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  pcVar2 = (char *)&DAT_004043b4;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  pcVar3 = pcVar3 + -0x4043b4;
  if (pcVar3 == (char *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)((uint)DAT_004043b4 * (int)pcVar3) % 0x1f;
  }
  iVar4 = FUN_00294640(&DAT_004043b4,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
  puVar5 = DAT_00469888;
  iVar6 = *(int *)(iVar4 + 0x10);
  if (((iVar6 == -4) || (iVar6 == -5)) || (iVar6 == -7)) {
    puVar1 = (undefined4 *)*DAT_00469888;
    *puVar1 = *(undefined4 *)(iVar4 + 0x10);
    puVar1[1] = *(undefined4 *)(iVar4 + 0x14);
    puVar1[2] = *(undefined4 *)(iVar4 + 0x18);
    puVar1[3] = *(undefined4 *)(iVar4 + 0x1c);
    if (puVar5[2] <= *puVar5) {
      FUN_0028a460();
      puVar5 = DAT_00469888;
    }
    *puVar5 = *puVar5 + 0x10;
    FUN_00289bc0(param_1);
    FUN_0028a8b0(1,0);
  }
  return;
}
