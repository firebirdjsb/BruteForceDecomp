/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38B393EB87745DA6FADA6BB21845AA3E3FC3CA344A0F41744759A3BC8EC1BCB0
 * Entry: 0x0029a360, Ghidra index: 9405, label: FUN_0029a360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0029a360(void)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != in_EAX) {
    FUN_0029a240();
  }
  if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
     (*(int *)(unaff_ESI + 0x1c) != *(int *)(*(int *)(unaff_ESI + 8) + 0x20))) {
    FUN_00299580(0x3c,*(int *)(unaff_ESI + 0x1c),0);
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(unaff_ESI + 4) = uVar1;
  return;
}
