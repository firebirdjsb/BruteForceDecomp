/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 954F8A1FDFB26E76D7C715EC46E09CFD5453F85EAE80653997AEF375C430FEE0
 * Entry: 0x003430b7, Ghidra index: 12702, label: FUN_003430b7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003430b7(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0xffffffff)) &&
     ((param_3 < *(uint *)(*(int *)(param_1 + 0xc) + 0xc) &&
      (pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + param_3 * 4),
      pcVar1 != (code *)0x0)))) {
    (*pcVar1)(param_2);
  }
  return;
}
