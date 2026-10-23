/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B86DBF3F390B61BF6C480FE80C34343E7E02C0F2237F9F098935364B3EA0454
 * Entry: 0x0034f23b, Ghidra index: 13033, label: FUN_0034f23b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034f23b(int param_1,int *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  bVar1 = *(byte *)(param_2 + 3);
  *(byte *)(param_2 + 3) = param_3;
  *(byte *)((int)param_2 + 0xd) = (bVar1 != param_3) - 1U & *(char *)((int)param_2 + 0xd) + 1U;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    piVar3 = (int *)param_2[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    *param_2 = 0;
  }
  if (param_3 == 0) {
    return;
  }
  if (2 < param_3) {
    if (param_3 < 4) {
      return;
    }
    if (5 < param_3) {
      if (param_3 != 6) {
        return;
      }
      FUN_0034ed70(param_1,param_2);
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  *param_2 = param_1 + 0x14;
  param_2[1] = (int)puVar4;
  *puVar4 = param_2;
  *(int **)(param_1 + 0x18) = param_2;
  return;
}
