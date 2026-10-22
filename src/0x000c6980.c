/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5B452625571EAC8EEDAC73EC25E47020835E0C0A62F8FF3D2A2C26540CC681
 * Entry: 0x000c6980, Ghidra index: 2442, label: FUN_000c6980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6980(float param_1,undefined4 param_2,float param_3)

{
  int in_EAX;
  
  *(char *)(in_EAX + 0x2c) = (char)param_2;
  *(char *)(in_EAX + 0x2d) = (char)((uint)param_2 >> 8);
  *(char *)(in_EAX + 0x2e) = (char)((uint)param_2 >> 0x10);
  *(float *)(in_EAX + 0x34) = param_3;
  *(float *)(in_EAX + 0x30) = param_1;
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xfe;
  *(float *)(in_EAX + 0x38) = param_3 / param_1;
  return;
}
