/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B4BD7E2D6343F3722BD31FFC67353ECAEECE0E4B10271ECB5737EA16C79C456
 * Entry: 0x0025cd90, Ghidra index: 8560, label: FUN_0025cd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
undefined4 FUN_0025cd90(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_retaddr;
  
  if (param_2 == 0xffffffff) {
    return 0x80004005;
  }
  uVar3 = 0x80004005;
  RtlEnterCriticalSection(&DAT_0046b2c8);
  if (param_2 == 0) {
    if (*(int *)(unaff_retaddr + 0x10) == 0) goto LAB_0025ce67;
    piVar2 = *(int **)(unaff_retaddr + 0xc);
    piVar1 = (int *)*piVar2;
    if (piVar1 == piVar2) goto LAB_0025ce67;
    iVar4 = 0;
    while (iVar4 != 0) {
      iVar4 = iVar4 + 1;
      FUN_00076220();
      if (piVar1 == piVar2) {
        RtlLeaveCriticalSection(&DAT_0046b2c8);
        return 0x80004005;
      }
    }
    piVar2 = (int *)piVar1[5];
  }
  else {
    piVar2 = (int *)FUN_0025d440();
    iVar4 = *piVar2;
    if (((iVar4 == *(int *)(unaff_retaddr + 0x18)) || (*(int *)(iVar4 + 0x18) == 0)) ||
       ((uint)(*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2) <= param_2)) goto LAB_0025ce67;
    iVar4 = FUN_0025c2b0();
    if (iVar4 == 0) goto LAB_0025ce67;
    piVar2 = *(int **)(iVar4 + 4);
  }
  *param_3 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    uVar3 = 0;
  }
LAB_0025ce67:
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return uVar3;
}
