/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07D6F649B491F8F75429FC1119D9A61AC3B8F8FC6D497926EC5D3AEE0693E64B
 * Entry: 0x001e4810, Ghidra index: 6782, label: FUN_001e4810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e4810(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = in_EAX;
  unaff_EBX[1] = in_ECX;
  FUN_001ca910();
  *(undefined1 *)(unaff_EBX + 0x12) = *(undefined1 *)(in_EDX + 0x40);
  return;
}
