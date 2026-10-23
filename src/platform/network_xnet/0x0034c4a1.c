/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16EB5B554B2664EA5B15C33A3ECB68AFC64F5AEC672931962A5FD562E6B4C3B2
 * Entry: 0x0034c4a1, Ghidra index: 12960, label: FUN_0034c4a1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1
FUN_0034c4a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char *param_7,int param_8)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char local_18 [20];
  
  XcHMAC(param_1,param_2,param_3,param_4,param_5,param_6,local_18);
  pcVar3 = local_18;
  do {
    if (param_8 == 0) {
      return 1;
    }
    param_8 = param_8 + -1;
    cVar2 = *pcVar3;
    cVar1 = *param_7;
    param_7 = param_7 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  return 0;
}
