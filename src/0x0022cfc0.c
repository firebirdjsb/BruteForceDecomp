/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9B6A70EB1E365EC5AEC57614C72B55CD9C8BBE068D0CB7E337BFDC4D52AFAA6
 * Entry: 0x0022cfc0, Ghidra index: 7701, label: FUN_0022cfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0022cfc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int unaff_ESI;
  int *piVar3;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  
  local_78 = *(int *)(in_ECX + 0x250);
  local_74 = *(int *)(in_ECX + 0x254);
  if ((*(byte *)(unaff_ESI + 0x58) & 2) != 0) {
    piVar2 = *(int **)(in_ECX + 0x25c);
    piVar3 = (int *)0x0;
    if (piVar2 != *(int **)(in_ECX + 0x260)) {
      do {
        if (*piVar2 == *(int *)(unaff_ESI + 0x5c)) {
          piVar3 = piVar2;
        }
        piVar2 = piVar2 + 3;
      } while (piVar2 != *(int **)(in_ECX + 0x260));
      if (piVar3 != (int *)0x0) {
        if (piVar3[1] != DAT_0046d064) {
          local_78 = piVar3[1];
        }
        if (piVar3[2] != DAT_0046d064) {
          local_74 = piVar3[2];
        }
      }
    }
  }
  if (local_78 != DAT_0046d064) {
    FUN_0022cbe0(in_ECX,unaff_ESI,&local_78,0x3f800000,0);
  }
  iVar1 = local_74;
  if (local_74 != DAT_0046d064) {
    FUN_0003f010();
    local_70 = *(undefined4 *)(unaff_ESI + 0xc);
    local_74 = *(undefined4 *)(unaff_ESI + 8);
    local_6c = *(undefined4 *)(unaff_ESI + 4);
    local_60 = 1;
    local_68 = local_74;
    local_64 = local_70;
    FUN_00179250(*(undefined4 *)(param_1 + 0x208),iVar1,6);
  }
  return;
}
