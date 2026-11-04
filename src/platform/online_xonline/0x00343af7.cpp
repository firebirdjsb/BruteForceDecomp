/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E271CA18AF6EEEFFC4CF5B78140339898598BC23D6A0F701B55055720289BDE
 * Entry: 0x00343af7, Ghidra index: 12722, label: FUN_00343af7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void FUN_00343377(int param_1,undefined4 param_2);
extern bool FUN_003439cc(int param_1,int param_2);
undefined4 FUN_00343af7(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_003439cc(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = (uint)**(byte **)(param_1 + 0x24);
  *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
  if (uVar4 < 0x80) {
    *param_2 = uVar4;
    goto LAB_00343ba4;
  }
  if (uVar4 == 0x80) {
    *param_2 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
      goto LAB_00343ba4;
    }
LAB_00343bbc:
    FUN_00343377(param_1,0xfffffc15);
    return 0;
  }
  if (0x84 < uVar4) goto LAB_00343bbc;
  iVar1 = FUN_003439cc(param_1,uVar4 - 0x80);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar4 == 0x81) {
LAB_00343b93:
    uVar2 = uVar2 | **(byte **)(param_1 + 0x24);
    *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
  }
  else {
    if (uVar4 == 0x82) {
LAB_00343b86:
      uVar2 = uVar2 | (uint)**(byte **)(param_1 + 0x24) << 8;
      *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
      goto LAB_00343b93;
    }
    if (uVar4 == 0x83) {
LAB_00343b77:
      uVar2 = uVar2 | (uint)**(byte **)(param_1 + 0x24) << 0x10;
      *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
      goto LAB_00343b86;
    }
    if (uVar4 == 0x84) {
      uVar2 = (uint)**(byte **)(param_1 + 0x24) << 0x18;
      *(byte **)(param_1 + 0x24) = *(byte **)(param_1 + 0x24) + 1;
      goto LAB_00343b77;
    }
  }
  *param_2 = uVar2;
LAB_00343ba4:
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    uVar3 = FUN_003439cc(param_1,*param_2);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
