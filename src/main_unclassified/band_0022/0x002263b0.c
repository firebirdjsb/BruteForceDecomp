/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA2E5128334DBD67A88B82B64D32871D27CDC598154CE9D0BA1FCA057D3068D1
 * Entry: 0x002263b0, Ghidra index: 7644, label: FUN_002263b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002263b0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  *(undefined4 *)(in_EAX + 0x204) = unaff_ESI[1];
  *(undefined4 *)(in_EAX + 0x200) = unaff_ESI[2];
  *(undefined4 *)(in_EAX + 0x1fc) = *unaff_ESI;
  *(undefined4 *)(in_EAX + 0x210) = unaff_ESI[4];
  *(undefined4 *)(in_EAX + 0x20c) = unaff_ESI[3];
  *(byte *)(in_EAX + 0x220) = *(char *)(unaff_ESI + 5) << 7 | *(byte *)(in_EAX + 0x220) & 0x7f;
  *(byte *)(in_EAX + 0x221) =
       *(byte *)(in_EAX + 0x221) ^
       (*(char *)((int)unaff_ESI + 0x15) << 1 ^ *(byte *)(in_EAX + 0x221)) & 2;
  return;
}
