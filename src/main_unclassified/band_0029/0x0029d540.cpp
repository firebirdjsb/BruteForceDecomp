/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 577BE067601EF659A152EF863F11A8338B5012BF7A11FF302C60534E082FBB91
 * Entry: 0x0029d540, Ghidra index: 9458, label: FUN_0029d540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_internal_array_bigger_than__int__004047c0[];
void FUN_0029d540(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00469888;
  *(int *)(DAT_00469888 + 0x24) = *(int *)(DAT_00469888 + 0x28) + param_1 + 0x20;
  uVar2 = FUN_00294b10(1,s_internal_array_bigger_than__int__004047c0);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  return;
}
