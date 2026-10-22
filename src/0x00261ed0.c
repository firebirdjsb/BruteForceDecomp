/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57D6E6D9FFEA5F16D4FBBA63427CF2685C120F203400A606AF30FB3945D564A1
 * Entry: 0x00261ed0, Ghidra index: 8649, label: FUN_00261ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00261ed0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 8;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = D3D8LTCG__D3D_BlockOnResource_0();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return iVar1;
}
