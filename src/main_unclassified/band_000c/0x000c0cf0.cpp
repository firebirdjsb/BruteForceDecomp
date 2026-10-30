/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 441C6F54EE39AB16DE34D20ADE2D86BF0C4D9DA3A72FA324DC8B3A18B7E75286
 * Entry: 0x000c0cf0, Ghidra index: 2345, label: FUN_000c0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c1150(void);

void FUN_000c0cf0(float param_1)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0xbc);
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x98) = 0;
  }
  else if ((bVar1 & 4) == 0) {
    if ((bVar1 & 8) != 0) {
      param_1 = *(float *)(in_EAX + 0x98) - param_1;
      *(float *)(in_EAX + 0x98) = param_1;
      if (!isnan(param_1) && param_1 < 0.0 != (param_1 == 0.0)) {
        *(undefined4 *)(in_EAX + 0x98) = 0;
        *(byte *)(in_EAX + 0xbc) = bVar1 & 0xf7;
        FUN_000c1150();
        return;
      }
    }
  }
  else {
    param_1 = param_1 + *(float *)(in_EAX + 0x98);
    *(float *)(in_EAX + 0x98) = param_1;
    if (*(float *)(in_EAX + 0x9c) <= param_1) {
      *(undefined4 *)(in_EAX + 0x98) = *(undefined4 *)(in_EAX + 0x9c);
      *(byte *)(in_EAX + 0xbc) = bVar1 & 0xfb;
      return;
    }
  }
  return;
}
