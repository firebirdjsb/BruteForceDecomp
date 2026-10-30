/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C4085EDB405EA9FFCB7A9FB1F69E67DD398F0A56B750764B5CAF096647C030E
 * Entry: 0x000bf6d0, Ghidra index: 2332, label: FUN_000bf6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
bool FUN_000bf6d0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  float10 fVar4;
  
  if (*(int *)(unaff_ESI[3] + 4) == 3) {
    iVar3 = *(int *)(param_2 + 0xe0);
    iVar2 = (**(code **)(unaff_ESI[0x6d] + 0x9c))();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x1b4) + 0x9c))();
    if ((((iVar3 == -1) || (iVar2 == -1)) || ((&DAT_003ffd80)[iVar3 * 10 + iVar2] == '\0')) ||
       (fVar4 = (float10)(**(code **)unaff_ESI[0x1a])(), fVar4 < (float10)0.1)) {
      return false;
    }
  }
  else if (*(int *)(unaff_ESI[3] + 4) == 0x1d) {
    iVar3 = unaff_ESI[0x70];
    iVar2 = (**(code **)(*(int *)(*(int *)(param_2 + 0xe0) + 0x1b4) + 0x9c))();
    if (iVar2 == -1) {
      return false;
    }
    if (iVar3 == -1) {
      return false;
    }
    if ((&DAT_003ffd80)[iVar2 * 10 + iVar3] == '\0') {
      return false;
    }
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x8c))(*(undefined4 *)(param_2 + 0x10));
  return cVar1 != '\0';
}
