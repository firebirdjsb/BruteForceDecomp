/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C116AFC05547D1D85DC6B516D3F86F3D026B00E5C33F907BEC7A35C90B68F63
 * Entry: 0x00104fd0, Ghidra index: 3335, label: FUN_00104fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00104fd0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  undefined4 unaff_EDI;
  bool bVar7;
  
  if ((*(byte *)(unaff_EBX + 10) & 1) == 0) {
    return;
  }
  iVar4 = unaff_EBX[1];
  iVar2 = (**(code **)(*unaff_EBX + 4))();
  piVar5 = (int *)0x0;
  if (iVar2 == 3) {
    piVar5 = unaff_EBX;
  }
  for (puVar3 = *(undefined4 **)(iVar4 + 0x74);
      (piVar6 = (int *)0x0, puVar3 != *(undefined4 **)(iVar4 + 0x78) &&
      (piVar6 = (int *)*puVar3, piVar6[9] != -0x6b11bf)); puVar3 = puVar3 + 1) {
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar6 + 4))();
  if (iVar4 != 1) {
    return;
  }
  if ((*(byte *)(piVar6 + 10) & 4) == 0) {
    *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) | 4;
    (**(code **)(*piVar6 + 0x28))();
  }
  uVar1 = unaff_EBX[9];
  if (0x1463ddf4 < uVar1) {
    if (uVar1 == 0xfa5fb319) {
      iVar4 = 0x6bc884;
      if (piVar5[0x1c] != 0) {
        iVar4 = 0x1e2f8d19;
      }
      FUN_001e97c0(unaff_EDI,unaff_ESI);
      FUN_0010a7d0();
      if (piVar6[9] == DAT_0046d064) {
        piVar6[9] = iVar4;
        (**(code **)(*piVar6 + 0x2c))();
      }
      return;
    }
LAB_0010507b:
    FUN_000ef180();
    return;
  }
  if (uVar1 == 0x1463ddf4) {
    iVar4 = 0x145ef4b6;
    if (piVar5[0x1c] != 0) {
      iVar4 = -0x927bbee;
    }
    FUN_001e97c0(unaff_EDI,unaff_ESI);
    FUN_0010a7d0();
    if (piVar6[9] == DAT_0046d064) {
      piVar6[9] = iVar4;
      (**(code **)(*piVar6 + 0x2c))();
    }
    return;
  }
  if (uVar1 == 0xa3423cf) {
    iVar4 = -0xc9fa79a;
    if (piVar5[0x1c] != 0) {
      iVar4 = 0x200426b;
    }
    FUN_001e97c0(unaff_EDI,unaff_ESI);
    FUN_0010a7d0();
    if (piVar6[9] == DAT_0046d064) {
      piVar6[9] = iVar4;
      (**(code **)(*piVar6 + 0x2c))();
    }
    return;
  }
  if (uVar1 != 0xd5bfd5d) goto LAB_0010507b;
  iVar4 = piVar5[0x1c];
  if (iVar4 == 0) {
    iVar4 = -0x8311cf6;
  }
  else if (iVar4 == 1) {
    iVar4 = -0x1e0c6698;
  }
  else {
    if (iVar4 != 2) {
      iVar4 = 0x6ea961;
      FUN_001e97c0(unaff_EDI,unaff_ESI,unaff_EBP);
      FUN_0010a7d0();
      bVar7 = piVar6[9] == DAT_0046d064;
      goto LAB_00104f59;
    }
    iVar4 = -0xff0bd43;
  }
  FUN_001e97c0(unaff_EDI,unaff_ESI,unaff_EBP);
  FUN_0010a7d0();
  bVar7 = piVar6[9] == DAT_0046d064;
LAB_00104f59:
  if (bVar7) {
    piVar6[9] = iVar4;
    (**(code **)(*piVar6 + 0x2c))();
  }
  return;
}
