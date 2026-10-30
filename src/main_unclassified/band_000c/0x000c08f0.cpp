/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB3161C4F352E83250A7ADC20354CB8A8B0A7EC3C019865A8F45A0E020ADC2FA
 * Entry: 0x000c08f0, Ghidra index: 2341, label: FUN_000c08f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c08f0(void)

{
  byte *pbVar1;
  int in_EAX;
  
  if ((599 < *(short *)(*(int *)(in_EAX + 0x34) + 0x20)) &&
     (399 < *(short *)(*(int *)(in_EAX + 0x34) + 0x22))) {
    *(byte *)(*(int *)(in_EAX + 0x88) + 0x13) = *(byte *)(*(int *)(in_EAX + 0x88) + 0x13) & 0xfe;
    pbVar1 = (byte *)(*(int *)(in_EAX + 0x84) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    return;
  }
  *(byte *)(*(int *)(in_EAX + 0x88) + 0x13) = *(byte *)(*(int *)(in_EAX + 0x88) + 0x13) | 1;
  pbVar1 = (byte *)(*(int *)(in_EAX + 0x84) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  return;
}
