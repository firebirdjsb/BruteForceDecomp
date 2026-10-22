/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFBA15FDCB444CC74E8731B75383FE2CC69C6BF472706205B81CD41603DDE3DF
 * Entry: 0x00288b90, Ghidra index: 9119, label: FUN_00288b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00288b90(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  bVar2 = true;
  iVar5 = 0;
  while( true ) {
    iVar3 = FUN_00289140();
    *(int *)(in_EAX + 0x414) = iVar3;
    if ((iVar3 == 100) || (iVar3 == 0x65)) goto LAB_00288c0f;
    if (iVar3 == 0x66) {
      *(undefined1 *)(iVar5 + param_4) = 0;
      return 0x65;
    }
    if (iVar3 == param_2) goto LAB_00288c0f;
    if (param_3 + -1 <= *(int *)(in_EAX + 0x410) + 1 + iVar5) break;
    if (!bVar2) {
      *(undefined1 *)(iVar5 + param_4) = 0x20;
      iVar5 = iVar5 + 1;
    }
    pcVar4 = (char *)(in_EAX + 0x10);
    bVar2 = false;
    iVar3 = iVar5 - (int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[iVar3 + param_4] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = iVar5 + *(int *)(in_EAX + 0x410);
  }
  iVar3 = 100;
LAB_00288c0f:
  *(undefined1 *)(iVar5 + param_4) = 0;
  return iVar3;
}
