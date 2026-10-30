/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2078D34BA19242FB230D1FEAA04553A72877497BA763E66C0C688B7B503E3E3
 * Entry: 0x0006c610, Ghidra index: 1225, label: FUN_0006c610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5824;
extern uint32_t DAT_004a5848;
void FUN_0006c610(void)

{
  int *in_ECX;
  
  if (((*(byte *)(in_ECX + 0x13) & 2) != 0) && (*(int *)(in_ECX[3] + 4) != 0x10)) {
    (**(code **)(*in_ECX + 0x38))(&DAT_004a5848);
    (**(code **)(*in_ECX + 0x3c))(&DAT_004a5824);
    *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfd;
  }
  return;
}
