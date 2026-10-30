/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8D8852266C529DAA72279334C3FDE4785671AA87B01EE1895178A76AEFF9E69
 * Entry: 0x0014b440, Ghidra index: 4314, label: FUN_0014b440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014b440(void)

{
  float fVar1;
  float fVar2;
  int *in_EAX;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int unaff_ESI;
  float *unaff_EDI;
  float *pfVar6;
  undefined4 local_18 [2];
  float local_10;
  float fStack_c;
  float fStack_8;
  
  pfVar6 = &local_10;
  local_18[0] = 0;
  uVar3 = (**(code **)(*in_EAX + 0x6c))(pfVar6,local_18);
  iVar4 = FUN_00236e30(uVar3,pfVar6);
  if (iVar4 != 0) {
    FUN_00066160();
    fVar1 = *(float *)(unaff_ESI + 0x38);
    fVar2 = *(float *)(unaff_ESI + 0x3c);
    unaff_EDI[2] = fStack_8 + *(float *)(unaff_ESI + 0x40);
    *unaff_EDI = local_10 + fVar1;
    unaff_EDI[1] = fStack_c + fVar2;
    return;
  }
  if (in_EAX[2] == 0) {
    if ((in_EAX[4] == 0) || (piVar5 = *(int **)(in_EAX[4] + 0xb0), *(int *)(piVar5[3] + 4) != 3)) {
      piVar5 = (int *)0x0;
    }
  }
  else {
    piVar5 = *(int **)(in_EAX[2] + 0x1d4);
  }
  iVar4 = (**(code **)(*piVar5 + 0x40))();
  fVar1 = *(float *)(iVar4 + 0x2c);
  fVar2 = *(float *)(iVar4 + 0x28);
  *unaff_EDI = *(float *)(iVar4 + 0x24);
  unaff_EDI[1] = fVar2;
  unaff_EDI[2] = fVar1;
  return;
}
