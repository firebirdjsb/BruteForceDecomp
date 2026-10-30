/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6538DD27D25B6418FBED71574A43D89FD7C1570CCBB4273443C068B9E8100FC9
 * Entry: 0x00174420, Ghidra index: 4907, label: FUN_00174420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00174420(void)

{
  int in_EAX;
  int *piVar1;
  uint *unaff_EDI;
  int local_8;
  int local_4;
  
  local_8 = FUN_000a2840(unaff_EDI);
  local_4 = *(int *)(in_EAX + 4);
  if ((local_8 == local_4) || (*unaff_EDI < *(uint *)(local_8 + 0xc))) {
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 != local_4) {
    return *(undefined4 *)(*piVar1 + 0x10);
  }
  return 0;
}
