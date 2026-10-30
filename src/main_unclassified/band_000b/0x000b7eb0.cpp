/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C41993524A3CF9196413FF7BB2B5A8C0F83DF0CE0155E35F072285143D008A5C
 * Entry: 0x000b7eb0, Ghidra index: 2212, label: FUN_000b7eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b6f50(char param_1);

void FUN_000b7eb0(undefined4 param_1)

{
  int extraout_ECX;
  
  FUN_000b6f50(param_1);
  *(undefined4 *)(extraout_ECX + 0xc4) = 0;
  if ((char)param_1 != '\0') {
    *(undefined4 *)(extraout_ECX + 0x9c) = 0x3f800000;
    *(undefined4 *)(extraout_ECX + 0xa0) = 0xc0400000;
    *(undefined4 *)(extraout_ECX + 0x90) = 0x40400000;
    *(undefined4 *)(extraout_ECX + 0x7c) = 0xc0a00000;
    return;
  }
  *(undefined4 *)(extraout_ECX + 0x9c) = 0;
  *(undefined4 *)(extraout_ECX + 0xa0) = 0x40400000;
  *(undefined4 *)(extraout_ECX + 0x90) = 0x40800000;
  *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  return;
}
