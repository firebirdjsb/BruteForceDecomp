/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8B219D361427E913EAD6F305D8CC5DE84119BCBDA4111B2E74B92B9212F55B2
 * Entry: 0x001031d0, Ghidra index: 3291, label: FUN_001031d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_001031d0(void)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x78) == 0) {
    if ((*(byte *)(in_ECX + 0x60) & 1) != 0) {
      return;
    }
    cVar1 = (**(code **)(*DAT_00469940 + 0x60))();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(in_ECX + 0x74) = 0;
  }
  else {
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(in_ECX + 0x78));
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = *(int *)(in_ECX + 0x74) + 1;
    *(uint *)(in_ECX + 0x74) = uVar2;
    if ((*(int *)(in_ECX + 0x68) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) >> 2) <= uVar2)) {
      if ((*(byte *)(in_ECX + 0x60) & 4) == 0) {
        return;
      }
      *(undefined4 *)(in_ECX + 0x74) = 0;
      FUN_00103250();
      return;
    }
  }
  FUN_00103250();
  return;
}
