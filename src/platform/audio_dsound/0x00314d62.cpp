/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DF3DFF3C38D554802A070EE49F7F7126030FEB9A4FA3A1A22B21976E1C59071
 * Entry: 0x00314d62, Ghidra index: 12090, label: FUN_00314d62
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031cca8;
extern uint32_t DAT_0031ccac;
extern uint32_t DAT_0031ccb0;
void FUN_00314d62(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = DAT_0031cca8;
  in_ECX[2] = DAT_0031ccac;
  in_ECX[3] = DAT_0031ccb0;
  return;
}
