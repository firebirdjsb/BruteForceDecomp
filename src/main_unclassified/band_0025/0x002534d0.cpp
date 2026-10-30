/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70192571CF86408C8E49A042D18799FE13D51A37BE97D1738336D76191E3E129
 * Entry: 0x002534d0, Ghidra index: 8400, label: FUN_002534d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002534d0(undefined4 param_1,int param_2)

{
  int unaff_ESI;
  undefined1 local_54 [36];
  undefined1 local_30 [48];
  
  FUN_002333b0(unaff_ESI + 0xc);
  FUN_0003d6c0(local_30,local_54,unaff_ESI);
  FUN_0003d730(param_2 + 0x14,local_30);
  return;
}
