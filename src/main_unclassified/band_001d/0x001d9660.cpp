/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 180AA9FC15A26A443F58CC40A20ED6D84C45C082DAAF037D21187D3A897DE068
 * Entry: 0x001d9660, Ghidra index: 6470, label: FUN_001d9660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d9660(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    puVar1 = (undefined4 *)(param_3 + -0x20);
    param_3 = param_3 + -0x20;
    puVar2 = param_4 + -8;
    *puVar2 = *puVar1;
    FUN_00087940(param_4 + -7,0,0xffffffff);
    param_4 = puVar2;
  } while (param_3 != param_2);
  *param_1 = puVar2;
  return param_1;
}
