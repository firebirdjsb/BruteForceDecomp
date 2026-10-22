/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59688785C900233367A0C420F5D82824142759E07EE05F04D78E75A86324AE9A
 * Entry: 0x002e3f20, Ghidra index: 10425, label: FUN_002e3f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3f20(void)

{
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  XAPILIB__QueryPerformanceCounter(&local_8);
  *(undefined4 *)(in_ECX + 0x10) = local_8;
  *(undefined4 *)(in_ECX + 0x14) = local_4;
  *(undefined1 *)(in_ECX + 0x20) = 1;
  return;
}
