/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6E2EA805224B60097018C00D1FEB449F008C47E5BB0B1B309795C416A03877E
 * Entry: 0x0007e9b0, Ghidra index: 1498, label: FUN_0007e9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern unsigned char LAB_00401f50; /* VA 0x00401f50 */
extern unsigned char LAB_00401f58; /* VA 0x00401f58 */

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_0007e9b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char unaff_BL;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  
  piVar1 = param_1;
  iVar4 = param_1[param_1[0x172] + 0x173];
  iVar2 = (**(code **)(*param_1 + 0xe0))();
  if (iVar2 == 0) {
    if (unaff_BL != '\0') {
      (**(code **)(*piVar1 + 0x68))();
      param_1 = (int *)FUN_002383b0();
      iVar2 = (**(code **)(*piVar1 + 0xd4))(&param_1);
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00078320(iVar4,&LAB_00401f50,2);
        param_1 = (int *)(*(int *)(iVar2 + 0x14) + 1);
        bVar6 = SBORROW4((int)param_1,(int)piVar3);
        iVar2 = (int)param_1 - (int)piVar3;
        bVar5 = param_1 == piVar3;
        goto LAB_0007ea31;
      }
    }
  }
  else {
    piVar3 = (int *)FUN_00078320(iVar4,&LAB_00401f50,2);
    param_1 = *(int **)(iVar2 + 0x14);
    bVar6 = SBORROW4((int)param_1,(int)piVar3);
    iVar2 = (int)param_1 - (int)piVar3;
    bVar5 = param_1 == piVar3;
LAB_0007ea31:
    if (!bVar5 && bVar6 == iVar2 < 0) {
      FUN_00078370(2,(float)(int)param_1);
    }
  }
  iVar2 = (**(code **)(*piVar1 + 0xe4))();
  if (iVar2 == 0) {
    if ((unaff_BL == '\0') || (iVar4 == 0)) goto LAB_0007ea96;
    puVar7 = &DAT_0046d064;
  }
  else {
    param_1 = (int *)FUN_002383b0();
    if (iVar4 == 0) goto LAB_0007ea96;
    puVar7 = &param_1;
  }
  FUN_00078400(iVar4,&LAB_00401f58,2,puVar7);
LAB_0007ea96:
  iVar4 = (**(code **)(*piVar1 + 0x1b4))(piVar1 + 0x163);
  if (iVar4 != 0) {
    FUN_00078f90();
  }
  return 1;
}
