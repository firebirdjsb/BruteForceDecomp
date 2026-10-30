/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A86579BCB01CEE7C6693470C7EE869BA2A74CB3D84CD66FB6F0950588C1C2B1
 * Entry: 0x0033bc7e, Ghidra index: 12532, label: FUN_0033bc7e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bc7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  *(undefined4 *)(in_ECX + 0x20) = param_2;
  *(undefined4 *)(in_ECX + 0x24) = param_3;
  *(undefined4 *)(in_ECX + 0x1c) = param_4;
  *(undefined4 *)(in_ECX + 0x28) = param_5;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}
