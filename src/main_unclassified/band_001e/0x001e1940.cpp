/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98F35E6C83A7BA0F39AA3D350AB77A8D1F3993D9100751668268A36029AD0496
 * Entry: 0x001e1940, Ghidra index: 6736, label: FUN_001e1940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e1940(int param_1,int param_2)

{
  int in_EAX;
  undefined4 unaff_ESI;
  
  FUN_001e1700(unaff_ESI,param_1,in_EAX,param_2);
  FUN_001e1700(unaff_ESI,param_1 + 0x10,in_EAX + 0x10,param_2 + 0x10);
  FUN_001e1700(unaff_ESI,param_1 + 0x20,in_EAX + 0x20,param_2 + 0x20);
  FUN_001e1700(unaff_ESI,param_1 + 0x30,in_EAX + 0x30,param_2 + 0x30);
  FUN_001e1700(unaff_ESI,param_1 + 0x40,in_EAX + 0x40,param_2 + 0x40);
  FUN_001cd500();
  FUN_001e1700(unaff_ESI,param_1 + 0x60,in_EAX + 0x60,param_2 + 0x60);
  return;
}
