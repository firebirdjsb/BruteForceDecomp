/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 754F1D94B9D70021A3C2CF612BBBF6D2DBDB1049CE25A2F5404F4EB6E1ED0DC8
 * Entry: 0x00289f20, Ghidra index: 9151, label: FUN_00289f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
int * FUN_00289f20(void)

{
  int *in_EAX;
  uint *puVar1;
  int *piVar2;
  
  if (in_EAX == (int *)0x0) {
    piVar2 = (int *)DAT_00469888[0x16];
  }
  else {
    if (in_EAX == (int *)*in_EAX) {
      FUN_00295240();
    }
    piVar2 = (int *)*in_EAX;
  }
  puVar1 = DAT_00469888;
  if (piVar2 != (int *)0x0) {
    while (piVar2[4] == -6) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    *(undefined4 *)*DAT_00469888 = 0xfffffffe;
    *(int **)(*puVar1 + 8) = piVar2;
    if (puVar1[2] <= *puVar1) {
      FUN_0028a460();
      puVar1 = DAT_00469888;
    }
    *puVar1 = *puVar1 + 0x10;
    FUN_00289d40();
  }
  return piVar2;
}
