/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E356DAE8A33B56A38164DE73FCC4786C8C93F2C360C76DB65369A2D86AAD1359
 * Entry: 0x002ebaeb, Ghidra index: 10637, label: FUN_002ebaeb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
int FUN_002ebaeb(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_003b6c30 < 2) {
    uVar1 = (byte)PTR_DAT_003b6c3c[param_1 * 2] & 2;
  }
  else {
    uVar1 = FUN_002eba73(param_1,2);
  }
  iVar2 = param_1 + -0x20;
  if (uVar1 == 0) {
    iVar2 = param_1;
  }
  return iVar2;
}
