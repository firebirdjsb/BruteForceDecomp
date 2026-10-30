/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EF17BD03C70BE2CC91E9A9851B32DD34430C0AEF4EF1E722F82D05CEDC08457
 * Entry: 0x0025e3c0, Ghidra index: 8591, label: FUN_0025e3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
/* XBE 0x0025e47a/0x0025e4a3/0x0025e4c9 CALL EAX after loading [0x004698d4]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
undefined1 FUN_0025e3c0(int *param_1)

{
  int iVar1;
  undefined1 unaff_BP;
  int *piVar2;
  int **ppiVar3;
  int *local_8;
  undefined4 local_4;
  
  if ((param_1[3] == 0) && (param_1[1] == 0)) {
    return 0;
  }
  local_8 = (int *)0x0;
  FUN_0025e4f0();
  iVar1 = param_1[1];
  if (*param_1 != 0) {
    FUN_00237e40();
    *param_1 = 0;
  }
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00237da0();
    *param_1 = iVar1;
  }
  local_4 = 0xe0c43d05;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  ppiVar3 = &local_8;
  piVar2 = DAT_004432f8;
  iVar1 = (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8,param_1 + 5,0x80000000,&local_4);
  if (-1 < iVar1) {
    (*(code *)(*ppiVar3)[4])(ppiVar3,param_1[2],param_1[3],0);
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    (**(code **)(*piVar2 + 0x10))(piVar2,*param_1,param_1[1],0);
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    unaff_BP = 1;
  }
  FUN_0025e340();
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  if (ppiVar3 != (int **)0x0) {
    (*(code *)(*ppiVar3)[2])(ppiVar3);
  }
  return unaff_BP;
}
