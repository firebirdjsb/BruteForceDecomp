/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B155197B992F6659FEE65E0DC106CCD2765A933261EE3AD89D6797CB4BB809E
 * Entry: 0x001a80b0, Ghidra index: 5427, label: FUN_001a80b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001acfe0(void);
undefined4 FUN_001a80b0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_001acfe0();
  return *unaff_ESI;
}
