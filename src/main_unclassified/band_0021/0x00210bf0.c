/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F00525729D4A2A45EADAD7A918B42A19075F6AF0B645DFF633C75AA77B27D853
 * Entry: 0x00210bf0, Ghidra index: 7434, label: FUN_00210bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_00210bf0(int param_1)

{
  undefined4 *puVar1;
  uint *unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  /* 0x210c00/0x210c1a overwrite only the low byte of the incoming
   * DWORD. The full word is forwarded at 0x210c2f/34, so retain high bits.
   * Original EBP/ECX and callee return contracts remain ABI_UNVERIFIED. */
  bf_x86_word_store_byte(&param_1,0U,1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      bf_x86_word_store_byte(&param_1,0U,*unaff_EBX < (uint)puVar1[3]);
      if (*unaff_EBX < (uint)puVar1[3]) {
        puVar1 = (undefined4 *)*puVar1;
      }
      else {
        puVar1 = (undefined4 *)puVar1[2];
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  puVar1 = (undefined4 *)FUN_00129c60(&param_1,param_1,unaff_EBX);
  *unaff_EDI = *puVar1;
  *(undefined1 *)(unaff_EDI + 1) = 1;
  return;
}
