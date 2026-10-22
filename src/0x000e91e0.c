/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F2BA66DA062AD2FBD9CAEC4F189516A6C1218EE1C85F38AEEE0833CD846A1BF
 * Entry: 0x000e91e0, Ghidra index: 2880, label: FUN_000e91e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e91e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint local_10 [4];
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    while (piVar3 = piVar3 + 3, piVar3 != param_2) {
      iVar1 = piVar3[1];
      iVar2 = *piVar3;
      local_10[2] = (uint)(param_1[1] < iVar1);
      local_10[3] = (uint)(*param_1 < iVar2);
      if (local_10[(iVar1 == param_1[1]) + 2] == 0) {
        local_10[0] = (uint)(piVar3[-2] < iVar1);
        local_10[1] = (uint)(piVar3[-3] < iVar2);
        piVar4 = piVar3 + -3;
        if (local_10[iVar1 == piVar3[-2]] != 0) {
          do {
            piVar5 = piVar4;
            local_10[0] = (uint)(piVar5[-2] < iVar1);
            local_10[1] = (uint)(piVar5[-3] < iVar2);
            piVar4 = piVar5 + -3;
          } while (local_10[iVar1 == piVar5[-2]] != 0);
          if ((piVar5 != piVar3) && (piVar3 != piVar3 + 3)) {
            FUN_000a0b10(piVar5,piVar3 + 3,0,0);
          }
        }
      }
      else if ((param_1 != piVar3) && (piVar3 != piVar3 + 3)) {
        FUN_000a0b10(param_1,piVar3 + 3,0,0);
      }
    }
  }
  return;
}
