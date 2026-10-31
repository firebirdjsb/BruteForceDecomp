/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E9299ED1D7261DA57A7B6E63D4A4CAF3A3B06DBF41006237E37E6C637866B8E
 * Entry: 0x002948b0, Ghidra index: 9296, label: FUN_002948b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_002948b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  while (in_ECX != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*in_ECX;
    if (in_ECX[3] == -1) {
      iVar2 = 1;
    }
    else {
      iVar2 = ((int)(in_ECX[8] + ((int)in_ECX[8] >> 0x1f & 0x3fU)) >> 6) + 1;
    }
    *(int *)(DAT_00469888 + 0x78) = *(int *)(DAT_00469888 + 0x78) - iVar2;
    FUN_00294b90(in_ECX,0);
    in_ECX = puVar1;
  }
  return;
}
