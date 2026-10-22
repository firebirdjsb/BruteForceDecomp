/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FAD5C0760D8972EF0F08FB8ED31B53DE2E23ED9870DE2393DB169ED8C001E92
 * Entry: 0x0023df90, Ghidra index: 7969, label: FUN_0023df90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0023df90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  code *unaff_EBX;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    while( true ) {
      cVar2 = (*unaff_EBX)(*param_2);
      if (cVar2 == '\0') break;
      param_2 = param_2 + 1;
      if (param_2 == param_3) goto LAB_0023dfb7;
    }
    if (param_2 == param_3) break;
    do {
      param_3 = param_3 + -1;
      if (param_2 == param_3) goto LAB_0023dfb7;
      cVar2 = (*unaff_EBX)(*param_3);
    } while (cVar2 == '\0');
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
  }
LAB_0023dfb7:
  *param_1 = param_2;
  return param_1;
}
