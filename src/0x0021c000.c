/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B156BB1D601A01674CC53E46F0B88D6610DF9D59A454280B132D4FBC8C4FBFFE
 * Entry: 0x0021c000, Ghidra index: 7520, label: FUN_0021c000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0021c000(undefined4 param_1,int *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  int in_ECX;
  
  cVar1 = FUN_0015fc20(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = (char)param_1;
  if (*param_2 == 0x1aa18c8c) {
    if (cVar1 == '\0') {
      FUN_0015f0b0();
    }
    else {
      FUN_0015efb0();
    }
  }
  else {
    cVar2 = '\0';
    if (*param_2 != 0x1e40fd68) goto LAB_0021c064;
    if (cVar1 != '\0') {
      *param_3 = *(byte *)(in_ECX + 0x10c) & 1;
    }
  }
  cVar2 = '\x01';
LAB_0021c064:
  if (cVar2 == '\0') {
    if (*param_2 == 0xe528ccb) {
      if (cVar1 == '\0') {
        *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)param_3;
      }
      else {
        *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0xac);
      }
      cVar2 = '\x01';
    }
    if (cVar2 == '\0') {
      if (*param_2 == -0x11362273) {
        if (cVar1 == '\0') {
          *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)param_3;
        }
        else {
          *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0xb8);
        }
        cVar2 = '\x01';
      }
      if (cVar2 == '\0') {
        if (*param_2 == 0xf85824e) {
          if (cVar1 == '\0') {
            *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)param_3;
          }
          else {
            *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0xa4);
          }
          cVar2 = '\x01';
        }
        if ((cVar2 == '\0') && (*param_2 == -0xeddfb4e)) {
          if (cVar1 != '\0') {
            *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 0xa8);
            return '\x01';
          }
          *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)param_3;
          cVar2 = '\x01';
        }
      }
    }
  }
  return cVar2;
}
