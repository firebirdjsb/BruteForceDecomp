/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9F749F80F388D707FB05345177C3EE97B9F196650293E56F82E4847C63E1572
 * Entry: 0x0013d780, Ghidra index: 4017, label: FUN_0013d780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013d780(float param_1)

{
  float fVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  if (*(float *)(in_ECX + 0x20) == 0.0) {
    if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + 0x2e8);
      cVar2 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
      if ((cVar2 != '\0') && (*(int *)(iVar3 + 0x198) != 0)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + 0x2e8);
        cVar2 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
        if (cVar2 == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x198);
        }
        if (*(int *)(iVar3 + 0x1f8) == 0) {
          (**(code **)(**(int **)(in_ECX + 0x18) + 0x15c))(8,0);
        }
      }
    }
  }
  else {
    fVar1 = *(float *)(in_ECX + 0x20) - param_1;
    *(float *)(in_ECX + 0x20) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(in_ECX + 0x20) = 0;
      FUN_0010e500(param_1);
      return;
    }
  }
  FUN_0010e500(param_1);
  return;
}
