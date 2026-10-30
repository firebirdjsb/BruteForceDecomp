/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25111D53D2A7369293DB702900A8E308D837578AC8ECB7766C48274549F5B95C
 * Entry: 0x002a5720, Ghidra index: 9568, label: FUN_002a5720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x002a5745 CALL EAX after loading [0x0046985c]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_0046985c;
undefined4 FUN_002a5720(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  (**(code **)(*param_2 + 0x20))(param_2);
  if (DAT_0046985c != (code *)0x0) {
    (*DAT_0046985c)(0,param_2,0);
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  return 0;
}
