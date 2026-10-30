/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08F55E0D428710C1CAB21CA45E6B22D806F85C19D4650FF821A7C65235F714B3
 * Entry: 0x00264f80, Ghidra index: 8717, label: FUN_00264f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392894;
void FUN_00264f80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00392894;
  FUN_00265440();
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)in_ECX[5];
    in_ECX[5] = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = in_ECX[5];
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)in_ECX[3];
    in_ECX[3] = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = in_ECX[3];
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}
