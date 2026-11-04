/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F174D9F2CAF6F989D012DCB7A2EC0BD2F4AAAF288821BF04D7404B4BFD3DD7F7
 * Entry: 0x001a7ef0, Ghidra index: 5422, label: FUN_001a7ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001ace50(void);
undefined4 FUN_001a7ef0(void)

{
  undefined4 *in_EAX;
  
  FUN_001ace50();
  return *in_EAX;
}
