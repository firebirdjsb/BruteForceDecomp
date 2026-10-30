/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9EC0C1FC615516A69739599CF1B4332D3BA0A413A855C07F7D12F60E627FD52
 * Entry: 0x00315f72, Ghidra index: 12124, label: FUN_00315f72
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00315f72(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((*(byte *)(param_1 + 2) & 2) == 0) {
    *param_1 = in_ECX + 0x6e8;
    puVar1 = *(undefined4 **)(in_ECX + 0x6ec);
    param_1[1] = (int)puVar1;
    *puVar1 = param_1;
    *(int **)(*param_1 + 4) = param_1;
  }
  return 1;
}
