/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F79D577DDF7A6ADD4C385AE1E4C34CB86EBBC60A5087EF3F3DE8BD12F968CD3
 * Entry: 0x0005d290, Ghidra index: 962, label: FUN_0005d290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005d290(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 2;
}
