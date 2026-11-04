/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 678614CB90A7708330E8B12A158BC2D6C5EE638633BA6833B38D1652AC4E301E
 * Entry: 0x00178ae0, Ghidra index: 4974, label: FUN_00178ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_00178a40(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469990;
void FUN_00178ae0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(DAT_00469990 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    if ((*(byte *)(puVar2[2] + 0x14) & 1) != 0) {
      FUN_00178a40();
    }
  }
  return;
}
