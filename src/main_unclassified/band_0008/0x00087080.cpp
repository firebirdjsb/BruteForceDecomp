/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06510D695796F537AE24BF3F601EFDBDF9B6B1843C7F19DBE862CD9E7CBB7847
 * Entry: 0x00087080, Ghidra index: 1606, label: FUN_00087080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00087300(void);

void FUN_00087080(void)

{
  int in_EAX;
  int unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x4c) {
    FUN_00087300();
  }
  return;
}
