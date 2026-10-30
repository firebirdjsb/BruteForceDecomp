/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8D92DD470A09D5C85C1DA69ECF6682A47FA0AB9C38434EB0BCA605D1D899016
 * Entry: 0x00054ec0, Ghidra index: 802, label: FUN_00054ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00054ec0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 local_4;
  
  iVar4 = *(int *)(in_EAX + 4);
  iVar1 = *(int *)(iVar4 + 0x1f8);
  local_4 = 0.0;
  if (iVar1 == 6) {
    local_4 = 0.5;
  }
  else if (iVar1 == 7) {
    local_4 = 0.25;
  }
  else if ((*(int **)(iVar4 + 0x1fc) == (int *)0x0) ||
          (((iVar2 = **(int **)(iVar4 + 0x1fc), iVar2 != 0x13 && (iVar2 != 0)) && (iVar2 != 0x2b))))
  {
    cVar3 = FUN_00126b40();
    iVar4 = extraout_EDX;
    if (cVar3 == '\0') {
      cVar3 = FUN_00126a40();
      iVar4 = extraout_EDX_00;
      if (cVar3 == '\0') {
        if (iVar1 == 8) {
          local_4 = -0.5;
        }
      }
      else {
        local_4 = -0.1;
      }
    }
  }
  else {
    local_4 = 0.1;
  }
  *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 1;
  if ((*(int *)(iVar4 + 0x24c) != 0) && ((*(uint *)(*(int *)(iVar4 + 0x24c) + 0x24) & 0x2000) != 0))
  {
    local_4 = local_4 + 0.5;
  }
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x1b4) + 8))();
  return (float10)*(float *)(iVar4 + 0x8c) + (float10)local_4;
}
