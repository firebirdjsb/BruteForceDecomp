/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8418EC8199F1D1CBDC0D91F0128C3BA910A597DB7E123BA777139227D63C7FF
 * Entry: 0x00262a90, Ghidra index: 8661, label: FUN_00262a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00262a90(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    if (param_2 < (uint)((param_1[8] - param_1[7]) / 0x14)) {
      piVar1 = (int *)(param_1[7] + param_2 * 0x14);
      param_1[0xc] = *piVar1;
      param_1[0xd] = piVar1[1];
      param_1[0xe] = piVar1[2];
      param_1[0xf] = piVar1[3];
      piVar1 = (int *)(**(code **)(*param_1 + 0x54))(param_1,piVar1[4]);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
        param_1[0x10] = iVar2;
        return param_1 + 0xc;
      }
      param_1[0x10] = 0;
      return param_1 + 0xc;
    }
  }
  return (int *)0x0;
}
