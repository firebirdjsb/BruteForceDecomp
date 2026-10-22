/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E329CC21B9582816C7CECC43EAFC9437829310B0EAB0701B64B0B25C7614545
 * Entry: 0x001fa740, Ghidra index: 7090, label: FUN_001fa740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001fa740(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  char cVar2;
  
  cVar1 = FUN_001fa520(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    cVar2 = (char)param_1;
    if (*param_2 == 0x147dc0d0) {
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX + 0x128) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x128);
      }
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      if (*param_2 == -0x1fdd26de) {
        if (cVar2 == '\0') {
          *(undefined4 *)(in_ECX + 0x124) = *param_3;
        }
        else {
          *param_3 = *(undefined4 *)(in_ECX + 0x124);
        }
        cVar1 = '\x01';
      }
      if ((cVar1 == '\0') && (*param_2 == 0x18499bb9)) {
        if (cVar2 != '\0') {
          *param_3 = *(undefined4 *)(in_ECX + 0x120);
          return '\x01';
        }
        *(undefined4 *)(in_ECX + 0x120) = *param_3;
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}
