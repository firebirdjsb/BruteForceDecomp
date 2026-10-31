/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32625B5382FB4EDF1189D5A1D09DAD413F84AE0B90B69B3D122D7928ED6AE532
 * Entry: 0x001a74c0, Ghidra index: 5398, label: FUN_001a74c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001ab690(void);
undefined4 FUN_001a74c0(void)

{
  undefined4 *in_EAX;
  
  FUN_001ab690();
  return *in_EAX;
}
