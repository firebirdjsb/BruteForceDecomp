/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B3F753845069FAF7DCB0630ECC90820E4F2229BCF49083954F5D6B0D72D875F
 * Entry: 0x0010e2f0, Ghidra index: 3509, label: FUN_0010e2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010e2f0(undefined4 *param_1,int param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0xc0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_000ff7b0();
  }
  *puVar1 = *param_1;
  puVar1[0x2e] = in_EAX;
  puVar1[0x2f] = param_2;
  FUN_0010dfc0(puVar1,param_1,param_2);
  FUN_001611d0();
  param_2 = in_EAX + param_2;
  for (; in_EAX < param_2; in_EAX = in_EAX + 1) {
    *(undefined4 **)(*(int *)(in_ECX + 0xac) + in_EAX * 4) = puVar1;
  }
  return;
}
