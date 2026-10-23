/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D5587BCBFD84A8E5B73CE62B22178B2EE884B50B7E81808440D572C6936572C
 * Entry: 0x00161700, Ghidra index: 4611, label: FUN_00161700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161700(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x368) {
    FUN_00160320();
  }
  return;
}
