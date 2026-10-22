/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E164F9AC705DD5DE65269C5E8429E2B3EFDE1BCFA9FB26BB8955B16A8B4FA0D
 * Entry: 0x002077b0, Ghidra index: 7310, label: FUN_002077b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_002077b0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  char cVar3;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x40);
    cVar3 = (char)param_1;
    if (*param_2 == -0x9642638) {
      if (cVar3 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x40) = uVar2;
    if (cVar1 == '\0') {
      if (*param_2 == 0x18c6906a) {
        if (cVar3 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x44);
        }
        cVar1 = '\x01';
      }
      if (cVar1 == '\0') {
        if (*param_2 == -0x10720d76) {
          if (cVar3 == '\0') {
            *(undefined4 *)(in_ECX + 0x48) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x48);
          }
          cVar1 = '\x01';
        }
        if ((cVar1 == '\0') && (*param_2 == 0x170f888b)) {
          if (cVar3 == '\0') {
            *(undefined4 *)(in_ECX + 0x4c) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x4c);
          }
          cVar1 = '\x01';
        }
      }
    }
    uVar2 = *(undefined1 *)(in_ECX + 0x50);
    if ((cVar1 == '\0') && (*param_2 == 0x172c4e2c)) {
      if (cVar3 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x50) = uVar2;
    if (cVar1 == '\0') {
      if (*param_2 == -0xc6194a8) {
        if (cVar3 == '\0') {
          *(undefined4 *)(in_ECX + 0x54) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x54);
        }
        cVar1 = '\x01';
      }
      if (cVar1 == '\0') {
        if (*param_2 == 0x4d509b8) {
          if (cVar3 == '\0') {
            *(undefined4 *)(in_ECX + 0x58) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x58);
          }
          cVar1 = '\x01';
        }
        if ((cVar1 == '\0') && (*param_2 == 0xa22ead1)) {
          if (cVar3 != '\0') {
            *param_3 = *(undefined4 *)(in_ECX + 0x5c);
            return '\x01';
          }
          *(undefined4 *)(in_ECX + 0x5c) = *param_3;
          cVar1 = '\x01';
        }
      }
    }
  }
  return cVar1;
}
