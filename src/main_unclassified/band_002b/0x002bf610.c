/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4BFD6EBA2DE7A56CCDA4247397AE9D0AF0D9E109E6113682509E3EF4E276121
 * Entry: 0x002bf610, Ghidra index: 9999, label: FUN_002bf610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
/* WARNING: Removing unreachable block (ram,0x002bfa60) */
/* WARNING: Removing unreachable block (ram,0x002bfa6b) */
/* WARNING: Removing unreachable block (ram,0x002bfa80) */
/* WARNING: Removing unreachable block (ram,0x002bf80c) */
/* WARNING: Removing unreachable block (ram,0x002bf848) */
/* WARNING: Removing unreachable block (ram,0x002bf850) */
/* WARNING: Removing unreachable block (ram,0x002bf87a) */
/* WARNING: Removing unreachable block (ram,0x002bf884) */
/* WARNING: Removing unreachable block (ram,0x002bf8be) */
/* WARNING: Removing unreachable block (ram,0x002bf8d1) */
/* WARNING: Removing unreachable block (ram,0x002bf88e) */
/* WARNING: Removing unreachable block (ram,0x002bf8a5) */
/* WARNING: Removing unreachable block (ram,0x002bf929) */
/* WARNING: Removing unreachable block (ram,0x002bf92b) */
/* WARNING: Removing unreachable block (ram,0x002bf955) */
/* WARNING: Removing unreachable block (ram,0x002bf95e) */
/* WARNING: Removing unreachable block (ram,0x002bf973) */
/* WARNING: Removing unreachable block (ram,0x002bf97e) */
/* WARNING: Removing unreachable block (ram,0x002bf982) */
/* WARNING: Removing unreachable block (ram,0x002bf820) */
/* WARNING: Removing unreachable block (ram,0x002bf98d) */
/* WARNING: Removing unreachable block (ram,0x002bfab9) */
/* WARNING: Removing unreachable block (ram,0x002bfac4) */
/* WARNING: Removing unreachable block (ram,0x002bfa0d) */
/* WARNING: Removing unreachable block (ram,0x002bfa15) */
/* WARNING: Removing unreachable block (ram,0x002bfa27) */

void FUN_002bf610(int param_1,int param_2,undefined4 param_3,ushort *param_4,int param_5,int param_6
                 ,undefined4 param_7,int param_8,undefined4 param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uStack0000002e;
  
  FUN_002ebea0();
  if (param_5 == 0) {
    FUN_002b2b10();
    FUN_001509d0();
    FUN_002b7360();
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))();
  }
  else {
    FUN_002b98e0();
  }
  if (param_6 == 0) {
    FUN_002b2b10();
    FUN_001509d0();
    FUN_002b7360();
    (**(code **)(**(int **)(param_2 + 0x7c) + 0x10))();
  }
  else {
    FUN_002b98e0();
  }
  uVar3 = 0x400;
  uVar4 = (uint)param_4[1] * 2 + 2;
  if (uVar4 < 0x400) {
    do {
      uVar3 = (int)uVar3 >> 1;
    } while (uVar4 < uVar3);
  }
  FUN_002c10d0();
  uStack0000002e = 0;
  uVar4 = (uint)param_4[1];
  while (uVar4 = uVar4 - 1, param_10 <= (int)uVar4) {
    piVar1 = *(int **)(*(int *)(param_4 + 2) + uVar4 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))();
    }
  }
  uVar4 = (uint)uStack0000002e;
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar2 = *(int *)(&stack0x00000038 + uVar4 * 4);
    if (*param_4 <= param_4[1]) {
      FUN_002ccf80();
    }
    *(int *)(*(int *)(param_4 + 2) + (uint)param_4[1] * 4) = iVar2;
    if (*(int *)(iVar2 + 0xc) == -1) {
      *(uint *)(iVar2 + 0xc) = (uint)param_4[1];
    }
    else {
      *(uint *)(iVar2 + 0x10) = (uint)param_4[1];
    }
    param_4[1] = param_4[1] + 1;
  }
  uStack0000002e = 0;
  if ((param_8 != 0) && (param_6 != 0)) {
    (*(code *)PTR_FUN_003bc654)();
    return;
  }
  return;
}
