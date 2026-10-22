/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E477E60CEF1B832BD7C64F89F6EF37404D9BBD4CBF41D439887E69CB223D32B1
 * Entry: 0x001ff9d0, Ghidra index: 7248, label: FUN_001ff9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_001ff9d0(char param_1,int *param_2,int *param_3,char *param_4,char *param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar4 = 0;
  if (*param_5 != '\0') {
    return 0;
  }
  if (*param_2 != *param_3) {
    return 0;
  }
  if (param_1 != '\0') goto LAB_001ffab1;
  *(char *)(unaff_ESI + 0x4c + unaff_EDI) = param_4[4];
  iVar2 = *(int *)(param_4 + 4);
  if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 4)) {
    if (*(int *)(param_4 + 8) != -0x400000) {
      uVar4 = *(undefined4 *)((uint)(param_4 + 8) & (*(int *)(param_4 + 8) == -0x400000) - 1);
      goto LAB_001ffa88;
    }
  }
  else if (iVar2 == 0) {
    piVar3 = *(int **)(DAT_00469b58 + 8);
    uVar4 = FUN_0005d290();
    (**(code **)(*piVar3 + 0x210))(uVar4);
    uVar4 = FUN_000782c0(uVar4);
LAB_001ffa88:
    *(undefined4 *)(unaff_EDI + 0x40 + unaff_ESI * 4) = uVar4;
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x40 + unaff_ESI * 4) = 0;
  }
  bVar1 = *(byte *)(unaff_ESI + 0x4c + unaff_EDI);
  if (*param_4 != '\0') {
    *(byte *)(unaff_ESI + 0x4c + unaff_EDI) = bVar1 | 0x80;
    *param_5 = '\x01';
    return 1;
  }
  *(byte *)(unaff_ESI + 0x4c + unaff_EDI) = bVar1 & 0x7f;
  uVar4 = 1;
LAB_001ffab1:
  *param_5 = '\x01';
  return uVar4;
}
