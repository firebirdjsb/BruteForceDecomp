/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1C2088FAC8DBC71CEC7EB4CB3354A41765E74FD00FC9ECBC1737441DDA8A4B1
 * Entry: 0x002c7050, Ghidra index: 10092, label: FUN_002c7050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e734;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e65c;
void FUN_002c7050(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  
  iVar3 = unaff_ESI[1];
  *unaff_ESI = PTR_LAB_0038e65c;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    puVar2 = *(undefined4 **)(unaff_ESI[3] + 4 + iVar3 * 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *unaff_ESI = &PTR_FUN_0038e734;
  if (((unaff_ESI[2] & 0xff000000) == 0) && (unaff_ESI[3] != 0)) {
    (*(code *)PTR_FUN_003bc654)(unaff_ESI[3]);
    return;
  }
  return;
}
