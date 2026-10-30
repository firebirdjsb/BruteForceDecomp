/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41B04B3A193E4B228D29019854F6B4A7D68A4F7E8A1F837AA5046C888E1438F6
 * Entry: 0x00165920, Ghidra index: 4702, label: FUN_00165920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a84c;
extern uint32_t PTR_FUN_0039a894;
extern uint32_t PTR_LAB_0039a864;
void FUN_00165920(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  iVar2 = unaff_EDI[2];
  *unaff_EDI = PTR_LAB_0039a864;
  if (iVar2 != 0) {
    FUN_00165970();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  puVar1 = unaff_EDI + 0x8a;
  iVar2 = 0x1b;
  do {
    puVar1 = puVar1 + -5;
    iVar2 = iVar2 + -1;
    *puVar1 = &PTR_FUN_0039a894;
  } while (iVar2 != 0);
  *unaff_EDI = &PTR_FUN_0039a84c;
  return;
}
