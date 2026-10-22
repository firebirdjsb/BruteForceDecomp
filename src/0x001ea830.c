/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE5254672756AF33385717C43D56E37E43176B764BB2CD6441DB19EB8ABBBCD2
 * Entry: 0x001ea830, Ghidra index: 6873, label: FUN_001ea830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t *DAT_00443308;
extern uint32_t *DAT_00469940;
extern uint32_t *DAT_00469944;
extern uint32_t DAT_0046995c;
extern uint32_t *DAT_00469b54;
void FUN_001ea830(void)

{
  char cVar1;
  undefined4 *unaff_ESI;
  
  if (DAT_0046995c != 0) {
    FUN_001ec3f0();
  }
  cVar1 = (**(code **)(*DAT_00469b54 + 0x14))();
  if (cVar1 == '\0') {
    (**(code **)(*DAT_00443300 + 0x1c))(*unaff_ESI);
    (**(code **)(*DAT_00443308 + 0x4c))(DAT_00443308,*unaff_ESI);
  }
  if (DAT_00469944 != (undefined4 *)0x0) {
    (**(code **)*DAT_00469944)(*unaff_ESI);
  }
  if (DAT_00469940 != (int *)0x0) {
    (**(code **)(*DAT_00469940 + 0x14))(*unaff_ESI);
  }
  return;
}
