/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A23DEE08BD1E47A950CC2E0113572D5E19D116A57F3B9DE5DC09A0EDDD189656
 * Entry: 0x003800bb, Ghidra index: 13525, label: FUN_003800bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft signature only; original Xbox ABI_UNVERIFIED. */
extern undefined4 FUN_00381139(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412678;
extern uint32_t DAT_0041267c;
int FUN_003800bb(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  if (DAT_00412678 != 0) {
    do {
      if (((((*(byte *)(DAT_0041267c + uVar3 * 0x16 + 4) & 1) != 0) &&
           (iVar1 = FUN_00381139(), iVar1 == in_EDX)) &&
          (iVar1 = DAT_0041267c + uVar3 * 0x16, *(int *)(iVar1 + 0xe) == in_ECX)) &&
         (((*(byte *)(iVar1 + 4) & 8) != 0 && ((*(byte *)(iVar1 + 4) & 2) == 0)))) {
        iVar4 = iVar1;
      }
      bVar2 = (char)uVar3 + 1;
      uVar3 = (uint)bVar2;
    } while (bVar2 < DAT_00412678);
  }
  return iVar4;
}
