/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EC6F108B77B10F6E92B1AEAE44CD159BFB3E91CA591869549C2521664A1E7B9
 * Entry: 0x00344aef, Ghidra index: 12747, label: thunk_FUN_00343e85
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int thunk_FUN_00343e85(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 + 3U & 0xfffffffc;
  param_1[0x13] = param_1[0x13] + uVar2;
  if (param_1[0xe] == 0) {
    iVar1 = *param_1;
    iVar3 = *(int *)(iVar1 + 8);
    *(uint *)(iVar1 + 8) = uVar2 + iVar3;
    if (*(uint *)(iVar1 + 4) < uVar2 + iVar3) {
      *(int *)(iVar1 + 8) = iVar3;
      iVar3 = 0;
    }
  }
  else {
    if ((uint)param_1[0x12] < uVar2) goto LAB_00343ed5;
    iVar3 = param_1[0x11];
    param_1[0x11] = iVar3 + uVar2;
    param_1[0x12] = param_1[0x12] - uVar2;
  }
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_00343ed5:
  FUN_00343377(param_1,0xfffffc12);
  return 0;
}
