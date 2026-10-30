/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8573E8873A034EA8A6BE32563B99ACA231653F6B600D64BFB3E1E81FBF31B96
 * Entry: 0x00109660, Ghidra index: 3406, label: FUN_00109660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_00109660(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_4;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  bVar2 = false;
  if (iVar1 == 0) {
    return false;
  }
  if ((*(byte *)(unaff_EDI + 0x28) & 2) == 0) {
    if ((*(byte *)(iVar1 + 0x66) & 1) != 0) {
      local_4 = 0xfd890279;
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&local_4);
    }
  }
  else {
    cVar3 = FUN_00100ea0();
    iVar4 = FUN_00109600(unaff_EDI);
    bVar2 = 0 < (int)(iVar4 + (uint)(cVar3 != '\0'));
    if ((bVar2) && ((*(byte *)(iVar1 + 0x66) & 1) != 0)) {
      local_4 = 0xf06bc0ab;
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&local_4);
      return true;
    }
  }
  return bVar2;
}
