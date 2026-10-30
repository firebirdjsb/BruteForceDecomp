/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08815210CD1A946E1B2BA8A521AD39391B199DC5B93EBEF0DD6527B3B2F58408
 * Entry: 0x0027f650, Ghidra index: 9022, label: FUN_0027f650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00391a88;
extern uint32_t PTR_DAT_00391ab0;
extern uint32_t PTR_LAB_00391a38;
void FUN_0027f650(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[1];
  *unaff_ESI = PTR_DAT_00391ab0;
  unaff_ESI[4] = PTR_DAT_00391a88;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x40))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[5];
  if ((piVar1 != (int *)0x0) && (iVar2 = unaff_ESI[6], iVar2 != -1)) {
    unaff_ESI[5] = 0;
    piVar1[7] = piVar1[7] + -1;
    if (iVar2 == *(short *)(*piVar1 + 0x10)) {
      piVar1[8] = 0;
    }
  }
  *unaff_ESI = &PTR_LAB_00391a38;
  return;
}
