/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A495D5B3CC3EB2A0FB3FBF6BC442E93F8540CCCDAFD746C5B3B76585267DD14
 * Entry: 0x001eddd0, Ghidra index: 6948, label: FUN_001eddd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern undefined4 FUN_002e7070(char param_1);
void FUN_001eddd0(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x24) = 0;
  if ((*(int *)(in_EAX + 0x18) != 0) && (*(int *)(*(int *)(in_EAX + 0x18) + 0x4898) == 5)) {
    FUN_002e7070(0);
  }
  return;
}
