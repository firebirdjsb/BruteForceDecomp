/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DD12A23EB619FFB85E36B136F7190BDEE16A724581B4E34905790A4AF31F2AE
 * Entry: 0x003329b5, Ghidra index: 12404, label: FUN_003329b5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern undefined4 FUN_0033233c(int *param_1);
extern void FUN_00330e59(int param_1);
undefined4
FUN_003329b5(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  
  *param_4 = 0;
  puVar2 = (undefined4 *)FUN_0033ea0c(0xb4,0x2017);
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
    *puVar1 = *puVar1 | 8;
    *param_4 = 0;
    uVar3 = 0x80150008;
  }
  else {
    FUN_00330c2d(puVar2);
    puVar2[3] = 0;
    puVar2[2] = param_3;
    puVar2[4] = 7;
    *puVar2 = FUN_0033233c;
    puVar2[1] = FUN_00330e59;
    puVar2[0x2a] = param_2;
    puVar5 = puVar2 + 5;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2[4] = 2;
    FUN_0033233c(puVar2);
    *param_4 = puVar2;
    uVar3 = 0;
  }
  return uVar3;
}
