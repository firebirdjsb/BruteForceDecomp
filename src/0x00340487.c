/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48DF80437490CBEDBAA836B676BA22741F7AA300C8CDBBDB4D5FF70254ACF14C
 * Entry: 0x00340487, Ghidra index: 12667, label: FUN_00340487
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00340487(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_5;
  *param_5 = 0;
  iVar4 = *(int *)(param_1 + 8);
  uVar2 = (*(int *)(param_2 + 0xc) + 3U & 0xfffffffc) + iVar4;
  *(uint *)(param_1 + 8) = uVar2;
  if (*(uint *)(param_1 + 4) < uVar2) {
    *(int *)(param_1 + 8) = iVar4;
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    return 0x3c;
  }
  param_5 = *(int **)(param_2 + 0xc);
  iVar3 = FUN_0033fc56(param_1,param_2,param_3,((param_4 != 0x2b) - 1 & 0xfffffffb) + 8,&param_5,
                       iVar4);
  if (iVar3 == 0) {
    iVar3 = FUN_0033fbee(param_1,iVar4,param_5,param_4,piVar1);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_4 == 0x2d) {
      iVar3 = FUN_0033fbee(param_1,iVar4,param_5,0x2e,piVar1);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return iVar3;
}
