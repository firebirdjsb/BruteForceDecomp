/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4BD8FB0A56EB9EFB63B806F61190406921551BB9A3A79C41F5E07D194D7F905
 * Entry: 0x001fab30, Ghidra index: 7096, label: FUN_001fab30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fab30(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if ((~*(byte *)(in_ECX + 0x3d) & 1) != 0) {
    FUN_001ff0f0(param_1);
    FUN_001ff000();
    return;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 4) == 0x27) {
      iVar2 = (**(code **)(*piVar1 + 0xf4))();
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x3c8) = in_ECX;
      }
    }
    else if (*(int *)(param_1 + 4) == 0x28) {
      iVar2 = (**(code **)(*piVar1 + 0xf4))();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x3c8) = 0;
        return;
      }
    }
  }
  return;
}
