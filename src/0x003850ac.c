/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44928EEC1BF4EAC95F64DD9CC6B9A21FDBC024AB76604DB2F64DBEDA415BAC84
 * Entry: 0x003850ac, Ghidra index: 13664, label: FUN_003850ac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003850ac(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  
  *(char *)(in_EDX + 0x27) = *(char *)(in_EDX + 0x27) + -1;
  if (*(int *)(param_1 + 0x18) != 0) {
    MmLockUnlockBufferPages(*(int *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x20),1);
  }
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    iVar3 = *(int *)(in_ECX + 0x42c);
    iVar4 = 0;
    if (*(int *)(in_ECX + 0x42c) != 0) {
      do {
        iVar2 = iVar3;
        iVar3 = iVar2;
        if (param_1 == iVar2) break;
        iVar3 = *(int *)(iVar2 + 0x24);
        iVar4 = iVar2;
      } while (iVar3 != 0);
      if (iVar3 != 0) {
        if (iVar4 == 0) {
          *(undefined4 *)(in_ECX + 0x42c) = *(undefined4 *)(iVar3 + 0x24);
        }
        else {
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
        }
        *(undefined4 *)(iVar3 + 0x24) = 0;
        pcVar1 = (char *)(in_EDX + 0x20);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *(byte *)(in_EDX + 0x10) = *(byte *)(in_EDX + 0x10) & 0xdf;
          *(byte *)(in_EDX + 1) = *(byte *)(in_EDX + 1) & 0xbf;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
  FUN_00380eda(param_1);
  return;
}
