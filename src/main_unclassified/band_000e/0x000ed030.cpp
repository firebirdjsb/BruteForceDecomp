/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34B9FE13A2B76ECDAE7C042EABEC8045440A2D0C19537B7EB28B057985D47B24
 * Entry: 0x000ed030, Ghidra index: 2945, label: FUN_000ed030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000ed030(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_000ecfe0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == -0xc51d3c) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x5c) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x5c);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0xde5e3f5)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x60);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x60) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
