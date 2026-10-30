/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F352575C9B34DEB64A5AF4DADFDC298E4247D0C3B9153E9E5D93115C711A9885
 * Entry: 0x001353c0, Ghidra index: 3874, label: FUN_001353c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001353c0(void)

{
  int *piVar1;
  int unaff_EBX;
  uint *unaff_EDI;
  int local_8;
  int local_4;
  
  local_8 = FUN_000a2840(unaff_EDI);
  if ((local_8 == *(int *)(unaff_EBX + 8)) || (*unaff_EDI < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(unaff_EBX + 8);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 == *(int *)(unaff_EBX + 8)) {
    return 0;
  }
  return *(undefined4 *)(*piVar1 + 0x10);
}
