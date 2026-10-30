/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 260FCA8CE2D55A07E64603C653C2A67540C36F78D66723619DC3814CA838E873
 * Entry: 0x00091450, Ghidra index: 1784, label: FUN_00091450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1c18;
extern uint32_t PTR_LAB_003a1b3c;
extern uint32_t PTR_LAB_003a1b58;
extern uint32_t PTR_LAB_003a1bf0;
void FUN_00091450(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  unaff_ESI[1] = PTR_FUN_003a1c18;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  FUN_00090ee0(0);
  *unaff_ESI = &PTR_LAB_003a1bf0;
  unaff_ESI[1] = &PTR_LAB_003a1b58;
  puVar1 = unaff_ESI + 0x1e;
  *puVar1 = &PTR_LAB_003a1b3c;
  unaff_ESI[0x1f] = 1;
  unaff_ESI[0x20] = unaff_ESI;
  iVar2 = *(int *)(unaff_EDI + 8);
  unaff_ESI[0x1d] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[0x1d] = puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
