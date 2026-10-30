/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2708DFBBB686BBE0663A9C0F6CAD8EE2681164D317FAF46361F951F3ADE9A0FC
 * Entry: 0x0008fbe0, Ghidra index: 1759, label: FUN_0008fbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00090930(int *param_1);
extern undefined4 FUN_000908f0(void);

char FUN_0008fbe0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_00090930(param_1);
  if ((cVar2 != '\0') && (piVar1 = *(int **)(*(int *)(param_1 + 8) + 4), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1);
    cVar2 = FUN_000908f0();
    if ((cVar2 == '\0') && (((iVar3 != 0xc && (iVar3 != 0xe)) && (iVar3 != 0xf)))) {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
      iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
      *(float *)(param_1 + 0x5c) = (float)iVar3;
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
      iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1);
      *(float *)(param_1 + 0x60) = (float)iVar3;
    }
    cVar2 = '\x01';
  }
  return cVar2;
}
