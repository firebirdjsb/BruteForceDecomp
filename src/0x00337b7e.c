/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 529FE2F6C90AFDF5DA3DFAC2FC6DB29680BB230012746484A3A6C4B744B04C23
 * Entry: 0x00337b7e, Ghidra index: 12465, label: FUN_00337b7e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00337b7e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00330c3e(*(undefined4 *)(param_1 + 0x108));
  if ((iVar1 != 0) && (*(undefined4 *)(param_1 + 0x14) = 6, iVar1 < 0)) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return 0;
}
