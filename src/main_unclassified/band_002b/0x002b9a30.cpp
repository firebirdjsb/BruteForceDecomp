/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ABBDE2382A6CFE93BD64282E9E6101D681689D2BB3D3118422795CF22E3D302
 * Entry: 0x002b9a30, Ghidra index: 9875, label: FUN_002b9a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e820;
extern uint32_t PTR_LAB_0038e7d0;
void FUN_002b9a30(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x17];
  *in_ECX = &PTR_LAB_0038e7d0;
  FUN_002bd570();
  FUN_002be050(*(undefined4 *)(iVar1 + 0x170),iVar1);
  *in_ECX = &PTR_FUN_0038e820;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
