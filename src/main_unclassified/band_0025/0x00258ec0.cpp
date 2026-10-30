/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3C14C29C69F9BF786789110DD32AF46EF28BAAC4705F21663C612491E64025A
 * Entry: 0x00258ec0, Ghidra index: 8490, label: FUN_00258ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258ec0(uint param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_20 [8];
  
  iVar2 = 0x100;
  in_ECX[1] = (int)in_EAX + param_1;
  *in_ECX = *in_EAX;
  local_20[0] = 0x100;
  local_20[1] = 0x200;
  local_20[2] = 0xc00;
  local_20[3] = 0x2000;
  local_20[4] = 0x10000;
  local_20[5] = 0x100000;
  local_20[6] = 0x4000000;
  local_20[7] = 0;
  piVar3 = local_20;
  puVar1 = in_ECX + 5;
  do {
    piVar3 = piVar3 + 1;
    puVar1[-1] = iVar2;
    iVar2 = *piVar3;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  in_EAX[1] = 0;
  *in_EAX = 0;
  in_EAX[3] = 0;
  in_EAX[4] = in_EAX[4] ^ (in_EAX[4] ^ param_1) & 0x3ffffff;
  in_EAX[5] = 0;
  FUN_00258d60();
  return;
}
