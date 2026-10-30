/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD16DFBCB4CFF88D28D0D9C42ED9A8CF4B2C2F94D339884056632D77A35B8282
 * Entry: 0x00072850, Ghidra index: 1281, label: FUN_00072850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0006e850(uint param_1);

void FUN_00072850(int param_1)

{
  int unaff_ESI;
  
  if (-1 < (char)(*(char *)(unaff_ESI + 0x124) << 1)) {
    FUN_0006e850(1);
    *(undefined4 *)(param_1 + 0x24 + ((int)(char)(*(char *)(unaff_ESI + 0x124) << 1) >> 1) * 4) = 0;
    *(undefined4 *)(unaff_ESI + 0x120) = 0;
    *(byte *)(unaff_ESI + 0x124) = *(byte *)(unaff_ESI + 0x124) | 0x7f;
  }
  return;
}
