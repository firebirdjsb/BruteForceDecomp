/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 108547BE6031B1877D745CBC34D6DBF058C7D8166139F1B0CE97170D2FB7BD91
 * Entry: 0x0031b8ca, Ghidra index: 12301, label: FUN_0031b8ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declarations; original Xbox ECX and ABI_UNVERIFIED. */
extern void FUN_003118f0(void);
extern void FUN_00311923(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801004;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b8ca(int param_1)

{
  FUN_003118f0();
  _DAT_fe801004 = (param_1 != 0 ^ _DAT_fe801004) & 1 ^ _DAT_fe801004;
  FUN_00311923();
  return;
}
