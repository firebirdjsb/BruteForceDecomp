/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71C17FA5B5ED5018B51332B3F75952A6D6D1EC690F74EE0504F472C1F6E78D82
 * Entry: 0x0003c500, Ghidra index: 429, label: FUN_0003c500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003c500(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(in_EAX + 0x10) != 0) {
    uVar2 = *(int *)(in_EAX + 0xc) + 1;
    *(uint *)(in_EAX + 0xc) = uVar2;
    if (*(uint *)(in_EAX + 8) <= uVar2) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
    iVar1 = *(int *)(in_EAX + 0x10) + -1;
    *(int *)(in_EAX + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
  }
  return;
}
