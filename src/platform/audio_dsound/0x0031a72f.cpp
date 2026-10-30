/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAF6ABABF6B56F8527EEEC64388908A8286B7D92CED3D5F4D61FB467F2A7D6F2
 * Entry: 0x0031a72f, Ghidra index: 12262, label: FUN_0031a72f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031a72f(uint *param_1)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x1c) != 0) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x40) + 0x2c);
    do {
      if (*piVar1 != -0x7ffffff6) {
        if (param_1 != (uint *)0x0) {
          *param_1 = uVar2;
        }
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xc;
    } while (uVar2 < *(uint *)(in_ECX + 0x1c));
  }
  return 0;
}
