/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C35058C8EC7723D30A34ADF3BCA41101FD711F3E75ACEC5E1463F851E1101AEC
 * Entry: 0x00385d45, Ghidra index: 13682, label: FUN_00385d45
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fe2;
bool FUN_00385d45(ushort param_1)

{
  bool bVar1;
  
  bVar1 = param_1 <= DAT_004a8fe2;
  if (bVar1) {
    DAT_004a8fe2 = DAT_004a8fe2 - param_1;
  }
  return bVar1;
}
