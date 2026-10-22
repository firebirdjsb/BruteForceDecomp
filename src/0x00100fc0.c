/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7060C43815BED1EA51B9AC448DAC13C38287245F03FA08BF3933F8EB774F163F
 * Entry: 0x00100fc0, Ghidra index: 3231, label: FUN_00100fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_00100fc0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  if ((0x10 < *(int *)(in_EAX + 0x60)) && (*(int *)(in_EAX + 0x60) < 0x15)) {
    uVar1 = FUN_000efa30();
    return uVar1;
  }
  FUN_000f6da0();
  iVar2 = FUN_000f6e10();
  iVar2 = *(int *)(*(int *)(DAT_00469948 + 0x22c + iVar2 * 4) + 0xc4);
  if (iVar2 != 0) {
    return *(undefined4 *)(iVar2 + 0xbc);
  }
  return 4;
}
