/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EBD6EACE03B3F115289D96A315489B8BD2EF727BFA36DEFF34505E827FED00F
 * Entry: 0x001e51d0, Ghidra index: 6793, label: FUN_001e51d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e51d0(int *param_1)

{
  float fVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if ((*(char *)(iVar5 + 4) != '\0') || (fVar1 = *(float *)(param_1[2] + 0x38), fVar1 <= 0.0)) {
    piVar2 = (int *)param_1[1];
    iVar5 = (**(code **)(*piVar2 + 0x10))();
    if (iVar5 != 0) {
      (**(code **)(*piVar2 + 0x10))();
    }
  }
  else {
    uVar3 = *(ushort *)(iVar5 + 0x2c);
    uVar4 = *(ushort *)(iVar5 + 0x2e);
    if ((uVar3 != 0) && (fVar1 != 1.0)) {
      uVar3 = (ushort)(int)((float)uVar3 * fVar1);
    }
    if ((uVar4 != 0) && (fVar1 != 1.0)) {
      uVar4 = (ushort)(int)((float)uVar4 * fVar1);
    }
    piVar2 = (int *)param_1[1];
    iVar5 = (**(code **)(*piVar2 + 0x10))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar2 + 0x10))();
      if (*(ushort *)(iVar5 + 4) < uVar3) {
        *(ushort *)(iVar5 + 4) = uVar3;
      }
      if (*(ushort *)(iVar5 + 6) < uVar4) {
        *(ushort *)(iVar5 + 6) = uVar4;
        return;
      }
    }
  }
  return;
}
