/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86A510812C157F9AE713B6F7FC4A36472556C7FD23AE8B4213E449453D3495D4
 * Entry: 0x000d6ac0, Ghidra index: 2667, label: FUN_000d6ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
bool FUN_000d6ac0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  bool bVar3;
  
  bVar3 = *in_ECX != DAT_0046d064;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0xc1c);
    iVar2 = FUN_000e1cb0(param_1 + 0xc18,iVar1,*(undefined4 *)(iVar1 + 4));
    FUN_0021d890();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return bVar3;
}
