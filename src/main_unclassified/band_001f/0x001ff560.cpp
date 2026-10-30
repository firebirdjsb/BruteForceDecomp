/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39D33E05B3E49A9032B01558D4FC98E1F7D41A8F8718ED13FC219F1147BC088A
 * Entry: 0x001ff560, Ghidra index: 7246, label: FUN_001ff560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001ff560(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == -0x58774e) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == 0x1bdf702d) {
        if (cVar2 == '\0') {
          *(undefined4 *)(in_ECX + 0x44) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x44);
        }
        cVar1 = '\x01';
      }
      if ((cVar1 == '\0') && (*param_2 == 0x15914ab)) {
        if (cVar2 != '\0') {
          *param_3 = *(undefined4 *)(in_ECX + 0x48);
          return '\x01';
        }
        *(undefined4 *)(in_ECX + 0x48) = *param_3;
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}
