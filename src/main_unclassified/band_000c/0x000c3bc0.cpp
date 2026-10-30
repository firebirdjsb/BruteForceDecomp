/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A8382E51E8B810F54778262397BC2AB469943049174D4CEBB98C82DA54C8B93
 * Entry: 0x000c3bc0, Ghidra index: 2397, label: FUN_000c3bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c3cc0(int param_1);
extern undefined4 FUN_000ba6a0(void);

void FUN_000c3bc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x28) + -0x2c;
  }
  FUN_000c3cc0(*(int *)(iVar1 + 0x68) + -1);
  iVar1 = *(int *)(in_ECX + 0x28);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar1 + -0x2c;
  }
  iVar2 = *(int *)(iVar4 + 0x68);
  if (((0 < iVar2) && (iVar2 < 5)) &&
     (*(int *)(*(int *)(*(int *)(iVar4 + 100) + 0x70) + 0x34 + iVar2 * 8) != 0)) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar1 + -0x2c;
    }
    iVar2 = *(int *)(iVar4 + 0x68);
    if ((iVar2 < 1) || (4 < iVar2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 100) + 0x70) + 0x34 + iVar2 * 8);
    }
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + -0x2c;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 100) + 0x70);
    iVar3 = 0;
    piVar5 = (int *)(iVar2 + 0x34);
    do {
      if (*piVar5 == iVar4) {
        if (((0 < iVar3) && (iVar3 < 5)) && (*(char *)(iVar3 + 0x58 + iVar2) != '\0')) {
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar1 + -0x2c;
          }
          if (*(int *)(iVar4 + 0x68) != 1) {
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = iVar1 + -0x2c;
            }
            if (*(int *)(iVar1 + 0x68) != 3) {
              FUN_000ba6a0();
              *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
              return;
            }
          }
          FUN_000ba6a0();
          *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 < 5);
  }
  *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) | 1;
  return;
}
