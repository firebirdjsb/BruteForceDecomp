/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8F10B179FAD9582F511DDD7651D5AE182B32051A6A157C7852FB277F9CECD5A
 * Entry: 0x002d5c80, Ghidra index: 10230, label: FUN_002d5c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e734;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e790;
void FUN_002d5c80(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  iVar2 = unaff_EDI[1];
  *unaff_EDI = PTR_LAB_0038e790;
  for (; -1 < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = *(int *)(unaff_EDI[3] + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      if (*(short *)(iVar1 + 0xc) != 0) {
        if (*(int *)(iVar1 + 8) != 0) {
          (*(code *)PTR_FUN_003bc654)(*(int *)(iVar1 + 8));
          return;
        }
        *(undefined2 *)(iVar1 + 4) = 0;
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      *(undefined2 *)(iVar1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  *unaff_EDI = &PTR_FUN_0038e734;
  if (((unaff_EDI[2] & 0xff000000) == 0) && (unaff_EDI[3] != 0)) {
    (*(code *)PTR_FUN_003bc654)(unaff_EDI[3]);
    return;
  }
  return;
}
