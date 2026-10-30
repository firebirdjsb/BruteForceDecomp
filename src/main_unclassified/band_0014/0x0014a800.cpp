/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61C584A3B6BBB3E74868854F375572283D925DACB2D76105F400D4428106F124
 * Entry: 0x0014a800, Ghidra index: 4295, label: FUN_0014a800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_0014a80c_caseD_0[];
int FUN_0014a800(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (int)*(char *)(in_EAX + 0x1b8);
  switch(iVar1) {
  case 0:
  case 1:
  case 2:
    goto switchD_0014a80c_caseD_0;
  default:
    iVar1 = 1;
switchD_0014a80c_caseD_0:
    return iVar1;
  case 4:
    return 2;
  case 6:
    return 0;
  }
}
