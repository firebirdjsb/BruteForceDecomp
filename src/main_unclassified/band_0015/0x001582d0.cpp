/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDD6AB2B524D577CA0123288E724F72F2E1255DBC2F3BDB52A1657E6F561A477
 * Entry: 0x001582d0, Ghidra index: 4496, label: FUN_001582d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001582d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) >> 2;
  }
  local_c = 0;
  if (0 < local_10) {
    do {
      local_4 = *(int *)(*(int *)(param_2 + 0x4c) + local_c * 4);
      iVar1 = *(int *)(local_4 + 0x5c);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)0x0;
        if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x5c);
        }
        for (; local_8 = iVar1, puVar2 != *(undefined4 **)(param_1 + 0x5c);
            puVar2 = (undefined4 *)*puVar2) {
          if (puVar2[2] == iVar1) {
            if (puVar2 != *(undefined4 **)(param_1 + 0x5c)) goto LAB_0015837a;
            break;
          }
        }
        iVar1 = *(int *)(param_1 + 0x5c);
        iVar3 = FUN_000ff730(param_1 + 0x58,iVar1,*(undefined4 *)(iVar1 + 4),&local_8);
        FUN_000b2a50();
        *(int *)(iVar1 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
      }
LAB_0015837a:
      FUN_001582d0(param_1,local_4);
      local_c = local_c + 1;
    } while (local_c < local_10);
  }
  return;
}
