/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E9C7C7B303ECEDA8AABF0870E8E539C7C32BFFC3D615514CC2745BFC65ED37E
 * Entry: 0x003439cc, Ghidra index: 12719, label: FUN_003439cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_003439cc(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = (uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) <
          (uint)(*(int *)(param_1 + 0x24) + param_2);
  if (bVar1) {
    FUN_00343377(param_1,0xfffffc16);
  }
  return !bVar1;
}
