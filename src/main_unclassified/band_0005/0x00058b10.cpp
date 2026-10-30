/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B827D0FF2976C2BF36784F3442623BB1280591E8313307B99D32E50C202E878B
 * Entry: 0x00058b10, Ghidra index: 879, label: FUN_00058b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00058b10(void)

{
  int *in_ECX;
  
  if (((((*(byte *)(in_ECX + 0xc) & 1) != 0) && ((*(byte *)(in_ECX + 0xc) >> 1 & 1) != 0)) &&
      (*in_ECX != in_ECX[1])) && (in_ECX[1] < 4)) {
    FUN_00058a60();
    return;
  }
  return;
}
