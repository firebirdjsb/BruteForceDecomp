/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3356FC2662623C7B8A96512E2E7D6C2539C3A278540FE5408376732094F81375
 * Entry: 0x002635e0, Ghidra index: 8683, label: FUN_002635e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004432f8;
void FUN_002635e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  iVar2 = param_1;
  piVar3 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    piVar3 = DAT_004432f8;
  }
  piVar1 = *(int **)(in_ECX + 0x14);
  param_1 = 0xe0c43d05;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  (**(code **)(*piVar3 + 0xc))
            (piVar3,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&param_1,
             (undefined4 *)(in_ECX + 0x14));
  return;
}
