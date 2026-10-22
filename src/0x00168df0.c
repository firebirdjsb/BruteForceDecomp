/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 053443171DEE5E86861E486CF9CA73CAA619236E6C08EEA996C6B9381CD39CA1
 * Entry: 0x00168df0, Ghidra index: 4743, label: FUN_00168df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00168df0(undefined2 *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x16);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      fVar1 = 0.0;
      iVar2 = 0;
      if (0 < iVar5) {
        pfVar3 = *(float **)(param_1 + 0x4e);
        do {
          iVar4 = iVar2 << ((byte)*param_1 & 0x1f);
          iVar2 = iVar2 + 1;
          fVar1 = *(float *)(*(int *)(param_1 + 2) + (iVar4 + iVar6) * 4) * *pfVar3 + fVar1;
          pfVar3 = pfVar3 + 1;
        } while (iVar2 < iVar5);
      }
      *(float *)(*(int *)(param_1 + 0x56) + iVar6 * 4) = fVar1;
      iVar5 = *(int *)(param_1 + 0x16);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}
