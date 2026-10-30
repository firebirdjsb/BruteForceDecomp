/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D16C3B0948BE23BDF5BF9A2F9D15435749DB392BB8020E2507E3BC4BE9D63986
 * Entry: 0x00162fc0, Ghidra index: 4664, label: FUN_00162fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00162fc0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00156390(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == -0x15075ca5) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x1b0) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x1b0);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0xe99f5f3)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x1b4);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x1b4) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
