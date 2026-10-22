/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA672713834FCBEFE9AFF18A30C1CDA5C851FC1163DCB0925B96B52B967B850E
 * Entry: 0x00315e0a, Ghidra index: 12121, label: FUN_00315e0a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032fdd8;
extern uint32_t _DAT_fe85fffc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00315e0a(void)

{
  int in_ECX;
  
  _DAT_0032fdd8 = _DAT_0032fdd8 + 1;
  FUN_0031b993(0);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_0031c357();
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_0031c357();
  }
  FUN_0031bae8();
  _DAT_fe85fffc = 1;
  FUN_0031b68e();
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_0031c417(0xffffffff);
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_0031c417(0xffffffff);
  }
  FUN_0031b993(1);
  return;
}
