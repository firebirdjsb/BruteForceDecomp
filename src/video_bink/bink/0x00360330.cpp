/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D8E94709981CD4E0CF1B282D7E98CFDC09E274998CD54FC17D13AC3C40A7D00
 * Entry: 0x00360330, Ghidra index: 13225, label: FUN_00360330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b2c;
extern uint32_t *DAT_00414b34;
void FUN_00360330(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *DAT_00414b34;
  if ((uVar1 & 4) != 0) {
    uVar2 = rdtsc();
    DAT_00414b2c = (int)uVar2 - DAT_00414b2c;
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar1 >> 3 & 0x1f;
      if (uVar1 >> 8 <= DAT_00414b2c) {
        if (uVar3 == 0x1f) {
          *DAT_00414b34 = 1;
          return;
        }
        *DAT_00414b34 = uVar3 * 8 + 8 & 0xf8;
        return;
      }
      if (uVar3 == 0) {
        *DAT_00414b34 = 3;
        return;
      }
      *DAT_00414b34 = (uVar3 - 1 & 0x1f) << 3;
      return;
    }
    *DAT_00414b34 = DAT_00414b2c * 0x100 | uVar1 & 0xfd | 2;
  }
  return;
}
