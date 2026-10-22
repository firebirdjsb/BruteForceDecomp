/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02E00122247168CAE7CBFF3D740250BB0606426084CB28027CF3E854AB5DE894
 * Entry: 0x002a4070, Ghidra index: 9540, label: FUN_002a4070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a4070(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84) + 1;
  *(int *)(param_1 + 0x84) = iVar1;
  return iVar1;
}
