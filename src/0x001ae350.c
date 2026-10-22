/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5961F53A99FE5ABC8A21882EC05E4CDB7804634A407FF87DCA360FDB0881850
 * Entry: 0x001ae350, Ghidra index: 5553, label: FUN_001ae350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ae350(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x94;
}
