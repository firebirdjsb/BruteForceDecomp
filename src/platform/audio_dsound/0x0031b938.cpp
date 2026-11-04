/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B45BDB8C65504B510CAECA226EBEEFF87455063E29E0C8FC7789554BEF72B8B9
 * Entry: 0x0031b938, Ghidra index: 12303, label: FUN_0031b938
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
extern uint32_t _DAT_fe801100;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b938(int param_1)

{
  FUN_003118f0();
  if (param_1 == 0) {
    _DAT_fe801100 = _DAT_fe801100 & 0xffffff9f | 0x80;
  }
  else if (param_1 == 1) {
    _DAT_fe801100 = _DAT_fe801100 & 0xffffff1f;
  }
  else if (param_1 == 2) {
    _DAT_fe801100 = _DAT_fe801100 | 0x1007;
  }
  else if (param_1 == 3) {
    _DAT_fe801100 = _DAT_fe801100 & 0xffffeff8;
  }
  FUN_00311923();
  return;
}
