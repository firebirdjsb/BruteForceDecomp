/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B361D8F8602FB7217DAD30C44EA98B0EBDF0A638139DF54AB3E66E899DCF1BE
 * Entry: 0x002e3890, Ghidra index: 10413, label: FUN_002e3890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3890(undefined1 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    *param_1 = *(undefined1 *)
                (*(int *)(in_ECX + 0x10) + 8 +
                ((*(int *)(in_ECX + 0x1c) - 1U) % *(uint *)(in_ECX + 0x14)) * 0xc);
    return;
  }
  *param_1 = 0;
  return;
}
