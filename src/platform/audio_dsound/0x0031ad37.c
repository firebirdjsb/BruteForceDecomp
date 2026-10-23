/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F234D19440BE334B451B6CB5E1D3BC3F266C9B1323F4BBE637B55470359FB3B
 * Entry: 0x0031ad37, Ghidra index: 12279, label: FUN_0031ad37
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032ff0c;
bool FUN_0031ad37(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  FUN_003118f0();
  uVar3 = param_2 - param_3;
  if (0x5c < uVar3) {
    piVar1 = (int *)(param_3 + param_1);
    piVar1[2] = param_1;
    *piVar1 = in_ECX + 8;
    piVar1[1] = *(int *)(in_ECX + 0xc);
    *(int **)(in_ECX + 0xc) = piVar1;
    *(int **)piVar1[1] = piVar1;
    iVar2 = FUN_0031aa47(piVar1 + 3,uVar3 - 0xc,in_ECX + 0x10);
    if ((*(int *)(in_ECX + 0x18) == 0) ||
       (*(uint *)(*(int *)(in_ECX + 0x18) + 8) < *(uint *)(iVar2 + 8))) {
      *(int *)(in_ECX + 0x18) = iVar2;
    }
    *DAT_0032ff0c = *DAT_0032ff0c + param_2;
  }
  FUN_00311923();
  return 0x5c < uVar3;
}
