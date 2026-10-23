/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F20FA40F139524EA6C33445F47918E792CBD86FD16BC18DA3585F6F106770E8C
 * Entry: 0x000212b0, Ghidra index: 184, label: FUN_000212b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000212b0(void)

{
  int in_EAX;
  undefined1 *unaff_EDI;
  
  FUN_000223c0(unaff_EDI);
  *(undefined4 *)(in_EAX + 0x6ac) = 0x10;
  *unaff_EDI = 1;
  return 1;
}
