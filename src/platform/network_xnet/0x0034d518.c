/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23512AD9A06917E72B91C44AF59E87A02EA92F175B220F0D9A38B9F8F7D79ECF
 * Entry: 0x0034d518, Ghidra index: 13003, label: FUN_0034d518
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5d8;
extern uint32_t DAT_0040f5e8;
void FUN_0034d518(void)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  if (((uVar1 & 0x400) != 0) && ((uVar1 & 0x2000) == 0)) {
    if ((uVar1 & 0x800) != 0) {
      HalRegisterShutdownNotification(in_ECX + 0x94,0);
    }
    if (in_ECX[0x98] == 0) {
      FUN_0034ced7();
      if (DAT_0040f5e8 != '\0') {
        KeDisconnectInterrupt(&DAT_0040f5d8);
      }
      KeRemoveQueueDpc(in_ECX + 0x7b);
    }
    FUN_00352ebc(0x2000);
  }
  FUN_0034caf1();
  return;
}
