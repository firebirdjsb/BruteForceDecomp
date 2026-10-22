/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA02F916329EC78A4294C79FD3021E459CBB65C0E5E59EB441BC530ABB6E77AA
 * Entry: 0x0008b400, Ghidra index: 1677, label: FUN_0008b400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_0008b400(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  cVar10 = FUN_0005beb0();
  if (cVar10 == '\x01') {
    return;
  }
  puVar12 = (undefined4 *)param_2[0x168];
  param_2[0x168] = 0;
  if (puVar12 != (undefined4 *)0x0) goto LAB_0008b604;
  iVar11 = FUN_002ea01d(0xa0);
  if (iVar11 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = (undefined4 *)FUN_0008a0b0();
  }
  puVar13 = (undefined4 *)(**(code **)(*param_2 + 0x40))();
  uVar1 = puVar13[0xb];
  uVar2 = puVar13[10];
  puVar12[0x1c] = puVar13[9];
  puVar12[0x1d] = uVar2;
  puVar12[0x1e] = uVar1;
  uVar2 = puVar13[1];
  uVar4 = puVar13[2];
  uVar5 = puVar13[3];
  uVar1 = puVar13[8];
  uVar6 = puVar13[4];
  uVar7 = puVar13[5];
  uVar8 = puVar13[6];
  uVar9 = puVar13[7];
  puVar12[0x1f] = *puVar13;
  puVar12[0x20] = uVar2;
  puVar12[0x21] = uVar4;
  puVar12[0x22] = uVar5;
  puVar12[0x27] = uVar1;
  puVar12[0x23] = uVar6;
  puVar12[0x24] = uVar7;
  puVar12[0x25] = uVar8;
  puVar12[0x26] = uVar9;
  *puVar12 = *(undefined4 *)(param_2[3] + 8);
  if (puVar12[3] != param_3) {
    FUN_0008f6a0(param_3);
  }
  cVar10 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x9c))();
  if (cVar10 == '\0') {
LAB_0008b51b:
    iVar11 = FUN_0014d330();
    if (iVar11 != 0) {
      puVar12[4] = *(undefined4 *)(*(int *)(iVar11 + 0xc) + 8);
    }
    iVar11 = FUN_0014d3b0();
    if (iVar11 != 0) {
      puVar12[5] = *(undefined4 *)(*(int *)(iVar11 + 0xc) + 8);
    }
  }
  else {
    puVar12[4] = param_2[0x20e];
    puVar12[5] = param_2[0x20f];
    if ((puVar12[4] == DAT_0046d064) && (puVar12[5] == DAT_0046d064)) goto LAB_0008b51b;
  }
  FUN_0010bc40();
  iVar11 = *(int *)(*(int *)(param_2[2] + 0xbe0) + 0x14);
  piVar3 = *(int **)(iVar11 + 4);
  if (((piVar3 != (int *)0x0) && (*(int *)(iVar11 + 8) - (int)piVar3 >> 2 != 0)) && (*piVar3 != 0))
  {
    puVar12[0x16] = *(undefined4 *)(*piVar3 + 8);
    puVar12[0x17] = 1;
  }
  if (((puVar12[4] != DAT_0046d064) && (iVar11 = FUN_00160da0(0xffffffff,1), iVar11 != 0)) &&
     (iVar11 = FUN_0022b580(), iVar11 != 0)) {
    puVar12[0x18] = *(undefined4 *)(iVar11 + 8);
    puVar12[0x19] = 5;
  }
  if (((puVar12[5] != DAT_0046d064) && (iVar11 = FUN_00160da0(0xffffffff,1), iVar11 != 0)) &&
     (iVar11 = FUN_0022b580(), iVar11 != 0)) {
    puVar12[0x1a] = *(undefined4 *)(iVar11 + 8);
    puVar12[0x1b] = 5;
  }
LAB_0008b604:
  if (param_2[0x168] != 0) {
    FUN_0005b5d0(1);
    param_2[0x168] = 0;
  }
  param_2[0x168] = (int)puVar12;
  FUN_0005b9a0(*(undefined4 *)(param_1 + 0x28),param_2);
  iVar11 = 1;
  do {
    iVar14 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0xbec) + 8))(iVar11);
    if (((iVar14 != 0) && (*(int *)(iVar14 + 0x28) == *(int *)(param_1 + 0x28))) &&
       (cVar10 = FUN_0008b6e0(), cVar10 != '\0')) break;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 9);
  iVar11 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0xbec) + 0xc))(param_2);
  if (((iVar11 == 0) && ((*(byte *)(param_1 + 0x834) & 0x10) != 0)) &&
     (*(byte *)(param_1 + 0x834) = *(byte *)(param_1 + 0x834) & 0xef,
     (*(byte *)(param_1 + 0x834) & 0xd) == 0)) {
    FUN_00129530();
  }
  return;
}
