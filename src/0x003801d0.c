/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 585DEB7959AD01C2A4D68FB81E675928137442FC444ED20DF3325B02B59B101A
 * Entry: 0x003801d0, Ghidra index: 13527, label: FUN_003801d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003801d0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)((int)param_2 + 0xa2) & 2) == 0) {
    if (param_2[3] == 0) {
      if (param_2[4] == 0) {
        *(undefined4 *)(iVar1 + 0x12) = 0;
        *param_2 = 0;
        if ((*(byte *)(iVar1 + 4) & 2) != 0) {
          FUN_00380098();
        }
        if ((*(byte *)((int)param_2 + 0xa2) & 1) == 0) {
          return;
        }
        KeSetEvent(*(undefined4 *)((int)param_2 + 0x9e),0,0);
        return;
      }
      *param_1 = 0x1c;
      param_1[1] = 0x43;
      *(code **)(param_1 + 8) = FUN_003801d0;
      *(int **)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = param_2[4];
      param_2[4] = 0;
    }
    else {
      *param_1 = 0x1c;
      param_1[1] = 0x43;
      *(code **)(param_1 + 8) = FUN_003801d0;
      *(int **)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = param_2[3];
      param_2[3] = 0;
    }
  }
  else {
    *param_1 = 0x1c;
    param_1[1] = 0xc3;
    *(code **)(param_1 + 8) = FUN_003801d0;
    *(int **)(param_1 + 0xc) = param_2;
    *(byte *)((int)param_2 + 0xa2) = *(byte *)((int)param_2 + 0xa2) & 0xfd;
  }
  FUN_00381379(param_1);
  return;
}
