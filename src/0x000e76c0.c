/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5351D0477DC43F931D355B253D9423166932CBAD33483524A8F2ED41CB38B817
 * Entry: 0x000e76c0, Ghidra index: 2871, label: FUN_000e76c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041b510;
extern uint32_t DAT_0041b810;
extern uint32_t DAT_0041d020;
extern uint32_t DAT_00469a84;
extern uint32_t DAT_00469a8c;
extern uint32_t DAT_00469a98;
void FUN_000e76c0(void)

{
  if (DAT_00469a84 != 0) {
    FUN_000e8b40(&DAT_0041d020,&DAT_0041d020 + DAT_00469a84 * 0xc,(DAT_00469a84 * 0xc) / 0xc);
  }
  if (DAT_00469a8c != 0) {
    FUN_000e8b40(&DAT_0041b810,&DAT_0041b810 + DAT_00469a8c * 0xc,(DAT_00469a8c * 0xc) / 0xc);
  }
  if (DAT_00469a98 != 0) {
    FUN_000e8b40(&DAT_0041b510,&DAT_0041b510 + DAT_00469a98 * 0xc,(DAT_00469a98 * 0xc) / 0xc);
  }
  return;
}
