/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A240B94C6D770CBC1DAF62E172E5EB2720C5603224BA6270236AAA6DEDD1481C
 * Entry: 0x001a74e0, Ghidra index: 5399, label: FUN_001a74e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001ab700(void);
undefined4 FUN_001a74e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_001ab700();
  return *unaff_ESI;
}
