/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D146B3ED94D00EDADDECBFEC0489FA3EE72B5008F521727DB99F91F1FA6F3BB7
 * Entry: 0x000d8ce0, Ghidra index: 2676, label: FUN_000d8ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
undefined4 FUN_000d8ce0(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  undefined4 local_4;
  
  local_4 = 0x12452ad9;
  piVar2 = (int *)(**(code **)(*DAT_00443300 + 0x2c))(&local_4);
  piVar1 = *(int **)(unaff_ESI + 0xc38);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_ESI + 0xc38) = 0;
    }
    *(int **)(unaff_ESI + 0xc38) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  /* XBE 0x000d8d30 LEA EDX,[ESP+4] and 0x000d8d34 MOV [ESP+4],0xf7bcbdb1:
   * same saved-ECX stack word used for the first lookup at 0x000d8ce8. */
  local_4 = 0xf7bcbdb1;
  piVar2 = (int *)(**(code **)(*DAT_00443300 + 0x2c))(&local_4);
  piVar1 = *(int **)(unaff_ESI + 0xc3c);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(unaff_ESI + 0xc3c) = 0;
    }
    *(int **)(unaff_ESI + 0xc3c) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return 1;
}
