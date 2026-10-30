/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB1FB31CAA7B809B992CD23F7C5D2DECE2935FD02A13A90883A8B8D522A370B5
 * Entry: 0x00385452, Ghidra index: 13670, label: FUN_00385452
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00385452(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint in_EDX;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x430);
  do {
    if (iVar2 == 0) {
      *(int *)(in_ECX + 0x430) = iVar4;
      return iVar4 != 0;
    }
    iVar2 = *(int *)(in_ECX + 0x430);
    *(undefined4 *)(in_ECX + 0x430) = *(undefined4 *)(iVar2 + 0x24);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (in_EDX < *(uint *)(iVar3 + 0x1c)) {
LAB_0038547e:
      *(int *)(iVar2 + 0x14) = iVar4;
      iVar4 = iVar2;
    }
    else {
      if ((*(byte *)(iVar3 + 0x10) & 0x40) != 0) {
        *(uint *)(iVar3 + 0x1c) = in_EDX + 1;
        *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & 0xbf;
        goto LAB_0038547e;
      }
      FUN_003853fc();
      pcVar1 = (char *)(iVar3 + 0x20);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & 0xdf;
        *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) & 0xbf;
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      FUN_00380eda(iVar2);
    }
    iVar2 = *(int *)(in_ECX + 0x430);
  } while( true );
}
