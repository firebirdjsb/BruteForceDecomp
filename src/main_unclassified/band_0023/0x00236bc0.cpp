/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BCE6C5E8ACACD5E77191431D56C5965174E2F51FFE08990BA46FC35E024B654
 * Entry: 0x00236bc0, Ghidra index: 7837, label: FUN_00236bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00236bc0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  iVar3 = 4;
  if ((((*in_ECX != 0) && (iVar1 = *(int *)(*in_ECX + 0x18), iVar1 != 0)) &&
      (*(int *)(iVar1 + 4) != 0)) &&
     (((uint)in_ECX[0x1c] < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc) &&
      (local_4 = *(int **)(*(int *)(iVar1 + 4) + 4 + in_ECX[0x1c] * 0xc), local_4 != (int *)0x0))))
  {
    FUN_0023c1d0(&local_4,param_4,param_1,param_3,param_2 >> 0xd & 0xffffff01);
  }
  if ((param_2 & 0x4000) == 0) {
    local_4 = (int *)in_ECX[0x14];
    piVar2 = (int *)in_ECX[0x13];
    if ((char)(param_2 >> 8) < '\0') {
      if (piVar2 != local_4) {
        do {
          if (((*(uint *)(*piVar2 + 0x44) >> 3 & 1) == 0) &&
             (iVar1 = FUN_00236bc0(param_1,param_2,param_3,param_4,param_5), iVar3 != iVar1)) {
            iVar3 = 3;
          }
          piVar2 = piVar2 + 1;
        } while (piVar2 != local_4);
        return iVar3;
      }
    }
    else if (piVar2 != local_4) {
      do {
        iVar1 = FUN_00236bc0(param_1,param_2,param_3,param_4,param_5);
        if (iVar3 != iVar1) {
          iVar3 = 3;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != local_4);
    }
  }
  return iVar3;
}
