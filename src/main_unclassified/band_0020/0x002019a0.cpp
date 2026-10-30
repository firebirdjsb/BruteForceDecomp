/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B71B581335DFA5AB0DED69E241DFCF7A16020B71ABE758FF333626FAD60E50D9
 * Entry: 0x002019a0, Ghidra index: 7262, label: FUN_002019a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
undefined4 FUN_002019a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  if (piVar1 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar1 + 0x5c))(piVar1);
    return uVar3;
  }
  iVar2 = *(int *)(in_ECX + 0x6c);
  if (*(int *)(iVar2 + 0x14) != 0) {
    (**(code **)(*DAT_00469944 + 0x14))(*(int *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  return 1;
}
