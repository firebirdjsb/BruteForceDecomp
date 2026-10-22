/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37330A8D7D4BF42A8187E1268F77BE0E0FB281DDB94A25CAF254A980C6EB03DA
 * Entry: 0x002f83a6, Ghidra index: 10945, label: lstrcpynA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

char * XAPILIB__lstrcpynA(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (*param_2 == '\0') {
        if (param_3 != 0) goto LAB_002f83eb;
        break;
      }
      *pcVar1 = *param_2;
      pcVar1 = pcVar1 + 1;
      param_2 = param_2 + 1;
    }
    pcVar1 = pcVar1 + -1;
LAB_002f83eb:
    *pcVar1 = '\0';
  }
  return param_1;
}
