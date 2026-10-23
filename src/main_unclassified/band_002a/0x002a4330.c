/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5E4337B0F0264D629F89DF4E0F14D8DDAD73D8560C27C6C9F20F45E3F8D0E06
 * Entry: 0x002a4330, Ghidra index: 9547, label: FUN_002a4330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00390620;
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
extern uint32_t PTR_LAB_003a3854;
void FUN_002a4330(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  
  FUN_00060bb0();
  *unaff_ESI = &PTR_FUN_00390620;
  unaff_ESI[0x11] = &PTR_FUN_003a35a8;
  unaff_ESI[0x13] = &PTR_FUN_003a35a4;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x10] = 0;
  FUN_000624d0();
  uVar2 = FUN_00238430();
  unaff_ESI[0x12] = uVar2;
  *(undefined1 *)(unaff_ESI + 0x19) = 0;
  piVar3 = (int *)FUN_002ea01d(0x34);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_0029ecf0();
    *piVar3 = (int)&PTR_LAB_003a3854;
    piVar3[0xc] = 1;
  }
  piVar1 = (int *)unaff_ESI[0x1a];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0x1a] = 0;
    }
    unaff_ESI[0x1a] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return;
}
