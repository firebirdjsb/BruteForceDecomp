/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C739443AC80BF6B3360EFBC90AE2A5DE155DD514C8999D66A0583CD8CF40B3D
 * Entry: 0x00313e3c, Ghidra index: 12041, label: FUN_00313e3c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386994;
extern uint32_t PTR_LAB_003869e0;
void FUN_00313e3c(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00386994;
  if (in_ECX[0x2c] != 0) {
    FUN_00312dc6(0);
  }
  iVar1 = in_ECX[0x2d];
  if (iVar1 != 0) {
    FUN_00314937(iVar1);
    in_ECX[0x2d] = 0;
  }
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
