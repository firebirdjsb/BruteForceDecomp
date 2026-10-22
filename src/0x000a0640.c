/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B033700EF1CD3BEB20C0BF54BAB9DED49CB0FA8625FFCC19F15C22742EA2E500
 * Entry: 0x000a0640, Ghidra index: 1896, label: FUN_000a0640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a0640(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint local_10 [4];
  
  piVar5 = param_1;
  if (param_1 != param_2) {
    while (piVar5 = piVar5 + 3, piVar5 != param_2) {
      iVar2 = *piVar5;
      uVar3 = piVar5[2];
      local_10[2] = (uint)(*param_1 < iVar2);
      local_10[3] = (uint)((uint)param_1[2] < uVar3);
      if (local_10[(iVar2 == *param_1) + 2] == 0) {
        local_10[0] = (uint)(piVar5[-3] < iVar2);
        local_10[1] = (uint)((uint)piVar5[-1] < uVar3);
        piVar4 = piVar5;
        if (local_10[iVar2 == piVar5[-3]] != 0) {
          do {
            piVar6 = piVar4 + -3;
            piVar1 = piVar4 + -6;
            local_10[0] = (uint)(*piVar1 < iVar2);
            local_10[1] = (uint)((uint)piVar4[-4] < uVar3);
            piVar4 = piVar6;
          } while (local_10[iVar2 == *piVar1] != 0);
          if ((piVar6 != piVar5) && (piVar5 != piVar5 + 3)) {
            FUN_000a0b10(piVar6,piVar5 + 3,0,0);
          }
        }
      }
      else if ((param_1 != piVar5) && (piVar5 != piVar5 + 3)) {
        FUN_000a0b10(param_1,piVar5 + 3,0,0);
      }
    }
  }
  return;
}
