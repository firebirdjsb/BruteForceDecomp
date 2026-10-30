/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEE37118FDF5A484A6DF5CEFC72A58316F4922F6262A3D54D48EC26276EFB1AA
 * Entry: 0x0031c417, Ghidra index: 12332, label: FUN_0031c417
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
void FUN_0031c417(int param_1)

{
  int *in_ECX;
  
  FUN_003118f0();
  if ((*(byte *)((&DAT_0032f784)[*in_ECX] + -0x13ffefa) & 1) != 0) {
    FUN_0031c357();
  }
  if (param_1 != -1) {
    FUN_0031c222(param_1);
  }
  *(undefined1 *)((&DAT_0032f784)[*in_ECX] + -0x13ffef5) = 0x1d;
  FUN_00311923();
  return;
}
