/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCEFA116EFD6D0E3277D8DA9CDEEBA9BA10D5148CD2441BAED4C5584E68A289F
 * Entry: 0x0020b680, Ghidra index: 7338, label: FUN_0020b680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0020b680(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == -0x16dd7a24) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == -0x17319fa6) {
        if (cVar2 == '\0') {
          *(undefined1 *)(in_ECX + 0x44) = *(undefined1 *)param_3;
        }
        else {
          *(undefined1 *)param_3 = *(undefined1 *)(in_ECX + 0x44);
        }
        cVar1 = '\x01';
      }
      if (cVar1 == '\0') {
        if (*param_2 == 0x6761f1c) {
          if (cVar2 == '\0') {
            *(undefined4 *)(in_ECX + 0x48) = *param_3;
          }
          else {
            *param_3 = *(undefined4 *)(in_ECX + 0x48);
          }
          cVar1 = '\x01';
        }
        if ((cVar1 == '\0') && (*param_2 == -0x15e6636f)) {
          if (cVar2 != '\0') {
            *param_3 = *(undefined4 *)(in_ECX + 0x4c);
            return '\x01';
          }
          *(undefined4 *)(in_ECX + 0x4c) = *param_3;
          cVar1 = '\x01';
        }
      }
    }
  }
  return cVar1;
}
