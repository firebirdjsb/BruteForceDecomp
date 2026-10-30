/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9255B006A7C17430AC22A025E186AFCFB60EECA4D298185B03F64F160368AC7
 * Entry: 0x00089770, Ghidra index: 1640, label: FUN_00089770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
int FUN_00089770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar7 = 0x30;
    do {
      iVar1 = *(int *)(iVar7 + param_1);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x28) != 0)) && (*(int *)(param_2 + 0x28) != 0)) {
        iVar2 = *(int *)(*(int *)(param_2 + 0x28) + 0xc);
        iVar3 = *(int *)(*(int *)(iVar1 + 0x28) + 0xc);
        if ((((iVar2 != -1) && (iVar3 != -1)) &&
            ((iVar2 == iVar3 && ((&DAT_003ffd80)[iVar2 * 10 + iVar3] == '\0')))) ||
           (param_2 == iVar1)) {
          fVar4 = 0.0;
          piVar5 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
          if (piVar5 != (int *)0x0) {
            fVar4 = (float)*piVar5;
          }
          iVar6 = iVar6 + (int)fVar4;
        }
      }
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < 0x90);
    return iVar6;
  }
  fVar4 = 0.0;
  piVar5 = (int *)(*(int *)(param_2 + 0x2c) + 4);
  if (piVar5 != (int *)0x0) {
    fVar4 = (float)*piVar5;
  }
  return (int)fVar4;
}
