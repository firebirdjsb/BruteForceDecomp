/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 292B9F30F2E84A021074B24C6E2CDD67F76CC4710D407D4919E7626F3854B1B5
 * Entry: 0x0018ae30, Ghidra index: 5266, label: FUN_0018ae30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001a97d0(byte param_1);
undefined4 FUN_0018ae30(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001a97d0(1);
  }
  return 0;
}
