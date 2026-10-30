/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE7BB445DC4885E9A50E01D3BAE2342FA309D4854C57895D51A4D4D451F3895D
 * Entry: 0x00315e78, Ghidra index: 12122, label: FUN_00315e78
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
void FUN_00315e78(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((((param_1 < 0x100) && (*(int *)(in_ECX + 700) == 0)) &&
      ((*(uint *)(param_1 * 0x80 + 4 + DAT_0032ff48) & 0x800000) == 0)) &&
     ((iVar1 = *(int *)(in_ECX + 0x2c0 + param_1 * 4),
      param_1 == *(ushort *)(iVar1 + 10 + (uint)*(byte *)(iVar1 + 100) * 2) &&
      (*(int **)(iVar1 + 0x4c) != (int *)(iVar1 + 0x4c))))) {
    FUN_00317b5d(1);
  }
  return;
}
