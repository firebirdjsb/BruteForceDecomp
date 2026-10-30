/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96D9A4EBD1253F574F4AE30EAEC77FC7D99D4A0422B39513EBBB15007C89FC94
 * Entry: 0x002b34a0, Ghidra index: 9763, label: FUN_002b34a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e848;
extern uint32_t PTR_FUN_0038e84c;
void FUN_002b34a0(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  iVar1 = unaff_ESI[6];
  *unaff_ESI = PTR_FUN_0038e848;
  while (iVar1 != 0) {
    if ((undefined4 *)unaff_ESI[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)unaff_ESI[6])(1);
    }
    iVar1 = unaff_ESI[6];
  }
  *unaff_ESI = &PTR_FUN_0038e84c;
  if (unaff_ESI[4] != 0) {
    if (unaff_ESI[3] == 0) {
      *(undefined4 *)(unaff_ESI[4] + 0x18) = unaff_ESI[2];
    }
    else {
      *(undefined4 *)(unaff_ESI[3] + 8) = unaff_ESI[2];
    }
    if (unaff_ESI[2] != 0) {
      *(undefined4 *)(unaff_ESI[2] + 0xc) = unaff_ESI[3];
    }
  }
  unaff_ESI[5] = 0;
  return;
}
