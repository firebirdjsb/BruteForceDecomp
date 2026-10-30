/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E13CCD63725C4B17D7AF2D9B132EAC7A0A65CD688269E67B21AAC9FD705DCCB6
 * Entry: 0x002894a0, Ghidra index: 9124, label: FUN_002894a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003914e0;
extern uint32_t PTR_LAB_00391530;
void FUN_002894a0(byte param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = in_ECX[4];
  *in_ECX = PTR_LAB_00391530;
  if ((iVar2 != 0) && (in_ECX[5] != -1)) {
    in_ECX[4] = 0;
    piVar1 = (int *)(iVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
  }
  *in_ECX = PTR_LAB_003914e0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
