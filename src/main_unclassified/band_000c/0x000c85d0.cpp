/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D69A27E262EAC3DEBCCDC37B09BFECA00888C701F619D9412603D8F40007FE37
 * Entry: 0x000c85d0, Ghidra index: 2465, label: FUN_000c85d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

int FUN_000c85d0(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar4 = (int *)(in_EAX + 0x34);
  iVar3 = 5;
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8) != iVar1) {
        FUN_0008f6a0(iVar1);
      }
      iVar2 = iVar2 + 1;
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}
