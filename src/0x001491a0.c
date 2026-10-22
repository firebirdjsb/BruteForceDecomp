/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED94C146C99DD5EABA051DE4F4AF1C498BF9ED440E570238A412536233A05218
 * Entry: 0x001491a0, Ghidra index: 4268, label: FUN_001491a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001491a0(int param_1)

{
  int in_ECX;
  
  FUN_00145e90(param_1);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1ac);
  return;
}
