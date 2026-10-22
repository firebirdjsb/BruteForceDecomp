/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB104FBECB2FA0919DAC7CE54A8EFA733D10C6033CC0FA195FC61E5F9016F08A
 * Entry: 0x000ef180, Ghidra index: 2968, label: FUN_000ef180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef180(void)

{
  byte bVar1;
  byte in_AL;
  int *in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 10);
  if (in_AL != (bVar1 >> 2 & 1)) {
    *(byte *)(in_ECX + 10) = (in_AL << 2 ^ bVar1) & 4 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x000ef19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x28))();
    return;
  }
  return;
}
