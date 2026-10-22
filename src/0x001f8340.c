/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86155A5FD5ED55C92E3679318F3D24638747F22FD58E373CE86FA9F4DDC3DC90
 * Entry: 0x001f8340, Ghidra index: 7062, label: FUN_001f8340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8340(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 code *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  
  while (param_2 < in_EAX) {
    iVar4 = (in_EAX + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    cVar3 = (*param_6)(puVar1,&param_3);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + in_EAX * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    in_EAX = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + in_EAX * 0xc);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  return;
}
