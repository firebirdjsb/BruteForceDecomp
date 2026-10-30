/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8617A09197D74B34D9B007208EDD33FA13780E54CA94FB8EDAFFF69553321CA
 * Entry: 0x001716e0, Ghidra index: 4855, label: FUN_001716e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001716e0(void)

{
  int in_EAX;
  char in_DL;
  
  *(uint *)(in_EAX + 0x3c4) = (in_DL == '\0' | 2) << 1 | *(uint *)(in_EAX + 0x3c4) & 0xfffffffd;
  return;
}
