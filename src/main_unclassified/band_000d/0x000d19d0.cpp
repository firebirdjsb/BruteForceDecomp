/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38A1F95C7EB239682A5E34CAFE2B71122AEFD97F346A463446907C65FE49D36A
 * Entry: 0x000d19d0, Ghidra index: 2605, label: FUN_000d19d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d2760(void);

void FUN_000d19d0(undefined4 param_1)

{
  int in_EAX;
  
  FUN_000d2760();
  *(undefined4 *)(in_EAX + 0x28) = param_1;
  *(undefined4 *)(in_EAX + 0x24) = 0x3f000000;
  *(undefined4 *)(in_EAX + 0x1c) = 0xb;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  return;
}
