/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F4EE04F528E022385276EDC47109349C64F05150546942C17D603EB6B35111B
 * Entry: 0x00174270, Ghidra index: 4903, label: FUN_00174270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174270(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 4);
  *(float *)(param_1 + 0x1c) = param_2 + *(float *)(param_1 + 0x1c);
  iVar3 = (int)((*(float *)(param_1 + 0x1c) - (float)*(int *)(param_1 + 0x18) * 0.001) * 1000.0);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar3;
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar3 = (int)(param_2 * 1000.0);
  }
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 != iVar1) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    FUN_00174930(iVar3);
    FUN_0012aba0();
    iVar1 = *(int *)(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
