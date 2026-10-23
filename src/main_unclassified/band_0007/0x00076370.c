/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30E6207496F380573F0EBC0DCB819F54050BE7C358D427BB2D7DFE926BC86555
 * Entry: 0x00076370, Ghidra index: 1370, label: FUN_00076370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076370(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (in_ECX != 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0xf;
    *(undefined1 *)(in_ECX + 4) = 0;
    FUN_0001f4f0(param_2,0,0xffffffff);
  }
  return;
}
