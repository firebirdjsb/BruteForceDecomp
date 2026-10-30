/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14FC4F6D2A301CA68428D0DF6B4E8C7D1DA3DDED55F9EB3E0E3A0C0EAF8B5DA3
 * Entry: 0x000e3c70, Ghidra index: 2829, label: FUN_000e3c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3c70(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  
  if (in_EAX <= param_2) {
    *(undefined4 *)(param_1 + in_EAX * 4) = param_3;
    return;
  }
  do {
    iVar2 = (in_EAX + -1) / 2;
    cVar1 = (*param_4)(*(undefined4 *)(param_1 + iVar2 * 4),param_3);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + in_EAX * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    in_EAX = iVar2;
  } while (param_2 < iVar2);
  *(undefined4 *)(param_1 + in_EAX * 4) = param_3;
  return;
}
