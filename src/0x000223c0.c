/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37A0E8077196A67C04F87C71805BED3E685A827AF5C460A3242E076CB9AC0C27
 * Entry: 0x000223c0, Ghidra index: 195, label: FUN_000223c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000223c0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x1a8);
  *puVar1 = 1;
  puVar1[0xd] = 0x3e99999a;
  puVar1[0xb] = 0x3e99999a;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) & 0xf9 | 1;
  (**(code **)(*(int *)(unaff_ESI + 0x40) + 0x18))();
  *(undefined4 *)(unaff_ESI + 0x740) = *(undefined4 *)(unaff_ESI + 0x738);
  *(undefined4 *)(unaff_ESI + 0x6ac) = 3;
  *param_1 = 1;
  return 1;
}
