/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AF8B63E299C75A400EAE82C5DF6CC611B13608231DEBB14A19334B2599B7DCC
 * Entry: 0x00072360, Ghidra index: 1277, label: FUN_00072360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00072360(void)

{
  int in_EAX;
  
  if ((*(char *)(in_EAX + 0x84) == '\0') && (*(int *)(in_EAX + 0x8c) != 0)) {
    return 1;
  }
  return 0;
}
