/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 861DFC092C675883B514CB9108CDC784E00C10123EB579FEF694BCC1BABCB651
 * Entry: 0x000fe7d0, Ghidra index: 3186, label: FUN_000fe7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fe7d0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *local_2c;
  int local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  int *local_c;
  int *local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  piVar10 = (int *)0x0;
  piVar9 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_4 = 0;
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)**(undefined4 **)(param_1 + 8);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  for (puVar4 = local_2c; puVar4 != puVar2; puVar4 = (undefined4 *)*puVar4) {
    for (piVar3 = piVar10; piVar3 != piVar9; piVar3 = piVar3 + 1) {
      if (*piVar3 == *(int *)(puVar4[2] + 0x60)) {
        if (piVar3 != piVar9) goto LAB_000fe84e;
        break;
      }
    }
    FUN_001611d0();
    piVar9 = local_8;
    piVar10 = local_c;
LAB_000fe84e:
  }
  puVar4 = (undefined4 *)FUN_00061500(local_1c);
  local_14 = 0;
  local_18 = puVar4;
  for (; piVar10 != piVar9; piVar10 = piVar10 + 1) {
    local_20 = FUN_000fe630();
    if (local_20 != 0) {
      iVar5 = FUN_000ff730(local_1c,puVar4,puVar4[1],&local_20);
      FUN_000b2a50();
      puVar4[1] = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      puVar4 = local_18;
    }
  }
  do {
    if (local_2c == puVar2) {
      if (puVar4 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar4;
      }
      FUN_001298b0(&param_1,uVar7,puVar4);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18);
    }
    piVar10 = (int *)local_2c[2];
    bVar8 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar4;
    }
    for (; puVar6 != puVar4; puVar6 = (undefined4 *)*puVar6) {
      if ((int *)puVar6[2] == piVar10) {
        if (puVar6 != puVar4) {
          bVar8 = 1;
        }
        break;
      }
    }
    bVar1 = *(byte *)(piVar10 + 10);
    if ((bVar1 >> 1 & 1) != bVar8) {
      *(byte *)(piVar10 + 10) = (bVar8 << 1 ^ bVar1) & 2 ^ bVar1;
      (**(code **)(*piVar10 + 0x24))();
    }
    bVar1 = *(byte *)(piVar10 + 10);
    if (bVar8 != (bVar1 >> 2 & 1)) {
      *(byte *)(piVar10 + 10) = (bVar8 << 2 ^ bVar1) & 4 ^ bVar1;
      (**(code **)(*piVar10 + 0x28))();
    }
    local_2c = (undefined4 *)*local_2c;
  } while( true );
}
