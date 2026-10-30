/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43FBD7E3967530A0B0A9ECF5EFD992715C273E9E77DEE1A46F50A9B2300CDDA9
 * Entry: 0x00206cb0, Ghidra index: 7305, label: FUN_00206cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00206cb0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == -0x1d4df4a3) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0x18da5e5b)) {
      if ((char)param_1 != '\0') {
        *(undefined1 *)param_3 = *(undefined1 *)(in_ECX + 0x48);
        return '\x01';
      }
      *(undefined1 *)(in_ECX + 0x48) = *(undefined1 *)param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
