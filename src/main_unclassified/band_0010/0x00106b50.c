/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1901AE5E1B4969EAEBA1ED84C4806589BE1841B9F171A63806979D4E87E6B022
 * Entry: 0x00106b50, Ghidra index: 3362, label: FUN_00106b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00106b50(void)

{
  char cVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  float10 fVar2;
  float fStack_d8;
  undefined1 local_d4 [8];
  int iStack_cc;
  int iStack_c8;
  
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  FUN_00106660();
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(local_d4);
  if (cVar1 != '\0') {
    *unaff_ESI = (int)(((float)iStack_c8 * 0.1 + 1.0) * (fStack_d8 / ((float)iStack_cc * 0.1 + 1.0))
                      );
    fVar2 = (float10)FUN_00106860(&fStack_d8);
    *unaff_EDI = (int)fVar2;
  }
  return;
}
