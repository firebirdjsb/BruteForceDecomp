/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8868FB9C8BCFE9590C9A6EE5927B4EB3D4499B5B204D507AC8160E6087BE99D
 * Entry: 0x00202d60, Ghidra index: 7277, label: FUN_00202d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00202d60(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == 0x13e6d98a) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0x1ccdbab0)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x44);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x44) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
