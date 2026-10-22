/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E2D432894137F955EE6603BC6E73C36E8A20AD11BFC0A07A456C9ED4E02B28E
 * Entry: 0x0002ce60, Ghidra index: 298, label: FUN_0002ce60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002ce60(void)

{
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x4ec) == 0) && ((*(byte *)(in_ECX + 0x3a0) & 1) != 0)) &&
     (*(float *)(in_ECX + 0x39c) != 0.0)) {
    *(undefined4 *)(in_ECX + 0x4f0) = 0;
    return 0x3d;
  }
  if (((*(int *)(in_ECX + 0x4f0) == 0) && ((*(byte *)(in_ECX + 0x3b0) & 1) != 0)) &&
     (*(float *)(in_ECX + 0x3ac) != 0.0)) {
    *(undefined4 *)(in_ECX + 0x4ec) = 0;
    return 0x3e;
  }
  return 0;
}
